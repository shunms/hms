/*****************************************************************************
 * room_resv_edit_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "room_resv_edit_ui.h"

#include <QDebug>
#include <QDate>
#include <QMessageBox>
#include <QIntValidator>

#include <rio/checkin_confirm_ui.h>
#include <rio/guest_edit_ui.h>
#include <rio/customer_edit_ui.h>

Room_Resv_Edit_Ui::Room_Resv_Edit_Ui( QWidget * parent )
    : QWidget( parent )
{
    qDebug("Created Room_Resv_Edit_Ui.");

    currentResv = 0;

    ui.setupUi( this );

    //set validators
    QIntValidator* validRoomNum = new QIntValidator( ui.roomNumber );
    ui.roomNumber->setValidator( validRoomNum );


    ResetFields();



    //connectiones
    connect( ui.saveButton, SIGNAL( clicked() ),
             this, SLOT( UpdateReservation() ) );

    connect( ui.cancelButton, SIGNAL( clicked() ),
             this, SLOT( Cancel() ) );


    connect( this, SIGNAL( Completed( int ) ),
             this, SLOT( YieldScreen( int ) ) );


    //guest and customer edit buttons

    connect( ui.addGuestButton, SIGNAL( clicked() ),
             this, SLOT( EditGuest() ) );

    connect( ui.addCustomerButton, SIGNAL( clicked() ),
             this, SLOT( EditCustomer() ) );


    //guest and customer autocomplete mechanism
    connect( ui.guestName, SIGNAL( editingFinished() ),
             this, SLOT( FixupGuest() ) );

    connect( ui.customerName, SIGNAL( editingFinished() ),
             this, SLOT( FixupCustomer() ) );


    //guest and customer name change detection
    /*
    integrated into fixup functions instead

    connect( ui.guestName, SIGNAL( editingFinished() ),
             this, SLOT( GuestNameChanged() ) );

    connect( ui.customerName, SIGNAL( editingFinished() ),
             this, SLOT( CustomerNameChanged() ) );
    */

}


bool Room_Resv_Edit_Ui::ResetFields()
{
    //blank the text
    ui.customerName->clear();
    ui.guestName->clear();
    ui.roomNumber->clear();
    ui.resvNotes->clear();
    ui.resvHistory->clear();

    //set the dates to now
    ui.fromDate->setDate( QDate::currentDate() );
    ui.toDate->setDate( QDate::currentDate() );

    //set dropdown box to first entry
    ui.roomType->setCurrentIndex( 0 );

    //disable the delete button by default
    ui.cancelToggle->setEnabled( 0 );


    //reset the change detectors
    guestChanged = false;
    custChanged = false;

    return true;
}


void Room_Resv_Edit_Ui::SetActiveReservation( QPointer<Room_Reservation> resv )
{
    currentResv = resv;

    qDebug() << "QQQ (" << resv << ")";


    if ( currentResv->HasCustomer() )
    {
        SetActiveCustomer( currentResv->GetCustomer() );
    }
    else
    {
        currentCustomer = 0;
    }

    if ( currentResv->HasGuests() )
    {
        SetActiveGuest( currentResv->GetGuest() );
    }
    else
    {
        currentGuest = 0;
    }

    RefreshView();
}

void Room_Resv_Edit_Ui::RefreshView()
{
    //customer and guest fill ins

    if ( currentResv->HasCustomer() )
    {
        ui.customerName->setText( currentResv->CustomerName() );
    }

    if ( currentResv->HasGuests() )
    {
        ui.guestName->setText( currentResv->GuestName() );
    }



    ui.roomNumber->setText( QString("%1").arg( currentResv->GetRoomNumber() ) );
    //this is a text entry only field
    ui.resvNotes->clear();
    //this should be filled with the log messages
    ui.resvHistory->clear();

    //set the dates to now
    ui.fromDate->setDate( currentResv->GetStartDate() );
    ui.toDate->setDate( currentResv->GetEndDate() );

    //set dropdown box to first entry
    ui.roomType->setCurrentIndex( 0 );


    ui.cancelToggle->setEnabled( 0 );
}



