/*****************************************************************************
 * checkin_confirm_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "checkin_confirm_ui.h"

#include <QDebug>
#include <mainwindow/main_window.h>

Checkin_Confirm_Ui::Checkin_Confirm_Ui( QWidget * parent )
    : QWidget( parent )
{
    qDebug("Creating Checkin Confirmation Screen.");

    ui.setupUi( this );

    currentResv = 0;

    //connect the buttons

    connect( ui.confirmCheckin, SIGNAL( clicked() ),
             this, SLOT( Confirm() ) );


    connect( ui.cancelCheckin, SIGNAL( clicked() ),
             this, SLOT( Cancel() ) );

    connect( this, SIGNAL( ShowScreen() ),
             this, SLOT( UpdateView() ) );
}


void Checkin_Confirm_Ui::SetActiveReservation( QPointer<Room_Reservation> resv )
{
    currentResv = resv;

    UpdateView(); //FIXME: is this redundant?
}


void Checkin_Confirm_Ui::UpdateView()
{
    if ( not currentResv )
    {
        qDebug(  "Current resv not set! HOW?!" );
        return;
    }

    
    while ( ui.confirmView->topLevelItemCount() )
    {
        delete ui.confirmView->takeTopLevelItem( 0 );
    }
    

    QTreeWidgetItem* show = new QTreeWidgetItem;
    show->setText( 0, QString::number(currentResv->GetRoomNumber()) );
    show->setText( 1, currentResv->GuestName() );
    show->setText( 2, currentResv->GetStartDate().toString() );
    show->setText( 3, currentResv->GetEndDate().toString() );

    ui.confirmView->addTopLevelItem( show );


    ui.confirmView->resizeColumnToContents( 0 );
    ui.confirmView->resizeColumnToContents( 1 );
    ui.confirmView->resizeColumnToContents( 2 );
    ui.confirmView->resizeColumnToContents( 3 );
}

void Checkin_Confirm_Ui::Confirm()
{
    if ( not currentResv )
    {
        qDebug(  "Current resv not set! HOW?!" );
        return;
    }


    if ( currentResv->GetState() != Room_Reservation::Ready )
    {
        QMessageBox::warning( this, "Cannot check in",
                            "The system can not check this guest in.\n"
                            "They may have already been checked in by "
                            "Another Employee" );
    }
    else
    {
        currentResv->SetState( Room_Reservation::Active );
        bool ok = currentResv->Store();
        if ( not ok )
            QMessageBox::critical( this, "System Error",
                                   "The system cannot save the reservation." );
    }


    Main_Window::MainWin()->ChangeScreen( "Room_Resv_Chooser_Ui" );

}

void Checkin_Confirm_Ui::Cancel()
{
    Main_Window::MainWin()->ChangeScreen( "Room_Resv_Chooser_Ui" );
}




// EOF: checkin_confirm_ui.cpp

