/*--------------- db_mgr.h ---------------*/
/*
BY:     Sudha Shunmugam
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - DB Manager header file

CHANGES
03-04-2006 Sudha -  Created.
04-18-2006 -  Added some all propertyinfo table creation functions
              Added an intial version of GetAllEmptyRooms function
*/

#ifndef DBMGR_H
#define DBMGR_H

#include <QSqlDatabase>
#include <qsqlquery.h>
#include <QMessageBox>
#include <qvariant.h>
#include <qsqlrecord.h>

#include <QDate>
#include <QSqlError>
#include <qlist.h>
#include <qstring.h>
#include <qtextstream.h>
#include <list>

/* For Room List */
#include "src/pmm/room_base.h"
#include "src/pmm/hotel_base.h"
#include "src/pmm/owner_base.h"
#include "src/pmm/rates_increase.h"
#include "src/pmm/room_types_base.h"
#include "src/pmm/room_base.h"
#include "src/pmm/restaurant_info.h"
#include "src/pmm/tables_info.h"
#include "src/pmm/func_room_info.h"

#include "rio/customer_base.h"
#include "rio/guest_base.h"
#include "rio/room_reservation_base.h"
#include "rio/room_reservation_log.h"

#include "restaurant/table_reservation_base.h"
#include "restaurant/table_waitlist_base.h"

#include "functionroom/function_room_base.h"
#include "tour/tour_info_base.h"

#include "security/security_emp_details_base.h"
#include "maint/service_maint_base.h"

#define DBID int

/**
 * DB Manager class - An interface to mysql DB.
 *
 * This class contains api's to communicate with the mysql server and connects
 * to a database - and provides api to all the modules to access thier
 * corresponding tables.
 */
class Db_Mgr 
{
private:
    QSqlDatabase db;
    QWidget window;
    QString queryStr;
    bool ready;
    bool setUp;
    ///Table reservation Window time in hours
    int tableReservWindow;
    int propertyId;
    
public:

    /// Constructor
    Db_Mgr();

    /// Destructor
    virtual ~Db_Mgr();
    
    /// To connect to the mysql database
    bool ConnectToDb(QString hostName, QString dbName, QString user, QString pw);
    /// For Security Module
    bool Ready();
    bool IsDatabaseSetup();

    /// To create all the tables
    int CreateAllTables();
    


    

    /************** Property Information ****************/
    /// Property Info Table
    int CreatePropertyInfoTable();
    DBID AddPropertyInfo(Hotel_Info_Base *hotelInfo);
    int ModifyPropertyInfo(DBID propertyId, Hotel_Info_Base *hotelInfo);
    int GetAllPropertyInfo(Hotel_Info_Base *hotelInfo);

    /// OwnerInfo Table
    int CreateOwnerInfoTable();
    DBID AddOwnerInfo(Owner_Info_Base *ownerInfo);
    int DeleteOwnerInfo(DBID ownerId);
    int ModifyOwnerInfo(DBID ownerId, Owner_Info_Base *ownerInfo);
    int GetAllOnwerInfo(QList<Owner_Info_Base *>& ownerList); 

    /// To create rate info table
    int CreateRateInfoTable();
    DBID AddRateInfo(Rates_Increase *rateInfo);
    int ModifyRateInfo(DBID rateId, Rates_Increase *rateInfo);
    int GetWeekendInc(DBID rateId);
    int GetSeasonalInc(DBID rateId);
    QString GetRateNotes(DBID rateId);
    
    /// To create RoomType table
    int CreateRoomTypeTable();
    DBID AddRoomType(Room_Types_Base *roomType);
    int DeleteRoomType(DBID roomTypeId);
    int ModifyRoomType(DBID roomTypeId, Room_Types_Base *roomType);
    int GetAllRoomType(QList<Room_Types_Base *>&roomTypeList);
    
    /// To create room info table
    int CreateRoomInfoTable();
    DBID AddRoomInfo(Room_Info_Base *roomInfo);
    int DeleteRoomInfo(DBID roomID);
    int ModifyRoomInfo(DBID roomID, Room_Info_Base *roomInfo);
    int GetAllRoomInfo(QList<Room_Info_Base *>&roomList);
    