bool Room_Resv_Edit_Ui::UpdateReservation()
{
    if ( not currentResv )
    {
        //VERY BAD MOJO
        qDebug("YIKES Invalid current reservation!!");
        return false;
    }

    if ( not currentCustomer )
    {
        qDebug("YIKES Invalid customer!!");
        QMessageBox::warning( this, "Missing Customer",
                              "You must enter a customer before continuing.");
        return false;
    }

    if ( not currentGuest )
    {
        qDebug("YIKES Invalid guest!!");
        QMessageBox::warning( this, "Missing Guest",
                              "You must enter a guest before continuing." );
        return false;
    }




    //prep fields
    int roomNo = ui.roomNumber->text().toInt();
    QDate fromDate = ui.fromDate->date();
    QDate toDate = ui.toDate->date();

    // can I really reserve this room?
    bool okreserve = currentResv->ReserveFor( roomNo, fromDate, toDate );

    if ( not okreserve )
    {
        QString err ("Room #%1 can not be reserved from %2 to %3.\n"
                     "Please correct the reservation.");
        err = err.arg( roomNo );
        err = err.arg( fromDate.toString() );
        err = err.arg( toDate.toString() );

        QMessageBox::warning( this, "Cannot Reserve Room", err );

        return false;

    }

    //primary data change ok, update any other fields.


    emit Completed( currentResv->Store() );

    return true;

}


bool Room_Resv_Edit_Ui::YieldScreen( int status )
{
    if ( not status )
    {
        qDebug("Something really bad just happend?");
        return false;
    }

    qDebug( "Reservation edit yields screen to Resv Chooser." );
    Main_Window::MainWin()->ChangeScreen( "Room_Resv_Chooser_Ui" );

    /*
    if state == Ready and Drop down says walk-in, resv.
    then this should actuall go to the Walkin confirmation ui next
    */

    if ( currentResv->GetState() == Room_Reservation::Ready
         and ui.roomType->currentText() == "Walk-In Reservation" )
    {
        qDebug( "Reservation edit yields screen to Checkin confirmation." );

        Main_Window::MainWin()->\
                SelectGUI<Checkin_Confirm_Ui>("Checkin_Confirm_Ui")->\
                SetActiveReservation( currentResv );

        Main_Window::MainWin()->ChangeScreen( "Checkin_Confirm_Ui" );
    }
    else
    {

        qDebug( "Reservation edit yields screen to Resv Chooser." );
        Main_Window::MainWin()->ChangeScreen( "Room_Resv_Chooser_Ui" );

    }

    return true;
}



bool Room_Resv_Edit_Ui::Cancel()
{
    bool status = true;

    if ( currentResv->IsNew() )
    {
        //FIXME: is this really a good idea?
        currentResv->Delete();
        status = false;
    }


    Main_Window::MainWin()->ChangeScreen( "Room_Resv_Chooser_Ui" );

    return status;
}


void Room_Resv_Edit_Ui::SetActiveGuest( QPointer<Guest> guest )
{
    if ( currentGuest )
    {
        qDebug("Removing stale guest.");
        delete currentGuest;
    }

    currentGuest = guest;
}


void Room_Resv_Edit_Ui::SetActiveCustomer( QPointer<Customer> cust )
{
    if ( currentCustomer )
    {
        qDebug("Removing stale customer.");
        delete currentCustomer;
    }

    currentCustomer = cust;
}



