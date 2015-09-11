/*****************************************************************************
 * customer_edit_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "customer_edit_ui.h"



Customer_Edit_Ui::Customer_Edit_Ui( QWidget * parent )
    : QWidget( parent )
{
    ui.setupUi( this );
}


bool Customer_Edit_Ui::ResetFields()
{


    return true;
}



void Customer_Edit_Ui::SetActiveCustomer( QPointer<Customer> customer )
{
    currentCustomer = customer;

    RefreshView();
}


void Customer_Edit_Ui::RefreshView()
{
}



bool Customer_Edit_Ui::UpdateCustomer()
{
    if ( not currentCustomer )
    {
        //VERY BAD MOJO
        qDebug("YIKES Invalid current customer!!");
        return false;
    }


    emit Completed( currentCustomer->Store() );

    return true;

}

bool Customer_Edit_Ui::YieldScreen( int status )
{
    if ( not status )
    {
        qDebug("Something really bad just happend?");
    }

    qDebug( "Customer edit yields screen to Resv Edit." );
    //Main_Window::MainWin()->ChangeScreen( "Room_Resv_Edit_Ui" );

    return true;
}



// EOF: customer_edit_ui.cpp

