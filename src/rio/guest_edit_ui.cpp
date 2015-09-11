/*****************************************************************************
 * guest_edit_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "guest_edit_ui.h"

#include <QDebug>
#include <QMessageBox>

Guest_Edit_Ui::Guest_Edit_Ui( QWidget * parent ) : QWidget( parent )
{
    // clear pointer
    currentGuest = 0;

    // setup the gui
    ui.setupUi( this );

    // reset the fields
    ResetFields();

    // connect the dots

    connect( ui.saveGuest, SIGNAL( clicked() ),
             this, SLOT( UpdateGuest() ) );

    connect( this, SIGNAL( Completed( int ) ),
             this, SLOT( YieldScreen( int ) ) );

}


bool Guest_Edit_Ui::ResetFields()
{
    //clear text
    ui.firstName->clear();
    ui.lastName->clear();
    ui.guestNotes->clear();

    ui.customerHint->clear();

    //reset drop down to first item
    ui.titleChooser->setCurrentIndex( 0 );
    ui.sex->setCurrentIndex( 0 );

    //reset date to any arbitrary past date, using the current date
    // as a default really doesn't make sense here
    ui.dateOfBirth->setDate( QDate(1970,1,1) );

    return true;
}



void Guest_Edit_Ui::SetActiveGuest( QPointer<Guest> guest )
{
    currentGuest = guest;

    RefreshView();
}


void Guest_Edit_Ui::RefreshView()
{
    //setup text fields
    ui.firstName->setText( currentGuest->GetFirstName() );
    ui.lastName->setText( currentGuest->GetLastName() );
    ui.guestNotes->setHtml( currentGuest->GetNotes() );


    //FIXME: a challenge?
    ui.customerHint->clear();

    int index =  ui.titleChooser->findText( currentGuest->GetTitle() );
    ui.titleChooser->setCurrentIndex( (index > 0)?( index ):( 0 ) );


    ui.sex->setCurrentIndex( currentGuest->GetSex() );


    ui.dateOfBirth->setDate( currentGuest->GetDateOfBirth() );
}



bool Guest_Edit_Ui::UpdateGuest()
{
    if ( not currentGuest )
    {
        //VERY BAD MOJO
        qDebug("YIKES Invalid current guest!!");
        return false;
    }


    //certains fields must be filled in!
    if ( not ui.firstName->text().length()
         or not ui.lastName->text().length() )
    {
        QString err ("Please make sure that both the guest's first and"
                     " last names are filled in.");

        QMessageBox::warning( this, "Cannot store guest.", err );

        return false;
    }


    emit Completed( currentGuest->Store() );

    return true;

}

bool Guest_Edit_Ui::YieldScreen( int status )
{
    if ( not status )
    {
        qDebug("Something really bad just happend?");
    }

    qDebug( "Guest edit yields screen to Resv Edit." );
    //Main_Window::MainWin()->ChangeScreen( "Room_Resv_Edit_Ui" );

    return true;
}



// EOF: guest_edit_ui.cpp

