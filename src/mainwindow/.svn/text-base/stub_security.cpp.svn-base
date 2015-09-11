/*****************************************************************************
 * security.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-09
 *
 *****************************************************************************
 */



#include "stub_security.h"
#include "src/mainwindow/main_window.h"

#include <QDebug>

Security_Mgr::Security_Mgr( QObject* parent ) : QObject( parent )
{
    if ( Main_Window::DBMgr()->Ready() and
         not Main_Window::DBMgr()->IsDatabaseSetup() )
    {
        specialInitMode = true;
        loggedIn = true;
        userId = -1;
        permissions = 0;
        return;
    }

    specialInitMode = false;
    loggedIn = false;
    userId = -1;
    permissions = 0;
    return;
}



bool Security_Mgr::Login( const QString username, const QString password )
{
    if ( specialInitMode ) return false;

    //in reality this would use the db.

    qDebug("Querying potential users. This is completly fake btw.");

    if ( username=="john" and password=="test1" )
    {
        loggedIn = false;
        userId = 1;
        permissions = P_MANAGE | P_CHECKIN | P_RESVROOM;
        return true;
    }



    if ( username=="joe" and password=="test2" )
    {
        loggedIn = false;
        userId = 1;
        permissions =  P_CHECKIN | P_RESVROOM;
        return true;
    }



    if ( username=="foo" and password=="bar" )
    {
        loggedIn = false;
        userId = 1;
        permissions = P_RESVGOLF | P_RESVSHUTL;
        return true;
    }



    if ( username=="zz" and password=="top" )
    {
        loggedIn = false;
        userId = 1;
        permissions = P_CHECKIN | P_RESVROOM;
        return true;
    }


    return false;
}



bool Security_Mgr::Logout()
{
    if ( specialInitMode or not loggedIn )
        return false;

    loggedIn = false;
    userId = -1;
    permissions = 0;

    return true;
}

bool Security_Mgr::IsLoggedIn()
{
    if ( specialInitMode ) return true;

    return loggedIn;
}

bool Security_Mgr::CanEditHotel()
{
    if ( specialInitMode ) return true;

    return permissions & P_MANAGE;
}



bool Security_Mgr::CanCheckIn()
{
    return permissions & P_CHECKIN;
}

bool Security_Mgr::CanReserveRooms()
{

    qDebug() << "ZZZZZZ" << (permissions & P_RESVROOM) << "||" << permissions;
    return (permissions & P_RESVROOM);
}


bool Security_Mgr::CanAddService()
{
    return permissions & P_ADDSERV;
}

bool Security_Mgr::CanReserveRestaurant()
{
    return permissions & P_RESVREST;
}

bool Security_Mgr::CanReserveGolf()
{
    return permissions & P_RESVGOLF;
}


bool Security_Mgr::CanReserveShuttle()
{
    return permissions & P_RESVSHUTL;
}



// EOF: security.cpp

