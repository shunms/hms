/*****************************************************************************
 * guest.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#include "guest.h"
#include <QStringList>

bool Guest::Store()
{
    return true;
}

bool Guest::Save()
{
    return true;
}

bool Guest::Edit()
{
    return true;
}

bool Guest::Delete()
{
    return true;
}


Guest* Guest::ParseGuestName( QString guestName )
{
    Guest* temp = new Guest;
    QString last;
    QString first;

    if ( guestName.contains( ',' ) )
    {
        last = guestName.section( ',', 0, 0 ).trimmed();
        first = guestName.section( ',', 1 ).trimmed();
    }
    else
    {
        last = guestName.section( ' ', -1 ).trimmed();
        first = guestName.section( ' ', 0, -2 ).trimmed();
    }

    //FIXME: yikes
    QStringList TITLES;
    TITLES << "Mr." << "Dr." << "Mrs." << "Ms." << "Miss" << "Sir";

    foreach( QString title, TITLES )
    {
        if ( first.startsWith( title ) )
        {
            temp->SetTitle( title );
            first = first.remove( 0, title.size() ).trimmed();
        }
    }

    temp->SetFirstName( first );
    temp->SetLastName( last );


    return temp;
}


// EOF: guest.cpp

