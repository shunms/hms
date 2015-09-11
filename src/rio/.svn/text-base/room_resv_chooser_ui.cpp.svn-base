/*****************************************************************************
 * room_resv_chooser_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "room_resv_chooser_ui.h"

#include <QDebug>
#include <QDate>
#include <QHeaderView>
#include <stdlib.h>

#include <rio/room_resv_edit_ui.h>
#include <rio/checkin_confirm_ui.h>
#include <rio/checkout_confirm_ui.h>

#include <pmm/room_base.h>

Room_Resv_Chooser_Ui::Room_Resv_Chooser_Ui( QWidget* parent )
    : QWidget( parent )
{
    qDebug("Created Room_Resv_Chooser_Ui.");

    ui.setupUi( this );

    // set widgets to a default
    ResetFields();

    workingResv = 0;


    //connect date toggles to the checkboxes

    connect( ui.findDatesToggle, SIGNAL( stateChanged( int ) ),
             this, SLOT( ToggleFindDates( int ) ) );

    connect( ui.checkinDatesToggle, SIGNAL( stateChanged( int ) ),
             this, SLOT( ToggleCheckinDates( int ) ) );

    connect( ui.checkoutDatesToggle, SIGNAL( stateChanged( int ) ),
             this, SLOT( ToggleCheckoutDates( int ) ) );


    //connect buttons to search list fillers
    connect( ui.newFillButton, SIGNAL( clicked() ),
             this, SLOT( FillNew() ) );

    
    connect( ui.checkinFillButton, SIGNAL( clicked() ),
             this, SLOT( FillCheckins() ) );
    
    
    connect( ui.checkoutFillButton, SIGNAL( clicked() ),
             this, SLOT( FillCheckouts() ) );
    

    connect( ui.findFillButton, SIGNAL( clicked() ),
             this, SLOT( FillFound() ) );
    
    //connect show screen signal to reset slot
    connect( this, SIGNAL( ShowScreen() ),
             this, SLOT( ResetFields() ) );


    //connect double-clicks to the appropriate chooser actions
    
    connect( ui.newResvResults, 
             SIGNAL( itemActivated(QTreeWidgetItem*, int) ),
             this, 
             SLOT( PickNewResv(QTreeWidgetItem*, int) ) );

    connect( ui.checkinResvResults, 
             SIGNAL( itemActivated( QTreeWidgetItem*, int ) ),
             this,
             SLOT( PickCheckinResv( QTreeWidgetItem*, int ) ) );
    
    
    connect( ui.checkoutResvResults,
             SIGNAL( itemActivated( QTreeWidgetItem*, int ) ),
             this,
             SLOT( PickCheckoutResv( QTreeWidgetItem*, int ) ) );

    
    connect( ui.findResvResults, 
             SIGNAL( itemActivated( QTreeWidgetItem*, int ) ),
             this,
             SLOT( PickFindResv( QTreeWidgetItem*, int ) ) );


    //superficial column sillyness	
    
    ui.newResvResults->header()->setResizeMode( 0, QHeaderView::Stretch );
    ui.newResvResults->header()->setResizeMode( 1, QHeaderView::Stretch );
    ui.newResvResults->header()->setResizeMode( 2, QHeaderView::Stretch );
    
    ui.findResvResults->header()->setResizeMode( 0, QHeaderView::Stretch );
    ui.findResvResults->header()->setResizeMode( 1, QHeaderView::Stretch );
    ui.findResvResults->header()->setResizeMode( 2, QHeaderView::Stretch );
    ui.findResvResults->header()->setResizeMode( 3, QHeaderView::Stretch );
    
    ui.checkinResvResults->header()->setResizeMode( 0, QHeaderView::Stretch );
    ui.checkinResvResults->header()->setResizeMode( 1, QHeaderView::Stretch );
    ui.checkinResvResults->header()->setResizeMode( 2, QHeaderView::Stretch ); 
    ui.checkinResvResults->header()->setResizeMode( 3, QHeaderView::Stretch );
    
    ui.checkoutResvResults->header()->setResizeMode( 0, QHeaderView::Stretch );
    ui.checkoutResvResults->header()->setResizeMode( 1, QHeaderView::Stretch );
    ui.checkoutResvResults->header()->setResizeMode( 2, QHeaderView::Stretch );
    ui.checkoutResvResults->header()->setResizeMode( 3, QHeaderView::Stretch );
    
}


bool Room_Resv_Chooser_Ui::ResetFields()
{
    //blank text fields
    ui.findFirstName->clear();
    ui.findLastName->clear();
    ui.findRoomNumber->clear();

    ui.checkinFirstName->clear();
    ui.checkinLastName->clear();
    ui.checkinRoomNumber->clear();

    ui.checkoutFirstName->clear();
    ui.checkoutLastName->clear();
    ui.checkoutRoomNumber->clear();

    //set drop down boxes to their first value
    ui.newRoomType->setCurrentIndex( 0 );
    ui.findResvStatus->setCurrentIndex( 0 );


    //set all the dates widgets to a resonable default value.
    ui.newFromDate->setDate( QDate::currentDate() );
    ui.newToDate->setDate( QDate::currentDate() );

    ui.findFromDate->setDate( QDate::currentDate() );
    ui.findToDate->setDate( QDate::currentDate() );

    ui.checkinFromDate->setDate( QDate::currentDate() );
    ui.checkinToDate->setDate( QDate::currentDate() );

    ui.checkoutFromDate->setDate( QDate::currentDate() );
    ui.checkoutToDate->setDate( QDate::currentDate() );


    //disable dates and turn date toggles off
    ui.findDatesToggle->setChecked( 0 );
    ToggleFindDates( 0 );

    ui.checkinDatesToggle->setChecked( 0 );
    ToggleCheckinDates( 0 );

    ui.checkoutDatesToggle->setChecked( 0 );
    ToggleCheckoutDates( 0 );

    
    //force the results list of each tab to be empty
    EmptyNew();
    EmptyFound();
    EmptyCheckins();
    EmptyCheckouts();
    
    //FIXME: check this for possible memory errors
    /* SUPERCEEDED BY EmptyNew()
    while ( ui.newResvResults->topLevelItemCount() )
    {
        delete ui.newResvResults->takeTopLevelItem( 0 );
    }
    */

    if ( currentlyFound.size() )
    {
        EmptyWorkingList();   
        return true;
    }


    return false;
}


