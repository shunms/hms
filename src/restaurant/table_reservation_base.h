/*--------------- table_reservation_base.h ---------------*/
/*
BY:     Prasoonadevi Thippana
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - Table Reservation base header

*/

#include <QWidget>
#include <QObject>
#include <QDate>
//#include "src/common/common.h"


class Table_Reservation_Base : public QWidget
{
    Q_OBJECT

    public:
           
          

         //Table_Reservation_Base( QObject * parent = 0 );  
         
        // void SetDBId( DBID dbid );
           
         void SetTableNo( int tableno );

         void SetDate( QDate date );

         void SetTime( QTime time );

         void SetCapacity( int capacity );
         
         void SetFirstName( QString firstname);

         void SetLastName( QString lastname);

         void SetHotelRoomNo(int hotelroomno );

         void SetBillAmount( int BillAmount );
         
         void SetStatus( QString status );
         
       //  int   GetDBId();
         
         int GetTableNo();

         QDate GetDate();

         QTime GetTime();

         int GetCapacity();
         
         QString GetFirstName();

         QString GetLastName();

         int GetHotelRoomNo();

         int GetBillAmount();
         
         QString GetStatus();
        
      
    private:
       // DBID dbid;

        
        int     TableNo;
        QDate   Date;
        QTime   Time;
        int     Capacity ;
        QString CustFirstName;
        QString CustLastName;
        int     CustHotelRoomNo;
        int     BillAmount;
        QString Status;
        

};/*EOF*/





