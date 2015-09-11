/*****************************************************************************
 * room_reservation_log.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-11
 *
 *****************************************************************************
 */



#include "room_reservation_log.h"

#include <QDebug>

//experimental
namespace HMS
{
    static char* Log_Message_Headers [] = {
        "NEW",
        "STATE",
        "NOTE",
        "FEE",
        "EDIT",
        "CHECKIN",
        "CHECKOUT"
    };
};



Room_Reservation_Log::Room_Reservation_Log( QObject* parent )
    : QObject( parent )
{
    timestamp = QDateTime::currentDateTime();
}

Room_Reservation_Log::Room_Reservation_Log( QString msg, QObject* parent )
    : QObject( parent )
{
    message = msg;
    timestamp = QDateTime::currentDateTime();
}


Room_Reservation_Log::Room_Reservation_Log( QString msg,
                                            QDateTime timestamp,
                                            QObject* parent  )
    : QObject( parent )
{
    this->message = msg;
    this->timestamp = timestamp;
}



void Room_Reservation_Log::SetTimestamp( QDateTime timestamp )
{
    this->timestamp = timestamp;
}



void Room_Reservation_Log::SetMessage( QString message )
{
    this->message = message;
}


QDateTime Room_Reservation_Log::GetTimestamp() const
{
    return timestamp;
}

QString Room_Reservation_Log::GetMessage() const
{
    return message;
}

QString Room_Reservation_Log::GetHead()
{
    return message.section( ':', 0, 0 );
}

QString Room_Reservation_Log::GetBody()
{
    return message.section( ':', 1 ).trimmed();
}


bool Room_Reservation_Log::IsValid()
{
    if ( not timestamp.isValid() )
    {
        return false;
    }

    if ( not message.contains( ':' ) )
    {
        return false;
    }

    QString head = GetHead();

    if ( head != head.toUpper() )
    {
        return false;
    }

    //any additional parser checks will go here

    return true;
}

bool Room_Reservation_Log::IsFee()
{
    return ( "FEE" == GetHead() );
}

bool Room_Reservation_Log::IsState()
{
    return ( "STATE" == GetHead() );
}


Price Room_Reservation_Log::GetFeePrice()
{
    QString temp = GetBody().section( ' ', 0, 0 ).trimmed();

    Price price = temp.toFloat() ;

    return price;
}

QString Room_Reservation_Log::GetFeeReason()
{
    return GetBody().section( ' ', 1 ).trimmed();
}


bool Room_Reservation_Log::SplitParts( QString& head, QString& body )
{
    if ( not message.contains( ':' ) )
    {
        return false;
    }

    //int colonLoc;
    //colonLoc = message.indexOf( ':' );

    head = message.section( ':', 0, 0 );
    body = message.section( ':', 1 ).trimmed();



    return true;

}


QString Room_Reservation_Log::Formatted( Qt::DateFormat datefmt )
{
    QString out ( "<%1> %2" );
    out = out.arg( timestamp.toString(datefmt) );
    out = out.arg( message );
    return out;
}




// EOF: room_reservation_log.cpp