void Room_Resv_Chooser_Ui::ToggleFindDates( int state )
{
    ui.findFromDate->setEnabled( state );
    ui.findToDate->setEnabled( state );
}


void Room_Resv_Chooser_Ui::ToggleCheckinDates( int state )
{
    ui.checkinFromDate->setEnabled( state );
    ui.checkinToDate->setEnabled( state );
}



void Room_Resv_Chooser_Ui::ToggleCheckoutDates( int state )
{
    ui.checkoutFromDate->setEnabled( state );
    ui.checkoutToDate->setEnabled( state );
}






void Room_Resv_Chooser_Ui::FillNew()
{
    //remove stale list entries
    EmptyNew();
    
    Db_Mgr* dbmgr = Main_Window::DBMgr();
    
    //gather form data
    QDate startDate = ui.newFromDate->date();
    QDate endDate  = ui.newToDate->date();
    QString type = ui.newRoomType->currentText();
    
    QList<Room_Info_Base*> roomList; 
    dbmgr->GetAllEmptyRooms( type, startDate, endDate, roomList );    
     
                            
    qDebug() << "Got some results. count=" << roomList.size();
    
    //populate the list
    QTreeWidgetItem * newItem;
    foreach( Room_Info_Base* temp, roomList )
    {
        newItem = new QTreeWidgetItem;
        newItem->setText( 0, QString::number( temp->GetNumber() ) );
        newItem->setText( 1, temp->GetType() );
        newItem->setText( 2, "Ready" );

        ui.newResvResults->addTopLevelItem( newItem );
    }
      

    //fix column widths
    ui.newResvResults->resizeColumnToContents( 1 );
    ui.newResvResults->resizeColumnToContents( 2 );
}





void Room_Resv_Chooser_Ui::FillFound()
{
    //dump any old list data
    EmptyWorkingList();
    
    //search the database
    //FIXME: this is fake
    GenDummyList();
    
    //narrow down parameters
    //FIXME
    
    //update list view
    foreach( Room_Reservation* temp, currentlyFound )
    {
        QTreeWidgetItem * newItem = new QTreeWidgetItem();
         
        newItem->setText( 0, QString::number(temp->GetRoomNumber()) );
        newItem->setText( 1, temp->GuestName() );
        newItem->setText( 2, temp->CustomerName() );
        newItem->setText( 3, temp->StateString() );
        
        
        ui.findResvResults->addTopLevelItem( newItem );
    } 

}