void Room_Resv_Edit_Ui::EditGuest()
{
    qDebug("Wants to edit guest.");

    QString guestName = ui.guestName->text();
    bool go = true;

    if ( not guestName.isEmpty() )
    {
        //build our err mesg
        QString msg ( "A name has already been entered into the guest field.\n"
                      "Do you wish to create a new guest named \"%1\"?" );
        msg = msg.arg(ui.guestName->text());

        // the question box return the index of the button chosen
        go = not QMessageBox::question( this, "Guest name already exists",
                                         msg,
                                         "&Add Guest", "&Do Not Add Guest", "",
                                         0, 1 );

    }

    qDebug() << "User say" << go;

    if ( not go )
        return;

    if ( not currentGuest and guestName.size() )
    {
        SetActiveGuest( Guest::ParseGuestName( guestName ) );
    }
    else if ( not currentGuest )
    {
        SetActiveGuest( new Guest );
    }

    Main_Window::MainWin()->\
            SelectGUI<Guest_Edit_Ui>("Guest_Edit_Ui")->
            SetActiveGuest( currentGuest );

    Main_Window::MainWin()->ChangeScreen( "Guest_Edit_Ui" );

}


void Room_Resv_Edit_Ui::EditCustomer()
{
    qDebug("Wants to edit customer.");

    bool go = true;

    if ( not ui.customerName->text().isEmpty() )
    {
        QString msg ( "A name has already been entered into the customer field.\n"
                      "Do you wish to create a new customer named \"%1\"?" );
        msg = msg.arg( ui.customerName->text() );

        go = not QMessageBox::question( this,
                                        "Customer name already exists",
                                        msg,
                                        "&Add Customer",
                                        "&Do Not Add Customer",
                                        "",
                                        0, 1 );
    }

    qDebug() << "User says" << go;

    if ( not go )
        return;

    if ( not currentCustomer )
    {
        SetActiveCustomer( new Customer );

        if ( ui.customerName->text().size() )
            currentCustomer->SetName( ui.customerName->text() );
    }


    Main_Window::MainWin()->\
            SelectGUI<Customer_Edit_Ui>("Customer_Edit_Ui")->
            SetActiveCustomer( currentCustomer );

    Main_Window::MainWin()->ChangeScreen( "Customer_Edit_Ui" );

}


void Room_Resv_Edit_Ui::FixupGuest()
{
    //skip empty fields
    if ( ui.customerName->text().isEmpty() )
        return;

    if ( not GuestNameChanged() )
    {
        qDebug("Guest Field not changed, no need to do anything.");
        return;
    }

    QString temp = ui.guestName->text();

    qDebug() << "Going to fixup:" << temp;

    //try to find match

    //match not found
    if ( true )
    {
        QMessageBox::information( this, "Guest Does Not Exist",
                                  "This guest does not exist in the system.\n"
                                  "You will not be able to create the reservation "
                                  "if this name is not changed or added to "
                                  "the system." );
        return;
    }
}


void Room_Resv_Edit_Ui::FixupCustomer()
{
    //skip empty fields
    if ( ui.customerName->text().isEmpty() )
        return;


    if ( not CustomerNameChanged() )
    {
        qDebug("Customer Field not changed, no need to do anything.");
        return;
    }

    QString temp = ui.customerName->text();

    qDebug() << "Going to fixup:" << temp;

    //try to find match

    //match not found
    if ( true )
    {
        QMessageBox::information( this, "Customer Does Not Exist",
                                  "This customer does not exist in the system.\n"
                                  "You will not be able to create the reservation "
                                  "if this name is not changed or added to "
                                  "the system." );
        return;
    }


}



bool Room_Resv_Edit_Ui::CustomerNameChanged()
{
    custChanged = ( currentResv->CustomerName() != ui.customerName->text() );

    qDebug() << "Checking for customer name changes:" << custChanged;

    return custChanged;
}


bool Room_Resv_Edit_Ui::GuestNameChanged()
{
    guestChanged = ( currentResv->GuestName() != ui.guestName->text() );

    qDebug() << "Checking for guest name changes:" << guestChanged;

    return guestChanged;
}


// EOF: room_resv_edit_ui.cpp

