/*****************************************************************************
 * checkout_confirm_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "checkout_confirm_ui.h"

#include <mainwindow/main_window.h>


Checkout_Confirm_Ui::Checkout_Confirm_Ui( QWidget * parent )
    : QWidget( parent )
{
    ui.setupUi( this );
    
    //connect the dots, tra-la-la-la
    
    connect( ui.cancelCheckout, SIGNAL( clicked() ),
             this, SLOT( Cancel() ) );
    
    connect( this, SIGNAL( ShowScreen() ),
             this, SLOT( UpdateView() ) );
}

void Checkout_Confirm_Ui::SetActiveReservation(
        QPointer<Room_Reservation> resv )
{
    currentResv = resv;
}


void Checkout_Confirm_Ui::UpdateView()
{
    if ( not currentResv )
    {
        qDebug( "Current resv not set! How?!" );
        return;
    }
    
    while( ui.confirmView->topLevelItemCount() )
    {
        delete ui.confirmView->takeTopLevelItem( 0 );
    }
    
    QTreeWidgetItem* show = new QTreeWidgetItem;
    show->setText( 0, QString::number(currentResv->GetRoomNumber()) );
    show->setText( 1, currentResv->GuestName() );
    show->setText( 2, currentResv->GetStartDate().toString() );
    show->setText( 3, currentResv->GetEndDate().toString() );
    show->setText( 4, "$$$$" );
    show->setText( 5, ( currentResv->GetPaid() )?"Yes":"No" );

    ui.confirmView->addTopLevelItem( show );


    qDebug("resize?");
    ui.confirmView->resizeColumnToContents( 0 );
    ui.confirmView->resizeColumnToContents( 1 );
    ui.confirmView->resizeColumnToContents( 2 );
    ui.confirmView->resizeColumnToContents( 3 );
    ui.confirmView->resizeColumnToContents( 4 );
    ui.confirmView->resizeColumnToContents( 5 );
    
}

void Checkout_Confirm_Ui::Confirm()
{}

void Checkout_Confirm_Ui::AddGiftCert()
{}

void Checkout_Confirm_Ui::ShowInvoice()
{}

void Checkout_Confirm_Ui::Cancel()
{
    Main_Window::MainWin()->ChangeScreen( "Room_Resv_Chooser_Ui" );
}


bool Checkout_Confirm_Ui::PayCharges()
{
    return false;
}

// EOF: checkout_confirm_ui.cpp