void Room_Resv_Chooser_Ui::EmptyCheckins()
{
    //FIXME: check this for possible memory errors
    while ( ui.checkinResvResults->topLevelItemCount() )
    {
        delete ui.checkinResvResults->takeTopLevelItem( 0 );
    }

}



void Room_Resv_Chooser_Ui::EmptyNew()
{
    
    //FIXME: check this for possible memory errors
    while ( ui.newResvResults->topLevelItemCount() )
    {
        delete ui.newResvResults->takeTopLevelItem( 0 );
    }

}

void Room_Resv_Chooser_Ui::EmptyFound()
{
    
    //FIXME: check this for possible memory errors
    while ( ui.findResvResults->topLevelItemCount() )
    {
        delete ui.findResvResults->takeTopLevelItem( 0 );
    }

}

void Room_Resv_Chooser_Ui::EmptyCheckouts()
{
    
    //FIXME: check this for possible memory errors
    while ( ui.checkoutResvResults->topLevelItemCount() )
    {
        delete ui.checkoutResvResults->takeTopLevelItem( 0 );
    }

}


void Room_Resv_Chooser_Ui::EmptyWorkingList()
{
    while ( currentlyFound.size() )
    {
        delete currentlyFound.takeAt(0);
    }

	//there is a logical error to not clearing the view lists
	// if the working list is not cleared.
	EmptyCheckouts();
	EmptyCheckins();
	EmptyFound();
	
}




void Room_Resv_Chooser_Ui::FillCheckins()
{
    qDebug( "Going to fill check in list." );
    EmptyWorkingList();
    
    //find matching reservations
    //FIXME: this is fake....
    GenDummyList();

    // -- old fakeout stuff
    /*
    Room_Reservation* xxx = new Room_Reservation;
    xxx->GenerateRandomData();
    xxx->SetState( Room_Reservation::Ready );
    currentlyFound.append( xxx );
    */
    
    
    
    
    //clear out any stale entries
    EmptyCheckins();
    
    //show appropriate data in list    
    foreach( Room_Reservation* temp, currentlyFound )
    {
        qDebug("Adding view item.");
        
        QTreeWidgetItem * newItem = new QTreeWidgetItem( );
        newItem->setText( 0, QString::number(temp->GetRoomNumber()) );
        newItem->setText( 1, temp->GuestName() );
        newItem->setText( 2, temp->CustomerName() );
        newItem->setText( 3, temp->StateString() );
        
        ui.checkinResvResults->addTopLevelItem( newItem );

    }



    //ui.checkinResvResults->resizeColumnToContents( 0 );
    //ui.checkinResvResults->resizeColumnToContents( 1 );
    //ui.checkinResvResults->resizeColumnToContents( 2 );
    //ui.checkinResvResults->resizeColumnToContents( 3 );

}

void Room_Resv_Chooser_Ui::FillCheckouts()
{
    EmptyWorkingList();
    qDebug( "Going to fill check out list." );
    
    
    //find matching reservations
    //FIXME: this is fake....
	//
	GenDummyList();

	/*
    Room_Reservation* xxx = new Room_Reservation;
    xxx->GenerateRandomData();
    xxx->SetState( Room_Reservation::Ready );
    currentlyFound.append( xxx );
	*/
    
    
    
    
    //clear out any stale entries
    EmptyCheckouts();
    
    //show appropriate data in list    
    foreach( Room_Reservation* temp, currentlyFound )
    {
        qDebug("Adding view item.");
        
        QTreeWidgetItem * newItem = new QTreeWidgetItem( );
        newItem->setText( 0, QString::number(temp->GetRoomNumber()) );
        newItem->setText( 1, temp->GuestName() );
        newItem->setText( 2, temp->CustomerName() );
        newItem->setText( 3, temp->StateString() );
        
        ui.checkoutResvResults->addTopLevelItem( newItem );

    }

    qDebug("resize?");
    ui.checkoutResvResults->resizeColumnToContents( 0 );
    ui.checkoutResvResults->resizeColumnToContents( 1 );
    ui.checkoutResvResults->resizeColumnToContents( 2 );
    ui.checkoutResvResults->resizeColumnToContents( 3 );


}

void Room_Resv_Chooser_Ui::BeginWalkin()
{}


void Room_Resv_Chooser_Ui::ChangeTab( int tab )
{
    ui.topTabs->setCurrentIndex( tab );
}

