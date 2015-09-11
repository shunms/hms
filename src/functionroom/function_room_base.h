/*--------------- function_room_base.h ---------------*/
/*
BY:     Prasoonadevi Thippana
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - Function Room base header

*/

#include <QWidget>
#include <QObject>
#include <QDate>
//#include "src/common/common.h"


class Function_Room_Base : public QWidget
{
    Q_OBJECT

    public:
           
        // void SetDBId( DBID dbid );
           
         void SetFunctionRoomNo( int roomno );

         void SetDate( QDate date );

         void SetTime( QTime time );

         void SetCapacity( int capacity );
         
         void SetFirstName( QString firstname);

         void SetLastName( QString lastname);

         void SetHotelRoomNo(int hotelroomno );

         void SetBillAmount( int BillAmount );
         
         void SetStatus( QString status );

         //int   GetDBId();
         
         int GetFunctionRoomNo( );

         QDate GetDate();

         QTime GetTime();

         int GetCapacity();
         
         QString GetFirstName();

         QString GetLastName();

         int GetHotelRoomNo();

         int GetBillAmount();
         
         QString GetStatus();
      
    private:
        //DBID dbid;

        
        int     FunctionRoomNo;
        QDate   Date;
        QTime   Time;
        int     Capacity ;
        QString CustFirstName;
        QString CustLastName;
        int     CustHotelRoomNo;
        int     BillAmount;
        QString Status;

};/*EOF*/





