/*****************************************************************************
 * room_reservation.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "room_reservation.h"

#include <QDebug>
#include <stdlib.h>


bool Room_Reservation::ReserveFor( int room, QDate fromDate, QDate toDate )
{
    qDebug() << "Trying to set reservation to:" << room \
            << fromDate.toString() << toDate.toString() ;


    // prevent my own stupidity
    // if this _IS_ the current reservation, return true

    if ( //IsValid() and
         GetRoomNumber() == room and
         GetStartDate() == fromDate and
         GetEndDate() == toDate )
    {
        qDebug("Matches current reservation, not changing.");
        return true;
    }



    if ( rand() > (RAND_MAX/2) )
    {
        SetRoomNumber( room );
        SetStartDate( fromDate );
        SetEndDate( toDate );
        return true;
    }
    else
    {
        return false;
    }
}


bool Room_Reservation::AddLog( Room_Reservation_Log& log ) const
{
    return true;
}

bool Room_Reservation::AddLog( QString head, QString body ) const
{
    QString msg ("%1: %2");
    Room_Reservation_Log log ( msg.arg( head.toUpper() ).arg( body ) );

    return true;
}


bool Room_Reservation::Charge( Price value, QString& reason ) const
{
    QString fmt ( "%1 %2" );
    return AddLog( "FEE", fmt.arg( value ).arg( reason ) );
}


bool Room_Reservation::Store()
{
    qDebug( "Going to store reservation data!" );

    if ( GetDBId() > 0 )
        return Edit();

    return Save();
}


bool Room_Reservation::Save()
{
    return true;
}

bool Room_Reservation::Edit()
{
    qDebug("Editing/Updating a reservation." );
    return true;
}


bool Room_Reservation::Delete()
{
    qDebug("Deleting a reservation.");
    return true;
}


bool Room_Reservation::HasCustomer() const
{
    return not this->IsNew();
}



bool Room_Reservation::HasGuests() const
{
    return not this->IsNew();
}


Customer* Room_Reservation::GetCustomer()
{
    Customer* newCust = new Customer;

    newCust->SetName( "IBM" );
    newCust->SetCountry( "United States of America" );

    return newCust;
}


Guest* Room_Reservation::GetGuest()
{
    Guest* newGuest = new Guest;
    newGuest->SetFirstName( "Joe" );
    newGuest->SetLastName( "Russel" );
    newGuest->SetTitle( "Mr." );
    newGuest->SetSex( Guest::Male );

    return newGuest;
}




void Room_Reservation::SetNew( bool isNew )
{
    newStatus = isNew;
}



bool Room_Reservation::IsNew() const
{
    return newStatus;
}




QString Room_Reservation::GuestName()
{
    if ( not HasGuests() )
        return "";

    QString name;
    Guest* temp = GetGuest();

    if ( temp->GetTitle().size() )
    {
        name = QString("%1 %2 %3").arg( temp->GetTitle() );
        name = name.arg( temp->GetFirstName() );
        name = name.arg( temp->GetLastName() );
    }
    else
    {
        name = QString("%1 %2");
        name = name.arg( temp->GetFirstName() );
        name = name.arg( temp->GetLastName() );
    }


    delete temp;
    return name;
}



QString Room_Reservation::CustomerName()
{
    QString name;
    Customer* temp = GetCustomer();
    name = temp->GetName();

    delete temp;
    return QString("IBM");
}


QString Room_Reservation::StateString() const
{
    switch ( GetState() )
    {
        case Room_Reservation::Ready:
            return "Ready";

        case Room_Reservation::Complete:
            return "Complete";

        case Room_Reservation::Active:
            return "Active";

        case Room_Reservation::Late:
            return "Late";

        case Room_Reservation::Canceled:
            return "Canceled";

        default:
            return "Complete";
    }
}



void Room_Reservation::GenerateRandomData()
{

    SetRoomNumber( 100 + ( rand() % 200 ) );

    int push = rand() % 20;
    SetStartDate( QDate::currentDate().addDays( push ) );
    SetEndDate( QDate::currentDate().addDays( push + (rand()%10) ) );

}





// EOF: room_reservation.cpp