void Room_Resv_Chooser_Ui::PickNewResv( QTreeWidgetItem* item, int column )
{
    qDebug("Selected a room to reserve.");

    if ( workingResv )
        delete workingResv;

    workingResv = new Room_Reservation;
    workingResv->SetNew();


    //when we are reserving a room, we assume the user will not cancel
    //the booking. So to prevent two employees from reserving at the same
    //time we check & create the reservation BEFORE the user actually
    //fills in any other supplemental information.

    int roomNo = item->text( 0 ).toInt(); //column zero is the room number
    QDate fromDate = ui.newFromDate->date();
    QDate toDate   = ui.newToDate->date();

    bool ok = workingResv->ReserveFor( roomNo, fromDate, toDate );

    if ( ok and workingResv->Store() )
    {
        Main_Window::MainWin()-> \
            SelectGUI<Room_Resv_Edit_Ui>("Room_Resv_Edit_Ui")-> \
            SetActiveReservation( workingResv );

        Main_Window::MainWin()->ChangeScreen( "Room_Resv_Edit_Ui" );

        return;
    }

    QMessageBox::warning( this, "Could not reserve room",
                          "Your available rooms list may be out of date.\n"
                          "Please press the \"Find\" button and try again." );





}


void Room_Resv_Chooser_Ui::PickCheckinResv( 
        QTreeWidgetItem* item, int column )
{
    qDebug("Selected a row.");
    
    int row = ui.checkinResvResults->indexOfTopLevelItem( item );
    
    qDebug() << "Got row number:" << row; 
    
    
    if ( currentlyFound.size() < row || row < 0 )
    {
        qDebug("Aiiiieeeee!");
        return;
    }
    
    
    LoadWorkingResv( currentlyFound.takeAt( row ) );

    
    
    Main_Window::MainWin()-> \
            SelectGUI<Checkin_Confirm_Ui>("Checkin_Confirm_Ui")-> \
            SetActiveReservation( workingResv );
    
    
    Main_Window::MainWin()->ChangeScreen( "Checkin_Confirm_Ui" );

}



void Room_Resv_Chooser_Ui::PickCheckoutResv( 
        QTreeWidgetItem* item, int column )
{

    int row = ui.checkoutResvResults->indexOfTopLevelItem( item );
    
    qDebug() << "Got row number:" << row; 
    
    
    if ( currentlyFound.size() < row || row < 0 )
    {
        qDebug("Aiiiieeeee!");
        return;
    }
    
    
    LoadWorkingResv( currentlyFound.takeAt( row ) );

    
    Main_Window::MainWin()-> \
            SelectGUI<Checkout_Confirm_Ui>("Checkout_Confirm_Ui")-> \
            SetActiveReservation( workingResv );
    
    
    Main_Window::MainWin()->ChangeScreen( "Checkout_Confirm_Ui" );


}

void Room_Resv_Chooser_Ui::PickFindResv( QTreeWidgetItem* item, int column )
{
    qDebug("going to edit a resv");
    
    int row = ui.findResvResults->indexOfTopLevelItem( item );
    
    
    if ( currentlyFound.size() < row || row < 0 )
    {
        qDebug("Aiiiieeeee!");
        return;
    }
    
    
    LoadWorkingResv( currentlyFound.takeAt( row ) ); 


    Main_Window::MainWin()-> \
            SelectGUI<Room_Resv_Edit_Ui>("Room_Resv_Edit_Ui")-> \
            SetActiveReservation( workingResv );
    
    
    Main_Window::MainWin()->ChangeScreen( "Room_Resv_Edit_Ui" );


}


void Room_Resv_Chooser_Ui::LoadWorkingResv( QPointer<Room_Reservation> resv )
{

    if ( workingResv )
    {
         delete workingResv;
    }
    
    if ( resv )
    {
        workingResv = resv;
    }
    
}



void Room_Resv_Chooser_Ui::GenDummyList()
{
	int max = 3 + ( rand() % 4 );


	for ( int ii=0; ii < max; ii++ )
	{
		//find matching reservations
		//FIXME: this is fake....
		Room_Reservation* xxx = new Room_Reservation;
		xxx->GenerateRandomData();
		xxx->SetState( Room_Reservation::Ready );
		currentlyFound.append( xxx );
    
	}

}





// EOF: room_resv_chooser_ui.cpp

