/*****************************************************************************
 * room_reservation_base.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-10
 *
 *****************************************************************************
 */



#include "room_reservation_base.h"


Room_Reservation_Base::Room_Reservation_Base( QObject * parent )
    : QObject( parent )
{
    dbid = -1;
    dateCreated = QDate::currentDate();
    roomNumber = 0;
    state = Room_Reservation_Base::Ready;
    paid = false;
    type = 0;

}

QString Room_Reservation_Base::Ident() const
{
    QString out = "<Room_Reservation @%1 room#=%2 created=%3>";
    out = out.arg( dbid ).arg( roomNumber );
    return out.arg( dateCreated.toString("yyyy-MM-dd") );
}

void Room_Reservation_Base::SetDBId( DBID dbid )
{
    this->dbid = dbid;
}

void Room_Reservation_Base::SetDateCreated( QDate date )
{
    this->dateCreated = date;
}

void Room_Reservation_Base::SetRoomNumber( int room )
{
    this->roomNumber = room;
}

void Room_Reservation_Base::SetStartDate( QDate date )
{
    this->startDate = date;
}

void Room_Reservation_Base::SetEndDate( QDate date )
{
    this->endDate = date;
}

void Room_Reservation_Base::SetState( Room_Reservation_Base::State state )
{
    this->state = state;
}

void Room_Reservation_Base::SetPaid( bool haspaid )
{
    this->paid = haspaid;
}

void Room_Reservation_Base::SetType( int type )
{
    this->type = type;
}


void Room_Reservation_Base::SetState( int state )
{
    switch ( state )
    {
        case 0:
            this->state = Room_Reservation_Base::Ready;
            return;

        case 1:
            this->state = Room_Reservation_Base::Complete;
            return;

        case 2:
            this->state = Room_Reservation_Base::Active;
            return;

        case 3:
            this->state = Room_Reservation_Base::Late;
            return;

        case 4:
            this->state = Room_Reservation_Base::Canceled;
            return;

        default:
            this->state = Room_Reservation_Base::Complete;
            return;
    }
}


int   Room_Reservation_Base::GetDBId() const
{
    return dbid;
}

QDate Room_Reservation_Base::GetDateCreated() const
{
    return dateCreated;
}

int   Room_Reservation_Base::GetRoomNumber() const
{
    return roomNumber;
}

QDate Room_Reservation_Base::GetStartDate() const
{
    return startDate;
}

QDate Room_Reservation_Base::GetEndDate() const
{
    return endDate;
}

Room_Reservation_Base::State Room_Reservation_Base::GetState() const
{
    return state;
}

bool  Room_Reservation_Base::GetPaid() const
{
    return paid;
}

int   Room_Reservation_Base::GetType() const
{
    return type;
}


/*
void Room_Reservation_Base::SetDescription( QString& descr )
{
    this->description = descr;
}


void Room_Reservation_Base::SetDescription( const QString descr )
{
    this->description = descr;
}

QString& Room_Reservation_Base::GetDescription()
{
    return description;
}
*/


// EOF: room_reservation_base.cpp