    /// To Create restaurant Info table
    int CreateRestInfoTable();
    DBID AddRestaurantInfo(Restaurant_Info *restInfo);
    int DeleteRestInfo(DBID restId);
    int ModifyRestInfo(DBID restId, Restaurant_Info *restInfo);
    int GetAllRestInfo(QList<Restaurant_Info *>&restInfo);

    /// To create Restaurant table information
    int CreateRestTableInfoTable();
    DBID AddTableInfo(Tables_Info *tableInfo);
    int DeleteTableInfo(DBID tableId);
    int ModifyTableInfo(DBID tableId, Tables_Info *tableInfo);
    int GetAllTableInfo(QList<Tables_Info *>&tableInfo);

    ///To create FunctionRoom Info Table
    int CreateFuncRoomInfoTable();
    DBID AddFunctionRoomInfo(Func_Room_Info *funcRoom);
    int DeleteFunctionRoomInfo(DBID funcRoomId);
    int ModifyFunctionRoomInfo(DBID funcRoomId, Func_Room_Info *funcRoom);
    int GetAllFunctionRoomInfo(QList<Func_Room_Info *>&funcRoom);

     ///To create Golf Info Table
    int CreateGolfInfoTable();
    DBID AddGolfInfo();

    



    /*********** Room Reservation ************/
    
    /// To create customer info table
    int CreateCustomerInfoTable();
    DBID AddCustomerInfo(Customer_Base *custInfo);
    int GetCustomerOfReservation(DBID roomReservId, Customer_Base *custInfo);
    int GetCustomerOfGuest(DBID guestId, Customer_Base *custInfo);
    int GetThisCustomerInfo(DBID custId, Customer_Base *custInfo);
    int ModifyCustomerInfo(DBID custId, Customer_Base *custInfo);
    DBID GetCustomerId(QString fName, QString lName);
    
    /// To create guest info table
    int CreateGuestInfoTable();
    DBID AddGuestInfo(Guest_Base *guestInfo);
    int GetGuestOfReservation(DBID roomReservId, Guest_Base *guestInfo);
    int GetThisGuest(DBID guestId, Guest_Base *guestInfo);
    int GetNumOfAdditionalGuest(DBID roomReservId);
    int AttachGuestToReservation(DBID guestId, DBID roomReservId);
    int ModifyGuestInfo(DBID guestId, Guest_Base *guestInfo);
    int GetAllCustomerGuests(DBID custId, QList<Guest_Base *>&guestList);
    int GetGuestByName(QString lastName, QString firstName, QList<Guest_Base *>&guestList);
    
    
    /// To create room reservation table
    int CreateRoomReservTable();
    /// Create an reservation entry
    DBID AddRoomReservation(Room_Reservation_Base *reservationInfo);
    int GetThisRoomReservation(DBID roomReservId, Room_Reservation_Base *reservationInfo);
    int ModifyRoomReservationInfo(DBID roomReservId, Room_Reservation_Base * reservationInfo);
    int DeleteRoomReservation(DBID roomReservId);
    int GetAllRoomReservations(DBID roomId, QList<Room_Reservation_Base *>&reservationList);
    int GetAllRoomReservations(DBID roomId, QString status, QList<Room_Reservation_Base *>&reservationList);
    int GetAllRoomReservations(QString status, QList<Room_Reservation_Base *>&reservationList);
    int GetAllRoomReservations(QDate startDate, QDate endDate, QList<Room_Reservation_Base *>&reservationList);
    int GetAllGuestReservations(DBID GuestId, QString status, QList<Room_Reservation_Base *>&reservationList);
    
    
    /// To create room reservation log
    int CreateRoomReservationLogTable();
    /// To add a reservation Log
    DBID AddRoomReservationLog( DBID roomReservId, Room_Reservation_Log *logInfo);  
    int GetAllReservationLog(DBID roomReservId, QList<Room_Reservation_Log *>&logList);
        
