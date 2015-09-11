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


#include <QObject>
#include <QDate>
#include "src/common/common.h"

class Tour_Info_Base : public QWidget
{
    Q_OBJECT

    public:
           
         void SetDBId( DBID dbid );
         
         void SetTourNo( int tourno );

         void SetDate( QDate date );

         void SetStartTime( QTime starttime);

         void SetArrivalTime( QTime Arrivaltime);

         void SetCost( int cost);

         void SetTourDetails( QString tourdetails);

         int GetDBId();
         
         int GetTourNo();
         
         QDate GetDate();
         
         QTime GetStartTime();
         
         QTime GetArrivalTime();
         
         int GetTotalCapacity();
         
         int GetCost();
         
         QString GetTourDetails();
         
     private:
        DBID dbid;
        
        int     TourNo;
        QDate   Date;
        QTime   StartTime;
        QTime   ArrivalTime;
        int     TotalCapacity ;    
        int     Cost;
        QString TourDetails;
        
};
