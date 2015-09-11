/*****************************************************************************
 * security.h - the main security class
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-09
 *
 *****************************************************************************
 */



#ifndef STUB_SECURITY_H
#define STUB_SECURITY_H

#include <QObject>

class Security_Mgr : public QObject
{
    Q_OBJECT

    public:
        Security_Mgr( QObject* parent = 0 );

        bool Login( const QString username, const QString password );
        bool Logout();
        bool IsLoggedIn();

        bool CanEditHotel();
        bool CanCheckIn();
        bool CanReserveRooms();
        bool CanAddService();
        bool CanReserveRestaurant();
        bool CanReserveGolf();
        bool CanReserveShuttle();


    private:
        bool loggedIn;
        int userId;
        bool specialInitMode;
        int permissions;
};

//ugly hack just to do this quickly
#define  P_MANAGE    1
#define  P_CHECKIN   2
#define  P_RESVROOM  4
#define  P_ADDSERV   8
#define  P_RESVREST  16
#define  P_RESVGOLF  32
#define  P_RESVSHUTL 64



#endif
// EOF: security.h