    /* Room Reservation related Queries */
    /// Get all the vacant rooms 
    int GetAllEmptyRooms(QString roomType, QDate fromDate, QDate toDate, QList<Room_Info_Base *>&roomList );
    /// To change the reservation status
    int ChangeRoomReservationStatus(DBID roomReservId, QString status);
    


    


    
    /************** Restaurant reservation ***************/
    
    /// To create a reservation for a table in restaurant
    int CreateRestReservTable();   
    int GetAllFreeTables(int size, QDate Date, QTime time, QList<Tables_Info *>&tablesList);    
    
    DBID AddTableReservation(Table_Reservation_Base *tableReservation);
    int RemoveFromTableReservationList(DBID reservId);
    int GetAllTableReservations(QString lName, QString fName, QList<Table_Reservation_Base*>&reservList);
    int GetAllTableReservations(QDate date, QTime time, QList<Table_Reservation_Base*>&reservList);
    int GetAllTableReservations(QList<Table_Reservation_Base*>&reservList);
    
    int CreateRestWaitlistTable();
    DBID AddRestaurantWaitlist(Table_Waitlist_Base *waitlistInfo);
    int RemoveFromWaitlist(DBID waitlistId);
    int GetAllWaitlist(QList<Table_Waitlist_Base*>&waitList);
    

    
    /// Function room reservation
    int CreateFunctionroomReserveTable();
    int GetAllFreeFunctionRooms(int capacity, QDate Date, QTime fromTime, QTime toTime, QList<Func_Room_Info *>&funcRoomList);
    
    DBID AddFunctionRoomReservation(Function_Room_Base *funcRoomReservation);
    int RemoveFromFuncRoomReservationList(DBID reservId);
  
#if 0
     /// To create TourInfo Table
    int CreateTourInfoTable();
    DBID AddTourInfo(Tour_Info_Base *tourInfo);
    int RemoveFromTourInfo(DBID tourId);

    int CreateTourReservationTable();
    DBID AddTourReservation();
    int RemoveFromTourReservation(DBID tourReservId);
    


    
    
    /************** User Related Functions ****************/
    /// To create staff Info table
    int CreateUserInfoTable();
    DBID AddUserInfo(security_emp_details_base *userInfo);
    
    DBID GetUserId(QString userName);
    QString GetUserPw(DBID userId);
    int ChangeUserPw(DBID userId, QString newPw);
    int GetUsersByName(QString lastName, QString firstName, 
        QList<security_emp_details_base *>&userInfo);
    int GetUsersByDept(QString deptName, 
        QList<security_emp_details_base *>&userInfo);
    int GetUsersById(int empId, 
        QList<security_emp_details_base *>&userInfo);
    int GetAllUsers(QList<security_emp_details_base *>&userInfo);


    /* Maintanance related functions */
    int CreateServiceInfoTable();
    DBID AddServiceInfo();
    int GetAllServices();//Services_List
    DBID GetServiceId(QString serviceName);
    
    int CreateServiceRequestTable();
    DBID AddServiceRequest(service_maint_base *maintRequest);
    int GetAllServiceRequests(QList<service_maint_base *>&serviceReqList);
    int GetAllServiceRequestsByRoom(int roomId, QList<service_maint_base *>&serviceReqList);
    int GetAllServiceRequests(DBID serviceId, QList<service_maint_base *>&serviceReqList);


#endif

    

    /************** Golf course reservation ************/
    int CreateGolfReservationTable();
    DBID AddGolfReservation();

    int CreateGiftCertInfoTable();
    DBID AddGiftCert();

     ///To create ShuttleInfo Table
    int CreateShuttleInfoTable();
    DBID AddShuttleInfo();    



    
    
private:
    ///DB local Functions
    
    /** This function returns true if there is any reservation entry that
     * clashes with in these dates */
    bool isRoomBookedForDate(int roomNum, QDate fromDate, QDate toDate);
    
    bool isTableBooked(int tableId, QDate date, QTime time);
    bool isFunctionRoomBooked(int funcRoomId, QDate date, QTime fromTime, QTime toTime);
    
    /// Needs to be changed
    int QueryTables();
    

    
};

#endif
