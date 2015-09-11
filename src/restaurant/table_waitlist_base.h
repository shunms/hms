/*--------------- table_waitlist_base.h ---------------*/
/*
BY:     Prasoonadevi Thippana
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - Table Waitlist base header

*/

#include <QWidget>
#include <QObject>
#include <QDate>
//#include "src/common/common.h"


class Table_Waitlist_Base : public QWidget
{
    Q_OBJECT

    public:
           
         //void SetDBId( DBID dbid );
         
         void SetWaitListNo( int waitlistno);
        
         void SetCapacity( int capacity );
         
         void SetFirstName( QString firstname);

         void SetLastName( QString lastname);

         void SetHotelRoomNo(int hotelroomno );

       
         //int   GetDBId();
        
         int GetWaitListNo(); 
        
         int GetCapacity();
         
         QString GetFirstName();

         QString GetLastName();

         int GetHotelRoomNo();

      
    private:
       // DBID DBid;

        
        int     WaitListNo;
        int     Capacity ;
        QString CustFirstName;
        QString CustLastName;
        int     CustHotelRoomNo;
        

};/*EOF*/





