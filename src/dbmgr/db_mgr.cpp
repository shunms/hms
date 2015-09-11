/*--------------- db_mgr.cpp ---------------*/
/*
BY:     Sudha Shunmugam
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - DB Manager Class

CHANGES
04-04-2006 -  Created.
04-14-2006 -  Added 3 table creation functions
04-18-2006 -  Added some all propertyinfo table creation functions
              Added an intial version of GetAllEmptyRooms function
*/

#include "db_mgr.h"

//#define STUB 1

#ifndef DATABASE
#define DATABASE "QODBC"
#endif

/* ----Db_Mgr Constructor---- */
Db_Mgr::Db_Mgr()    
{
  ready = 1;
  tableReservWindow = 2;    
}

/* ---- Db_Mgr Destructor---- */
Db_Mgr::~Db_Mgr()    
{
    
}


/* ----ConnectTo DB---- */
bool Db_Mgr::ConnectToDb(QString hostName, QString dbName, QString user, QString pw) {
    QWidget window; 
    
    /* Connect to database thru ODBC */
    db = QSqlDatabase::addDatabase(DATABASE);
    
    db.setHostName(hostName);
    db.setDatabaseName(dbName);
    db.setUserName(user);
    db.setPassword(pw);
    
    bool ok = db.open();
    setUp = 1;
	
#ifdef STUB
    if(ok){
        QMessageBox::information( &window, ":-)","Connected to DB" );        
        return(1);
    }else {
       QMessageBox::information( &window, ":-(","NOT Connected to DB" );
    }
#endif
    return(ok);
}

bool Db_Mgr::Ready() 
{
  return(ready);
}

bool Db_Mgr::IsDatabaseSetup() 
{
  return(setUp);
}

/* ---- CreateAllTables---- */
int Db_Mgr::CreateAllTables()
{
    /* Create Property Info table */
    CreatePropertyInfoTable();
    
    /* Create OnwerInfo Table */
    CreateOwnerInfoTable();
    
    /* Create Restaaurant Info table */
    CreateRestInfoTable();

    /* Create FunctionRoom Info Table */
    CreateFuncRoomInfoTable();

    /* Create Shuttle Info Table */
    CreateShuttleInfoTable();
#if 0
    /* Create TourInfo Table */
    CreateTourInfoTable();

    CreateUserInfoTable();
    CreateServiceInfoTable();
    CreateServiceRequestTable();
#endif
    /* Create Golf Info Table */
    CreateGolfInfoTable();
    
  	/* Create RoomInfo Tables */
    CreateRoomInfoTable();

  	/* Create RateInfo Tables */
    CreateRateInfoTable();

    /* customer Info table */
    CreateCustomerInfoTable();
    
    /* guest Info table */
    CreateGuestInfoTable();

    /* Room Reservation */
    CreateRoomReservTable();

    /* Create Restaurant Table Info tables */
    CreateRestTableInfoTable();
    
    /* Restaurant reservation table */
    CreateRestReservTable();

    return(1);    
}

/* ----CreatePropertyInfoTable---- */
int Db_Mgr::CreatePropertyInfoTable()
{
  	/* Create CreatePropertyInfoTable tables */
    QSqlQuery q1;
    q1.prepare("CREATE TABLE PropertyInfo (propertyId integer primary key AUTO_INCREMENT, HotelName varchar(30), addr varchar(30), city varchar(20), state varchar(2), country varchar(2), zipCode integer, PhNum varchar(20), email varchar(30), webAddr varchar(30), specialNotes varchar(30), restaurant bool, functionRoom bool, shuttles bool, tours bool, golf bool, giftCert bool)");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created PropertyInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddPropertyInfo(Hotel_Info_Base *hotelInfo)
{
    QSqlQuery query;
    
    queryStr = QString("INSERT INTO PropertyInfo (hotelName, addr, city, state, country, zipCode, phNum, email, webAddr, restaurant, functionRoom, shuttles, tours, golf, giftCert) VALUES ('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', %10, %11, %12, %13, %14, %15)")
      .arg(hotelInfo->GetName())
      .arg(hotelInfo->GetAddress())
      .arg(hotelInfo->GetCity())
      .arg(hotelInfo->GetState())
      .arg(hotelInfo->GetCountry())
      .arg(hotelInfo->GetZipCode())
      .arg(hotelInfo->GetPhone())
      .arg(hotelInfo->GetEmail())
      .arg(hotelInfo->GetUrl())
      .arg(hotelInfo->GetRestaurants())
      .arg(hotelInfo->GetFuncRooms())
      .arg(hotelInfo->GetShuttles())
      .arg(hotelInfo->GetTours())      
      .arg(hotelInfo->GetGolfCourse())
      .arg(hotelInfo->GetGiftCertfs())
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from PropertyInfo");
        query.exec();
        if(query.next())  { 
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            propertyId = query.value(0).toInt();
            return(propertyId);
        }
    }
    return(0);
}

DBID Db_Mgr::ModifyPropertyInfo(DBID propertyId, Hotel_Info_Base *hotelInfo)
{
    QSqlQuery query;

    queryStr = QString("UPDATE PropertyInfo SET hotelName = '%1', addr = '%2', city = '%3', state = '%4', country = '%5', zipCode = '%6', phNum = '%7', email = '%8', webAddr = '%9', restaurant = %10, functionRoom = %11, shuttles = %12, tours = %13, golf = %14, giftCert = %15 WHERE propertyId = %16")
      .arg(hotelInfo->GetName())
      .arg(hotelInfo->GetAddress())
      .arg(hotelInfo->GetCity())
      .arg(hotelInfo->GetState())
      .arg(hotelInfo->GetCountry())
      .arg(hotelInfo->GetZipCode())
      .arg(hotelInfo->GetPhone())
      .arg(hotelInfo->GetEmail())
      .arg(hotelInfo->GetUrl())
      .arg(hotelInfo->GetRestaurants())
      .arg(hotelInfo->GetFuncRooms())
      .arg(hotelInfo->GetShuttles())
      .arg(hotelInfo->GetTours())
      .arg(hotelInfo->GetGolfCourse())
      .arg(hotelInfo->GetGiftCertfs())
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)","Update successful");
#endif
        return(0);
    }

    return(-1);    
    
}

DBID Db_Mgr::GetAllPropertyInfo(Hotel_Info_Base *hotelInfo)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * FROM PropertyInfo");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    

    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();    
            hotelInfo->SetName(rec.value("HotelName").toString());
            hotelInfo->SetAddress(rec.value("addr").toString());
            hotelInfo->SetCity(rec.value("city").toString());
            hotelInfo->SetState(rec.value("state").toString());
            hotelInfo->SetCountry(rec.value("country").toString());
            hotelInfo->SetZipCode(rec.value("zipCode").toString());
            hotelInfo->SetPhone(rec.value("PhNum").toString());
            hotelInfo->SetEmail(rec.value("email").toString());
            hotelInfo->SetUrl(rec.value("specialNotes").toString());
            hotelInfo->SetRestaurants(rec.value("restaurant").toBool());
            hotelInfo->SetFuncRooms(rec.value("functionRoom").toBool());
            hotelInfo->SetShuttles(rec.value("shuttles").toBool());
            hotelInfo->SetTours(rec.value("tours").toBool());
            hotelInfo->SetGolfCourse(rec.value("golf").toBool());
            hotelInfo->SetGiftCertfs(rec.value("giftCert").toBool());
#ifdef STUB
            /* I have to add it in the list send to me */
            QMessageBox::information( &window, ":-)",hotelInfo->GetName());
#endif
        }
        return(0);
    }

    return(-1);    
    
}


/* ----CreateOwnerInfoTable---- */
int Db_Mgr::CreateOwnerInfoTable()
{
  	/* Create CreateOwnerInfoTable tables */
    QSqlQuery q1;

    q1.prepare("CREATE TABLE OwnerInfo (OwnerId integer primary key AUTO_INCREMENT, propertyId integer, firstName varchar(30), lastName varchar(30), addr varchar(30), city varchar(20), state varchar(2), country varchar(2), zipCode integer, PhNum varchar(20), email varchar(30), specialNotes varchar(30))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created OwnerInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text());
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}


DBID Db_Mgr::AddOwnerInfo(Owner_Info_Base *ownerInfo)
{
    QSqlQuery query;
       
    queryStr = QString("INSERT INTO OwnerInfo (propertyId, firstName, lastName, addr, city, state, country, zipCode, phNum, email) VALUES (%1, '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', '%10')")
      .arg(propertyId)
      .arg(ownerInfo->GetFirstName())
      .arg(ownerInfo->GetLastName())
      .arg(ownerInfo->GetAddress())
      .arg(ownerInfo->GetCity())
      .arg(ownerInfo->GetState())
      .arg(ownerInfo->GetCountry())
      .arg(ownerInfo->GetZipCode())
      .arg(ownerInfo->GetPhone())
      .arg(ownerInfo->GetEmail())      
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from OwnerInfo");
        query.exec();
        if(query.next())  { 
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(-1);
}

int Db_Mgr::DeleteOwnerInfo(DBID ownerId)
{
    QSqlQuery query;

    queryStr = QString("DELETE from OwnerInfo WHERE OwnerId = %1")
      .arg(ownerId);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","DELETE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::ModifyOwnerInfo(DBID ownerId, Owner_Info_Base *ownerInfo)
{
    QSqlQuery query;
   
    queryStr = QString("UPDATE OwnerInfo SET propertyId = %1, firstName = '%2', lastName = '%3', addr = '%4', city = '%5', state = '%6', country = '%7', zipCode = '%8', phNum = '%9', email = '%10' WHERE OwnerId = %11")
      .arg(propertyId)
      .arg(ownerInfo->GetFirstName())
      .arg(ownerInfo->GetLastName())
      .arg(ownerInfo->GetAddress())
      .arg(ownerInfo->GetCity())
      .arg(ownerInfo->GetState())
      .arg(ownerInfo->GetCountry())
      .arg(ownerInfo->GetZipCode())
      .arg(ownerInfo->GetPhone())
      .arg(ownerInfo->GetEmail())
      .arg(ownerId);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","UPDATE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllOnwerInfo(QList<Owner_Info_Base *>&ownerList)
{
    QSqlQuery query;
    QSqlRecord rec;


    queryStr = QString("SELECT * FROM OwnerInfo");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();    
            
            Owner_Info_Base *temp = new Owner_Info_Base();
            temp->SetFirstName(rec.value("firstName").toString());
            temp->SetLastName(rec.value("lastName").toString());
            temp->SetAddress(rec.value("addr").toString());
            temp->SetCity(rec.value("city").toString());
            temp->SetState(rec.value("state").toString());
            temp->SetCountry(rec.value("country").toString());
            temp->SetZipCode(rec.value("zipCode").toString());
            temp->SetPhone(rec.value("PhNum").toString());
            temp->SetEmail(rec.value("email").toString());
            temp->SetNotes(rec.value("specialNotes").toString());

            ownerList.append(temp);
#ifdef STUB
            /* I have to add it in the list send to me */
            QMessageBox::information( &window, ":-)",rec.value("firstName").toString());
#endif
        }
        return(0);
    }

    return(-1);    
}

/* ----CreateRateInfoTable---- */
int Db_Mgr::CreateRateInfoTable()
{
  	/* Create RateInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RateInfo (rateId integer primary key AUTO_INCREMENT, weekEndInc integer, seasonalInc integer, specialNotes varchar(25))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() ) {
        QMessageBox::information( &window, ":-)","Created RateInfo Table" );    
    }
    else {
        QMessageBox::information( &window, ":-(",  q1.lastError().text());
    }
#endif  
	
	  if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddRateInfo(Rates_Increase *rateInfo)
{
    QSqlQuery query;
        
    queryStr = QString("INSERT INTO RateInfo (weekEndInc, seasonalInc, specialNotes) VALUES (%1, %2, '%3')")
      .arg(rateInfo->GetWeekendInc())
      .arg(rateInfo->GetSeasonalInc())
      .arg(rateInfo->GetIncNotes())
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RateInfo");
        query.exec();
        if(query.next())  {  
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::ModifyRateInfo(DBID rateId, Rates_Increase *rateInfo)
{
    QSqlQuery query;
    
    queryStr = QString("UPDATE RateInfo SET weekEndInc = %1, seasonalInc = %2, specialNotes = '%3' WHERE rateId = %4")
      .arg(rateInfo->GetWeekendInc())
      .arg(rateInfo->GetSeasonalInc())
      .arg(rateInfo->GetIncNotes())
      .arg(rateId)
      ;
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","UPDATE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::GetWeekendInc(DBID rateId)
{
    QSqlQuery query;
    QSqlRecord rec;
    int amount = 0;
   
    queryStr = QString("SELECT weekEndInc FROM RateInfo WHERE rateId = %1")
      .arg(rateId);
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        if (query.next()) {
            rec = query.record();    
            amount = rec.value(0).toInt();
#ifdef STUB
            /* I have to add it in the list send to me */
            QMessageBox::information( &window, ":-)","amount retrieved");
#endif
        }
        return(amount);
    }

    return(-1);    
}

int Db_Mgr::GetSeasonalInc(DBID rateId)
{
    QSqlQuery query;
    QSqlRecord rec;
    int amount = 0;
   
    queryStr = QString("SELECT seasonalInc FROM RateInfo WHERE rateId = %1")
      .arg(rateId);
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        if (query.next()) {
            rec = query.record();    
            amount = rec.value(0).toInt();
#ifdef STUB
            /* I have to add it in the list send to me */
            QMessageBox::information( &window, ":-)","amount retrieved");
#endif
        }
        return(amount);
    }

    return(-1);    
}

QString Db_Mgr::GetRateNotes(DBID rateId)
{
    QSqlQuery query;
    QSqlRecord rec;
    QString notes;
   
    queryStr = QString("SELECT specialNotes FROM RateInfo WHERE rateId = %1")
      .arg(rateId);
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        if (query.next()) {
            rec = query.record();    
            notes = rec.value(0).toString();
#ifdef STUB
            /* I have to add it in the list send to me */
            QMessageBox::information( &window, ":-)","amount retrieved");
#endif
        }
        return(notes);
    }

    return(NULL);    
}

/* ----CreateRoomTypeTable---- */
int Db_Mgr::CreateRoomTypeTable()
{
  	/* Create RoomType tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RoomType (roomTypeId integer primary key AUTO_INCREMENT, roomType varchar(30), rate integer, specialNotes varchar(25))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() ) {
        QMessageBox::information( &window, ":-)","Created RoomType Table" );    
    }
    else {
        QMessageBox::information( &window, ":-(",  q1.lastError().text());
    }
#endif  
	
	  if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddRoomType(Room_Types_Base *roomType)
{
    QSqlQuery query;
    
   
    queryStr = QString("INSERT INTO RoomType (roomType, rate) VALUES ('%1', %2)")
      .arg(roomType->GetRoomType())
      .arg(roomType->GetRoomRate())           
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RoomType");
        query.exec();
        if(query.next())  {   
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::DeleteRoomType(DBID roomTypeId)
{
    QSqlQuery query;

    queryStr = QString("DELETE from RoomType WHERE roomTypeId = %1")
      .arg(roomTypeId);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","DELETE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::ModifyRoomType(DBID roomTypeId, Room_Types_Base *roomType)
{
    QSqlQuery query;
    
    queryStr = QString("UPDATE RoomType SET roomType = '%1', rate = %2 WHERE rateId = %3")
      .arg(roomType->GetRoomType())
      .arg(roomType->GetRoomRate())
      .arg(roomTypeId)
      ;
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","UPDATE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllRoomType(QList<Room_Types_Base *>&roomTypeList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    queryStr = QString("SELECT * FROM roomType");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();
            Room_Types_Base *temp = new Room_Types_Base();
            temp->SetRoomType(rec.value("roomType").toString());
            temp->SetRoomRate(rec.value("rate").toInt());
            roomTypeList.append(temp);
#ifdef STUB
            /* I have to add it in the list send to me */
            QMessageBox::information( &window, ":-)",roomType);
#endif
        }
        return(0);
    }

    return(-1);    
}


/* ----CreateRoomInfoTable---- */
int Db_Mgr::CreateRoomInfoTable()
{
  	/* Create RoomInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RoomInfo (roomId integer primary key AUTO_INCREMENT, propertyId integer, floorNum integer, roomStatus varchar(20), roomType varchar(20), size integer, numOfBeds integer, maxOccupants integer, specialNotes varchar(25), roomRate integer)");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() ) {
        QMessageBox::information( &window, ":-)","Created RoomInfo Table" );   
    }
    else {
        QMessageBox::information( &window, ":-(",  q1.lastError().text());
    }
#endif  
	
	  if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddRoomInfo(Room_Info_Base *roomInfo)
{
    QSqlQuery query;
       
    queryStr = QString("INSERT INTO RoomInfo (propertyId, floorNum, roomType, size, numOfBeds, maxOccupants) VALUES (%1, %2, '%3', %4, %5, %6)")
      .arg(propertyId)
      .arg(roomInfo->GetFloor())
      .arg(roomInfo->GetType())
      .arg(roomInfo->GetSqFootage())
      .arg(roomInfo->GetBeds())
      .arg(roomInfo->GetMaxOccupants())
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RoomInfo");
        query.exec();
        if(query.next())  {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::DeleteRoomInfo(DBID roomId)
{
    QSqlQuery query;

    queryStr = QString("DELETE from RoomInfo WHERE roomId = %1")
      .arg(roomId);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","DELETE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::ModifyRoomInfo(DBID roomId, Room_Info_Base *roomInfo)
{
    QSqlQuery query;
   

    queryStr = QString("UPDATE RoomInfo SET propertyId = %1, floorNum = %2, roomType = '%3', size = %4, numOfBeds = %5, maxOccupants = %6 WHERE roomId = %6")
      .arg(propertyId)
      .arg(roomInfo->GetFloor())
      .arg(roomInfo->GetType())
      .arg(roomInfo->GetSqFootage())
      .arg(roomInfo->GetBeds())
      .arg(roomInfo->GetMaxOccupants())
      .arg(roomId)
      ;
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","UPDATE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllRoomInfo(QList<Room_Info_Base *>&roomList)
{
    QSqlQuery query;
    QSqlRecord rec;


    queryStr = QString("SELECT * FROM RoomInfo");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();
            Room_Info_Base *temp = new Room_Info_Base();
            temp->SetFloor(rec.value("floorNum").toInt());
            temp->SetType(rec.value("roomType").toString());
            temp->SetSqFootage(rec.value("size").toInt());
            temp->SetBeds(rec.value("numOfBeds").toInt());
            temp->SetMaxOccupants(rec.value("maxOccupants").toInt());
            roomList.append(temp);
#ifdef STUB
            /* I have to add it in the list in the parameter */
            QMessageBox::information( &window, ":-)",roomType);
#endif
        }
        return(0);
    }

    return(-1);    
}



/* ----CreateRestInfoTable---- */
int Db_Mgr::CreateRestInfoTable()
{
  	/* Create CreateRestInfoTable tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RestaurantInfo (restaurantId integer primary key AUTO_INCREMENT, propertyId integer, restaurantName varchar(30), restaurantType varchar(30), numTables integer, specialNotes varchar(25))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive())
      QMessageBox::information( &window, ":-)","Created RestaurantInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddRestaurantInfo(Restaurant_Info *restInfo)
{
    QSqlQuery query;
      
    queryStr = QString("INSERT INTO RestaurantInfo (propertyId, restaurantName, restaurantType, numTables) VALUES (%1, '%2', '%3', %4)")
      .arg(propertyId)
      .arg(restInfo->GetRestNum())
      .arg(restInfo->GetRestType())
      .arg(restInfo->GetNumTables())           
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RestaurantInfo");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::DeleteRestInfo(DBID restId)
{
    QSqlQuery query;

    queryStr = QString("DELETE from RestaurantInfo WHERE roomId = %1")
      .arg(restId);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","DELETE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::ModifyRestInfo(DBID restId, Restaurant_Info *restInfo)
{
    QSqlQuery query;
   
    queryStr = QString("UPDATE RestaurantInfo SET propertyId = %1, restaurantName = '%2', restaurantType = '%3', numTables = %4 WHERE restId = %5")
      .arg(propertyId)
      .arg(restInfo->GetRestNum())
      .arg(restInfo->GetRestType())
      .arg(restInfo->GetNumTables())
      .arg(restId)
      ;
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","UPDATE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllRestInfo(QList<Restaurant_Info *>&restInfo)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * FROM RestaurantInfo");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();
            Restaurant_Info *temp = new Restaurant_Info();
            temp->SetRestNum(rec.value("restaurantName").toString());
            temp->SetRestType(rec.value("restaurantType").toString());
            temp->SetNumTables(rec.value("numTables").toInt());
            restInfo.append(temp);
#ifdef STUB
            /* I have to add it in the list in the parameter */
            QMessageBox::information( &window, ":-)",rec.value("restaurantType").toString());
#endif
        }
        return(0);
    }

    return(-1);    
}

/* ----CreateRestTableInfoTables---- */
int Db_Mgr::CreateRestTableInfoTable()
{
  	/* Create TableInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE TableInfo (tableId integer primary key AUTO_INCREMENT, restaurantId integer, size integer, specialNotes varchar(25))");
    q1.exec();

#ifdef STUB
    if( q1.isActive() ) {
        QMessageBox::information( &window, ":-)","Created TableInfo Table" );
    }
    else {
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
    }
#endif

	  if( q1.isActive() )
        return(0);    
      
    return(-1);
}


DBID Db_Mgr::AddTableInfo(Tables_Info *tableInfo)
{
    QSqlQuery query;
    
      
    queryStr = QString("INSERT INTO TableInfo (restaurantId, size) VALUES (%1, %2)")
      .arg(tableInfo->GetTableRestNum())
      .arg(tableInfo->GetTableCapacity())             
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from TableInfo");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::DeleteTableInfo(DBID tableId)
{
    QSqlQuery query;

    queryStr = QString("DELETE from TableInfo WHERE tableId = %1")
      .arg(tableId);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","DELETE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::ModifyTableInfo(DBID tableId, Tables_Info *tableInfo)
{
    QSqlQuery query;

    queryStr = QString("UPDATE TableInfo SET restaurantId = %1, size = %2 WHERE tableId = %3")
      .arg(tableInfo->GetTableRestNum())
      .arg(tableInfo->GetTableCapacity())  
      .arg(tableId)
      ;
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","UPDATE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllTableInfo(QList<Tables_Info *>&tableInfo)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * FROM TableInfo");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();
            Tables_Info *temp = new Tables_Info();
            //temp->SetTableNum(rec.value("tableId").toInt());
            //temp->SetTableRestNum(rec.value("restaurantId").toInt());
            temp->SetTableCapacity(rec.value("size").toInt());
            tableInfo.append(temp);
#ifdef STUB
            /* I have to add it in the list in the parameter */
            QMessageBox::information( &window, ":-)","Got table Info");
#endif
        }
        return(0);
    }

    return(-1);    
}

/* ----CreateFuncRoomInfoTable---- */
int Db_Mgr::CreateFuncRoomInfoTable()
{
  	/* Create CreateFunctionInfoTable tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE FuncRoomInfo (funcRoomId integer primary key AUTO_INCREMENT, propertyId integer, roomName varchar(30), roomType varchar(30), size integer, hourRate float, specialNotes varchar(25))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created FuncRoomInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text());
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddFunctionRoomInfo(Func_Room_Info *funcRoom)
{
    QSqlQuery query;
      
    queryStr = QString("INSERT INTO FuncRoomInfo (propertyId, roomName, capacity, hourRate) VALUES (%1, '%2', %3, %4)")
      .arg(propertyId)
      .arg(funcRoom->GetFuncRoomName())             
      .arg(funcRoom->GetFuncRoomCapacity())             
      .arg(funcRoom->GetFuncRoomRate())             
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from FuncRoomInfo");
        query.exec();
        if(query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::DeleteFunctionRoomInfo(DBID funcRoomId)
{
    QSqlQuery query;

    queryStr = QString("DELETE from FuncRoomInfo WHERE funcRoomId = %1")
      .arg(funcRoomId);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","DELETE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::ModifyFunctionRoomInfo(DBID funcRoomId, Func_Room_Info *funcRoom)
{
    QSqlQuery query;
    int propertyId = 1;

    queryStr = QString("UPDATE FuncRoomInfo SET propertyId = %1, roomName = '%2', capacity = %3, hourRate = %4 WHERE funcRoomId = %5")
      .arg(propertyId)
     .arg(funcRoom->GetFuncRoomName())             
      .arg(funcRoom->GetFuncRoomCapacity())             
      .arg(funcRoom->GetFuncRoomRate())
      .arg(funcRoomId)
      ;
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","UPDATE Successful");
#endif
            return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllFunctionRoomInfo(QList<Func_Room_Info *>&funcRoomInfo)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * FROM FuncRoomInfo");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record(); 
            Func_Room_Info *temp = new Func_Room_Info();
            temp->SetFuncRoomName(rec.value("roomName").toString());
            //temp->SetFuncRoomNum(rec.value("capacity").toInt());
            temp->SetFuncRoomRate(rec.value("hourRate").toDouble());
            funcRoomInfo.append(temp);
#ifdef STUB
            /* I have to add it in the list in the parameter */
            QMessageBox::information( &window, ":-)", rec.value("roomName").toString());
#endif
        }
        return(0);
    }

    return(-1);    
}

/* ----CreateGolfInfoTable---- */
int Db_Mgr::CreateGolfInfoTable()
{
  	/* Create CreateGolfInfoTable tables */
    QSqlQuery q1;
    q1.prepare("CREATE TABLE GolfInfo (GolfId integer primary key AUTO_INCREMENT, propertyId integer, numPlayers integer, teeTime Time, GreensFee integer, holeLoc varchar(20), specialNotes varchar(25))");
    q1.exec();   

#ifdef STUB
  
    if( q1.isActive() )
        QMessageBox::information( &window, ":-)","Created GolfInfo Table" );
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}


DBID Db_Mgr::AddGolfInfo()//Golf_Info *
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    int propertyId = 1;
    int numPlayers = 2;
    QTime teeTime(9,00,00);
    int greensFee = 20;
    QString holeLoc = "Near Pool";
      
    queryStr = QString("INSERT INTO GolfInfo (propertyId,  numPlayers, teeTime, GreensFee, holeLoc) VALUES (%1, %2, '%3', %4, '%5')")
      .arg(propertyId)
      .arg(numPlayers)             
      .arg(teeTime.toString())             
      .arg(greensFee)             
      .arg(holeLoc)          
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from GolfInfo");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}







/* ----Query tables---- */
int Db_Mgr::QueryTables()
{

    QSqlQuery query("SELECT roomStatus FROM RoomInfo ");
    if( query.isActive() )
    while (query.next()) {
      QString status = query.value(0).toString();
      QMessageBox::information(&window, "Room Status", status);
    }
    else
      QMessageBox::information(&window, "Failure", "querying Tables");
    
    if( query.isActive() )
        return(0);    
      
    return(-1);
}










/* ----CreateCustomerInfoTable---- */
int Db_Mgr::CreateCustomerInfoTable()
{
  	/* Create RoomInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE CustomerInfo (custId integer primary key AUTO_INCREMENT, propertyId integer, custType varchar(10), compName varchar(30), ccNum varchar(20), ccExpDate date, billingAddr varchar(30), billingCity varchar(10), billingState varchar(2), billingCountry varchar(3), billingZipCode integer, contactAddr varchar(30), contactCity varchar(10), contactState varchar(2), contactCountry varchar(2), contactZipCode integer,specialNotes varchar(30))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() )
        QMessageBox::information( &window, ":-)","Created Customer Info Table" );
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

/* To get the customer info associated with a reservation */
int Db_Mgr::AddCustomerInfo(Customer_Base *custInfo)
{
    QSqlQuery query;

    queryStr = QString("INSERT INTO CustomerInfo (propertyId, custType, compName, ccNum, ccExpDate, billingAddr, billingCity, billingState, billingCountry, billingZipCode, contactAddr, contactCity, contactState, contactCountry, contactZipCode)  VALUES (%1, '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', %10, '%11', '%12', '%13', '%14', %15)")
      .arg(propertyId)
      .arg(custInfo->GetBillingType())
      .arg(custInfo->GetName())
      .arg(custInfo->GetCCNumber())
      .arg(custInfo->GetCCExpiration().toString("yyyy-MM-dd"))
      .arg(custInfo->GetAddress())
      .arg(custInfo->GetCity())
      .arg(custInfo->GetState())
      .arg(custInfo->GetCountry())
      .arg(custInfo->GetBillZip())
      .arg(custInfo->GetContactAddress())
      .arg(custInfo->GetContactCity())
      .arg(custInfo->GetContactState())
      .arg(custInfo->GetContactCountry())
      .arg(custInfo->GetContactZip())
      ;
    query.prepare(queryStr);
    query.exec();

     if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from CustomerInfo");
        query.exec();
        if(query.next())  {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(-1);    
}

/* To get the customer info associated with a reservation */
int Db_Mgr::GetCustomerOfReservation(DBID roomReservId, Customer_Base *custInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the customer info from customer Table */
    queryStr = QString("SELECT * from CustomerInfo WHERE custId = (SELECT custId from GuestInfo where guestId = (SELECT guestId from RoomReservation WHERE roomReservId = %1))")
      .arg(roomReservId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
          rec = query.record();
          custInfo->SetName(rec.value("compName").toString());
          custInfo->SetCCNumber(rec.value("ccNum").toString());
          custInfo->SetCCExpiration(rec.value("ccExpDate").toDate());
          custInfo->SetAddress(rec.value("billingAddr").toString());
          custInfo->SetCity(rec.value("billingCity").toString());
          custInfo->SetState(rec.value("billingState").toString());
          custInfo->SetCountry(rec.value("billingCountry").toString());
          //custInfo->SetName(rec.value("billingZipCode").toString());
          //custInfo->SetContactAddress(rec.value("contactAddr").toString());
          //custInfo->SetContactCity(rec.value("contactCity").toString());
          //custInfo->SetContactState(rec.value("contactState").toString());
          //custInfo->SetContactCountry(rec.value("contactCountry").toString());
          //custInfo->SetContactZip(rec.value("contactZipCode").toString());
         
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the customer info associated with a guest */
int Db_Mgr::GetCustomerOfGuest(DBID guestId, Customer_Base *custInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the customer info from customer Table */
    queryStr = QString("SELECT * from CustomerInfo WHERE custId = (SELECT custId from GuestInfo where guestId = %1)")
      .arg(guestId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
          rec = query.record();
          custInfo->SetName(rec.value("compName").toString());
          custInfo->SetCCNumber(rec.value("ccNum").toString());
          custInfo->SetCCExpiration(rec.value("ccExpDate").toDate());
          custInfo->SetAddress(rec.value("billingAddr").toString());
          custInfo->SetCity(rec.value("billingCity").toString());
          custInfo->SetState(rec.value("billingState").toString());
          custInfo->SetCountry(rec.value("billingCountry").toString());
          //custInfo->SetName(rec.value("billingZipCode").toString());
          //custInfo->SetContactAddress(rec.value("contactAddr").toString());
          //custInfo->SetContactCity(rec.value("contactCity").toString());
          //custInfo->SetContactState(rec.value("contactState").toString());
          //custInfo->SetContactCountry(rec.value("contactCountry").toString());
          //custInfo->SetContactZip(rec.value("contactZipCode").toString());
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the customer info associated with a customerId */
int Db_Mgr::GetThisCustomerInfo(DBID custId, Customer_Base *custInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the customer info from customer Table */
    queryStr = QString("SELECT * from CustomerInfo WHERE custId = custId")
      .arg(custId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
          rec = query.record();
          custInfo->SetName(rec.value("compName").toString());
          custInfo->SetCCNumber(rec.value("ccNum").toString());
          custInfo->SetCCExpiration(rec.value("ccExpDate").toDate());
          custInfo->SetAddress(rec.value("billingAddr").toString());
          custInfo->SetCity(rec.value("billingCity").toString());
          custInfo->SetState(rec.value("billingState").toString());
          custInfo->SetCountry(rec.value("billingCountry").toString());
          //custInfo->SetName(rec.value("billingZipCode").toString());
          //custInfo->SetContactAddress(rec.value("contactAddr").toString());
          //custInfo->SetContactCity(rec.value("contactCity").toString());
          //custInfo->SetContactState(rec.value("contactState").toString());
          //custInfo->SetContactCountry(rec.value("contactCountry").toString());
          //custInfo->SetContactZip(rec.value("contactZipCode").toString());
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To modify the customer data */
int Db_Mgr::ModifyCustomerInfo(DBID custId, Customer_Base *custInfo)
{
    QSqlQuery query;

    int propertyId = 1;
   
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("UPDATE CustomerInfo SET propertyId = %1, custType = '%2', compName = '%3', ccNum = '%4', ccExpDate = '%5', billingAddr = '%6', billingCity = '%7', billingState = '%8', billingCountry = '%9', billingZipCode = %10, contactAddr = '%11', contactCity = '%12', contactState = '%13', contactCountry = '%14', contactZipCode = %15")
      .arg(propertyId)
      .arg(custInfo->GetBillingType())
      .arg(custInfo->GetName())
      .arg(custInfo->GetCCNumber())
      .arg(custInfo->GetCCExpiration().toString("yyyy-MM-dd"))
      .arg(custInfo->GetAddress())
      .arg(custInfo->GetCity())
      .arg(custInfo->GetState())
      .arg(custInfo->GetCountry())
      .arg(custInfo->GetBillZip())
      .arg(custInfo->GetContactAddress())
      .arg(custInfo->GetContactCity())
      .arg(custInfo->GetContactState())
      .arg(custInfo->GetContactCountry())
      .arg(custInfo->GetContactZip())
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","Updated");
#endif
            return(0);
    }
    return(-1);
}

/* To get the customer id associated with a customer name */
DBID Db_Mgr::GetCustomerId(QString fName, QString lName)
{
    QSqlQuery query;
    
    /* Get the customer info from customer Table */
    queryStr = QString("SELECT custId from CustomerInfo WHERE lastName = '%1' and firstName = '%2'")
      .arg(fName)
      .arg(lName)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
      }
    }
    return(-1);
}

/* ----CreateGuestInfoTable---- */
int Db_Mgr::CreateGuestInfoTable()
{
  	/* Create RoomInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE GuestInfo (guestId integer primary key AUTO_INCREMENT, custId integer, lastName varchar(30), firstName varchar(30), sex integer, specialNotes varchar(30))");
    q1.exec();  

#ifdef STUB
    QWidget window;
    if( q1.isActive() )
        QMessageBox::information( &window, ":-)","Created Guest Info Table" );
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

/* Returns the DBID of the guest added */
DBID Db_Mgr::AddGuestInfo(Guest_Base *guestInfo)
{
    QSqlQuery query;
     
    queryStr = QString("INSERT INTO GuestInfo (lastName, firstName, sex, specialNotes) VALUES ('%1', '%2', %3, '%4')")      
      .arg(guestInfo->GetLastName())
      .arg(guestInfo->GetFirstName())
      .arg(guestInfo->GetSex())
      .arg(guestInfo->GetNotes())
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from GuestInfo");
        query.exec();
        if(query.next())  {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

/* To get the guest info associated with a reservation */
int Db_Mgr::GetGuestOfReservation(DBID roomReservId, Guest_Base *guestInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from GuestInfo WHERE guestId = (SELECT guestId from RoomReservation WHERE roomReservId = %1)")
      .arg(roomReservId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
          rec = query.record();
          guestInfo->SetLastName(rec.value("lastName").toString());
          guestInfo->SetFirstName(rec.value("firstName").toString());
          guestInfo->SetSex(rec.value("sex").toInt());
          guestInfo->SetNotes(rec.value("specialNotes").toString());
#ifdef STUB
          QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
          return(0);
      }
    }
    return(-1);
}

/* To get the guest info associated with a reservation */
int Db_Mgr::GetThisGuest(DBID guestId, Guest_Base *guestInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from GuestInfo WHERE guestId = %1")
      .arg(guestId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
          rec = query.record();
          guestInfo->SetLastName(rec.value("lastName").toString());
          guestInfo->SetFirstName(rec.value("firstName").toString());
          guestInfo->SetSex(rec.value("sex").toInt());
          guestInfo->SetNotes(rec.value("specialNotes").toString());
#ifdef STUB
          QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
          return(0);
      }
    }
    return(-1);
}

/* To get the number of additional guest associated with a reservation */
int Db_Mgr::GetNumOfAdditionalGuest(DBID roomReservId)
{
    QSqlQuery query;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT numAdditionalGuest from RoomReservation WHERE roomReservId = %1")
      .arg(roomReservId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
      }
    }
    return(-1);
}

/* To attach a guest with a reservation */
int Db_Mgr::AttachGuestToReservation(DBID guestId, DBID roomReservId)
{
    QSqlQuery query;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("UPDATE RoomReservation SET guestId = %1 WHERE roomReservId = %2")
      .arg(guestId)
      .arg(roomReservId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To modify the guest data */
int Db_Mgr::ModifyGuestInfo(DBID guestId, Guest_Base *guestInfo)
{
    QSqlQuery query;
       
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("UPDATE GuestInfo SET lastName = '%1', firstName = '%2', sex = %3, specialNotes = '%4' WHERE guestId = %5")      
      .arg(guestInfo->GetLastName())
      .arg(guestInfo->GetFirstName())
      .arg(guestInfo->GetSex())
      .arg(guestInfo->GetNotes())
      .arg(guestId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)","Updated");
#endif
        return(0);
    }
    return(-1);
}

/* To get the guest info associated with a customer */
int Db_Mgr::GetAllCustomerGuests(DBID custId, QList<Guest_Base *>&guestList)
{
    QSqlQuery query;
    QSqlRecord rec;
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from GuestInfo WHERE custId = %1")
      .arg(custId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Guest_Base *temp = new Guest_Base();
          temp->SetLastName(rec.value("lastName").toString());
          temp->SetFirstName(rec.value("firstName").toString());
          temp->SetSex(rec.value("sex").toInt());
          temp->SetNotes(rec.value("specialNotes").toString());
          guestList.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the guest info by name */
int Db_Mgr::GetGuestByName(QString lastName, QString firstName, QList<Guest_Base *>&guestList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from GuestInfo WHERE lastName = '%1' and firstName = '%2'")
      .arg(lastName)
      .arg(firstName)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Guest_Base *temp = new Guest_Base();
          temp->SetLastName(rec.value("lastName").toString());
          temp->SetFirstName(rec.value("firstName").toString());
          temp->SetSex(rec.value("sex").toInt());
          temp->SetNotes(rec.value("specialNotes").toString());
          guestList.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}


/* ----CreateRoomReservTable---- */
int Db_Mgr::CreateRoomReservTable()
{
  	/* Create RoomReservation tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RoomReservation (roomReservId integer primary key AUTO_INCREMENT, roomId integer, guestId integer, startDate date, endDate date, paid bool, dateCreated date, numAdditionalGuest integer, status integer, specialNotes varchar(30))");
    q1.exec();   
    
#ifdef STUB
    if( q1.isActive() )
        QMessageBox::information( &window, ":-)","Created room reserv Table" );
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

/** This adds a room reservation entry in the RoomReservation table and returns
 * the reservation ID */

DBID Db_Mgr::AddRoomReservation(Room_Reservation_Base *reservationInfo)
{
    QSqlQuery query;
    int numAdditionalGuest = 0;
     
    queryStr = QString("INSERT INTO RoomReservation (roomId, startDate, endDate, paid, dateCreated, numAdditionalGuest, status) VALUES (%1, '%2', '%3', %4, '%5', %6, %7)")
      .arg(reservationInfo->GetRoomNumber())      
      .arg(reservationInfo->GetStartDate().toString("yyyy-MM-dd"))
      .arg(reservationInfo->GetEndDate().toString("yyyy-MM-dd"))
      .arg(reservationInfo->GetPaid())
      .arg(reservationInfo->GetDateCreated().toString("yyyy-MM-dd"))
      .arg(numAdditionalGuest)
      .arg(reservationInfo->GetState())
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RoomReservation");
        query.exec();
        if(query.next())  {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

/* To get the reservation associated with a reservation id */
int Db_Mgr::GetThisRoomReservation(DBID roomReservId, Room_Reservation_Base *reservationInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from RoomReservation WHERE roomReservId = %1")
      .arg(roomReservId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
          rec = query.record();
          reservationInfo->SetRoomNumber(rec.value("roomId").toInt());
          reservationInfo->SetStartDate(rec.value("startDate").toDate());
          reservationInfo->SetEndDate(rec.value("endDate").toDate());
          reservationInfo->SetPaid(rec.value("paid").toInt());
          reservationInfo->SetDateCreated(rec.value("dateCreated").toDate());
          reservationInfo->SetState(rec.value("status").toInt());
#ifdef STUB
          QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
          return(0);
      }
    }
    return(-1);
}

/* To modify the room Reservation data */
int Db_Mgr::ModifyRoomReservationInfo(DBID roomReservId, Room_Reservation_Base * reservationInfo)
{
    QSqlQuery query;
      
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("UPDATE RoomReservation SET roomId = %1, startDate = '%2', endDate = '%3', paid = %4, dateCreated = '%5', status = %6 WHERE roomReservId = %7")
      .arg(reservationInfo->GetRoomNumber())      
      .arg(reservationInfo->GetStartDate().toString("yyyy-MM-dd"))
      .arg(reservationInfo->GetEndDate().toString("yyyy-MM-dd"))
      .arg(reservationInfo->GetPaid())
      .arg(reservationInfo->GetDateCreated().toString("yyyy-MM-dd"))      
      .arg(reservationInfo->GetState())
      .arg(roomReservId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)","Updated");
#endif
        return(0);
    }
    return(-1);
}

/* To delete the reservation associated with a reservation id */
int Db_Mgr::DeleteRoomReservation(DBID roomReservId)
{
    QSqlQuery query;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("DELETE FROM RoomReservation WHERE roomReservId = %1")
      .arg(roomReservId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the reservation associated with a room id */
int Db_Mgr::GetAllRoomReservations(DBID roomId, QList<Room_Reservation_Base *>&reservationList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from RoomReservation WHERE roomId = %1")
      .arg(roomId)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Room_Reservation_Base *temp = new Room_Reservation_Base();
          temp->SetRoomNumber(rec.value("roomId").toInt());
          temp->SetStartDate(rec.value("startDate").toDate());
          temp->SetEndDate(rec.value("endDate").toDate());
          temp->SetPaid(rec.value("paid").toInt());
          temp->SetDateCreated(rec.value("dateCreated").toDate());
          temp->SetState(rec.value("status").toInt());
          reservationList.append(temp);
          
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the reservation associated with a room id */
int Db_Mgr::GetAllRoomReservations(DBID roomId, QString status, QList<Room_Reservation_Base *>&reservationList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from RoomReservation WHERE roomId = %1 AND status = '%2'")
      .arg(roomId)
      .arg(status)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Room_Reservation_Base *temp = new Room_Reservation_Base();
          temp->SetRoomNumber(rec.value("roomId").toInt());
          temp->SetStartDate(rec.value("startDate").toDate());
          temp->SetEndDate(rec.value("endDate").toDate());
          temp->SetPaid(rec.value("paid").toInt());
          temp->SetDateCreated(rec.value("dateCreated").toDate());
          temp->SetState(rec.value("status").toInt());;
          reservationList.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the reservation associated with a status */
int Db_Mgr::GetAllRoomReservations(QString status, QList<Room_Reservation_Base *>&reservationList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from RoomReservation WHERE status = '%1'")
      .arg(status)
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Room_Reservation_Base *temp = new Room_Reservation_Base();
          temp->SetRoomNumber(rec.value("roomId").toInt());
          temp->SetStartDate(rec.value("startDate").toDate());
          temp->SetEndDate(rec.value("endDate").toDate());
          temp->SetPaid(rec.value("paid").toInt());
          temp->SetDateCreated(rec.value("dateCreated").toDate());
          temp->SetState(rec.value("status").toInt());;
          reservationList.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the reservation associated with a room id */
int Db_Mgr::GetAllRoomReservations(QDate startDate, QDate endDate, QList<Room_Reservation_Base *>&reservationList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from RoomReservation WHERE startDate = %1 AND endDate = '%2'")
      .arg(startDate.toString("yyyy-MM-dd"))
      .arg(endDate.toString("yyyy-MM-dd"))
      ;
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Room_Reservation_Base *temp = new Room_Reservation_Base();
          temp->SetRoomNumber(rec.value("roomId").toInt());
          temp->SetStartDate(rec.value("startDate").toDate());
          temp->SetEndDate(rec.value("endDate").toDate());
          temp->SetPaid(rec.value("paid").toInt());
          temp->SetDateCreated(rec.value("dateCreated").toDate());
          temp->SetState(rec.value("status").toInt());;
          reservationList.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* To get the reservation associated with a guest */
int Db_Mgr::GetAllGuestReservations(DBID guestId, QString status, QList<Room_Reservation_Base *>&reservationList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    /* Get the GuestId from GuestInfo Table */
    queryStr = QString("SELECT * from RoomReservation WHERE guestId = %1 AND status = '%2'")
      .arg(guestId)
      .arg(status)
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      if(query.next())  {
          rec = query.record();
          Room_Reservation_Base *temp = new Room_Reservation_Base();
          temp->SetRoomNumber(rec.value("roomId").toInt());
          temp->SetStartDate(rec.value("startDate").toDate());
          temp->SetEndDate(rec.value("endDate").toDate());
          temp->SetPaid(rec.value("paid").toInt());
          temp->SetDateCreated(rec.value("dateCreated").toDate());
          temp->SetState(rec.value("status").toInt());;
          reservationList.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
      }
    }
    return(-1);
}

/* ----CreateRoomReservationLogTable---- */
int Db_Mgr::CreateRoomReservationLogTable()
{
  	/* Create CreateRoomReservationLogTable tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RoomReservLog (logId integer primary key AUTO_INCREMENT, roomReservId integer, dateTimeStamp DateTime, message varchar(45))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created RoomReservLog Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddRoomReservationLog(DBID roomReservId, Room_Reservation_Log *logMsg)
{
    QSqlQuery query;
   
    queryStr = QString("INSERT INTO RoomReservLog (roomReservId, dateTimeStamp, message) VALUES (%1, '%2', '%3')")
      .arg(roomReservId)
      .arg(logMsg->GetTimestamp().toString("yyyy-MM-dd hh:mm:ss"))      
      .arg(logMsg->GetMessage())
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RoomReservLog");
        query.exec();
        if(query.next())  {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::GetAllReservationLog(DBID roomReservId, QList<Room_Reservation_Log *>&logList)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * FROM RoomReservLog WHERE roomReservId = %1")
      .arg(roomReservId)
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record(); 
            Room_Reservation_Log *temp = new Room_Reservation_Log();
            temp->SetMessage(rec.value("message").toString());
            temp->SetTimestamp(rec.value("dateTimeStamp").toDateTime());
            logList.append(temp);
#ifdef STUB
            /* I have to add it in the list in the parameter */
            QMessageBox::information( &window, ":-)",rec.value("message").toString());
#endif
        }
        return(0);
    }

    return(-1);    
}

int Db_Mgr::GetAllEmptyRooms(QString roomType, QDate fromDate, QDate toDate, QList<Room_Info_Base *>&list)
{
    QVector<int> roomList;
    
    QSqlRecord rec;
    QSqlQuery query;
    int roomIdCol = 0;
    int roomId;
    
    /* Validate the arguments */
    if(!fromDate.isValid()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)","From Date not valid");
#endif
        return(-1);
    }
    else if(!toDate.isValid()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)","To Date not valid");
#endif
        return(-2);
    }
    
    
    /* First get the room list of given room type from the RoomInfo table */
    if(roomType.toUpper() == "ANY")
        query.prepare("SELECT * FROM RoomInfo");
    else {
        query.prepare("SELECT * FROM RoomInfo WHERE roomType = ?");
        query.bindValue(0, roomType);
    }
    query.exec();

    rec = query.record();    
    roomIdCol = rec.indexOf("roomId");

    if( query.isActive() )
    while (query.next()) {
        roomList.append(query.value(roomIdCol).toInt());
    }

    
    /* For all rooms in the given type check if any is booked */
    QVectorIterator<int> iter(roomList);
    while(iter.hasNext())
    {
        roomId = iter.next();
        if(isRoomBookedForDate(roomId, fromDate, toDate)){
            roomList.remove(roomList.indexOf(roomId));
      }
    }
        
#ifdef STUB
    for(int i = 0; i < roomList.size(); i++)
    {
        QVariant var1(roomList[i]);
        QMessageBox::information( &window, ":-)", var1.toString());
    }
#endif 
    for(int i = 0; i < roomList.size(); i++)
    {
        QVariant var1(roomList[i]);
        Room_Info_Base *temp = new Room_Info_Base();
        temp->SetNumber(var1.toInt());
        list.append(temp);
    }
    
    /* Should return the room List */
	  return(0);
}

bool Db_Mgr::isRoomBookedForDate(int roomId, QDate fromDate, QDate toDate)
{
    QSqlQuery query;

    /* First Round
     * Test fromDate is between any start and end date */
    QVariant v1(fromDate);    
    queryStr = QString("SELECT startDate, endDate FROM RoomReservation WHERE '"+v1.toString()+"' BETWEEN startDate AND endDate AND roomId = %1 ") .arg(roomId);

#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);  
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }


    /* Second Round
     * Test toDate is between any start and end Date */
    QVariant v2(toDate);
    queryStr = QString("SELECT startDate, endDate FROM RoomReservation WHERE '"+v2.toString()+"' BETWEEN startDate AND endDate AND roomId = %1 ") .arg(roomId);
#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);
#endif
      
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }

    
    /* Third round 
     * Test if date is out side the boundary */
#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);
#endif
    queryStr = QString("SELECT startDate, endDate FROM RoomReservation WHERE '" + v1.toString()+"' < startDate AND '" + v2.toString() +  "' > startDate AND roomId = %1 ") .arg(roomId);
    query.prepare(queryStr);             
    query.exec();
    
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }
    return(FALSE);
}

int Db_Mgr::ChangeRoomReservationStatus(DBID roomReservId, QString status)
{
    QSqlQuery query;
    queryStr = QString("UPDATE RoomReservation SET status = '%1' WHERE roomReservId = %2;")
      .arg(status)
      .arg(roomReservId);

#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.exec(queryStr);             
    
    QSqlDatabase::database().commit();
    if( query.isActive()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)", "Changed reservation status");
#endif
    }

    return(0);
}






/* ----CreateRestReservTable---- */
int Db_Mgr::CreateRestReservTable()
{
  	/* Create TableInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RestaurantReservation (restReservId integer primary key AUTO_INCREMENT, restId integer, roomId integer, firstName varchar(25), lastName varchar(25), tableId integer, reservationDate Date, reservationTime Time, numPeople integer, createdDate Date, status varchar(20))");
    q1.exec();
	
#ifdef STUB
    if( q1.isActive() )
        QMessageBox::information( &window, ":-(", "Created RestResev Table");
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif

	  if( q1.isActive() )
        return(0);    
      
    return(-1);
}


int Db_Mgr::GetAllFreeTables(int size, QDate date, QTime time, QList<Tables_Info *>&tablesList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    QVector<int> tableList;
    int tableIdCol = 0;
    int tableId;
    
    /* Validate the arguments */
    if(!date.isValid()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)", "Date not valid");
#endif
        return(-1);
    }
    else if(!time.isValid()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)","Time not valid");
#endif
        return(-2);
    }

    /* First get the room list of given room type from the RoomInfo table */
    query.prepare("SELECT * FROM TableInfo WHERE size >= ?");
    query.bindValue(0, size);
    query.exec();

    rec = query.record();    
    tableIdCol = rec.indexOf("tableId");

    if( query.isActive() )
    while (query.next()) {
        tableList.append(query.value(tableIdCol).toInt());
    }

    /* For all rooms in the given type check if any is booked */
    QVectorIterator<int> iter(tableList);
    while(iter.hasNext())
    {
        tableId = iter.next();
        if(isTableBooked(tableId, date, time)){
            tableList.remove(tableList.indexOf(tableId));
      }
    }
        
#ifdef STUB
    for(int i = 0; i < tableList.size(); i++)
    {
        QVariant var1(tableList[i]);
        QMessageBox::information( &window, ":-)", var1.toString());
    }
#endif 
    for(int i = 0; i < tableList.size(); i++)
    {
        /* Send the table info to called module */
        QVariant var1(tableList[i]);
        Tables_Info *temp = new Tables_Info();
        temp->SetTableNum(var1.toString());
        tablesList.append(temp);
    }

    return(0);
}

bool Db_Mgr::isTableBooked(int tableId, QDate date, QTime time)
{
    QSqlQuery query;
    QTime temp;
    temp = time.addSecs(tableReservWindow*60*60);

    /* First Round
     * Test if table already booked from the given time to the interval val */
    QVariant v1(date);
    QVariant v2(time);
    QVariant v3(temp);
    
    queryStr = QString("SELECT reservationDate, reservationTime FROM RestaurantReservation WHERE reservationDate  = '"+v1.toString()+"'AND reservationTime BETWEEN '"+ v2.toString()+"' and '"+v3.toString()+"' AND tableId = %1 ")
      .arg(tableId)
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);  
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }

    temp = time.addSecs(-(tableReservWindow*60*60));

    v3 = QVariant(temp);
    
    /* Second round
     * Test if table already booked from negative interval val to given time */
    queryStr = QString("SELECT reservationDate, reservationTime FROM RestaurantReservation WHERE '"+v1.toString()+"' = reservationDate AND reservationTime BETWEEN '"+ v3.toString()+"' and '"+v2.toString()+"' AND tableId = %1 ")
      .arg(tableId)
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);  
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }
    
    return(FALSE);
}

DBID Db_Mgr::AddTableReservation(Table_Reservation_Base *tableReservation)
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    int restId = 1;    
   
    queryStr = QString("INSERT INTO RestaurantReservation (restId, roomId, firstName, lastName, tableId, reservationDate, reservationTime, numPeople, status) VALUES (%1, %2, '%3', '%4', %', '%6', '%7', %8, '%9')")
      .arg(restId)
      .arg(tableReservation->GetHotelRoomNo())
      .arg(tableReservation->GetFirstName())
      .arg(tableReservation->GetLastName())
      .arg(tableReservation->GetTableNo())
      .arg(tableReservation->GetDate().toString("yyyy-MM-dd"))
      .arg(tableReservation->GetTime().toString())
      .arg(tableReservation->GetCapacity())      
      //.arg(createdDate.toString("yyyy-MM-dd"))      
      .arg(tableReservation->GetStatus())      
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RestaurantReservation");
        query.exec();
        if(query.next())  {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::RemoveFromTableReservationList(DBID reservId)
{
    QSqlQuery query;
    
     queryStr = QString("DELETE from RestaurantReservation WHERE restReservId = %1")
      .arg(reservId);
    
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      QMessageBox::information( &window, ":-)"," Deleted from RestaurantReservation");
      return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllTableReservations(QString lName, QString fName, QList<Table_Reservation_Base*>&reservList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    queryStr = QString("SELECT * FROM RestaurantReservation WHERE firstName = '%1' AND lastName = '%2'")
      .arg(fName)
      .arg(lName);

    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Table_Reservation_Base *temp = new Table_Reservation_Base();
          
          temp->SetTableNo(rec.value("tableId").toInt());
          temp->SetDate(rec.value("reservationDate").toDate());
          temp->SetTime(rec.value("reservationTime").toTime());
          temp->SetCapacity(rec.value("numPeople").toInt());
          temp->SetFirstName(rec.value("firstName").toString());
          temp->SetLastName(rec.value("lastName").toString());
          temp->SetHotelRoomNo(rec.value("roomId").toInt());
          temp->SetStatus(rec.value("status").toString());
          reservList.append(temp);
      }
      return(0);
    }
     return(-1);
}

int Db_Mgr::GetAllTableReservations(QDate date, QTime time, QList<Table_Reservation_Base*>&reservList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    queryStr = QString("SELECT * FROM RestaurantReservation WHERE reservationDate = '%1' AND reservationTime = '%2'")
      .arg(date.toString("yyyy-MM-dd"))
      .arg(time.toString());

    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Table_Reservation_Base *temp = new Table_Reservation_Base();
          
          temp->SetTableNo(rec.value("tableId").toInt());
          temp->SetDate(rec.value("reservationDate").toDate());
          temp->SetTime(rec.value("reservationTime").toTime());
          temp->SetCapacity(rec.value("numPeople").toInt());
          temp->SetFirstName(rec.value("firstName").toString());
          temp->SetLastName(rec.value("lastName").toString());
          temp->SetHotelRoomNo(rec.value("roomId").toInt());
          temp->SetStatus(rec.value("status").toString());
          reservList.append(temp);
      }
      return(0);
    }
     return(-1);
}

int Db_Mgr::GetAllTableReservations(QList<Table_Reservation_Base*>&reservList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    queryStr = QString("SELECT * FROM RestaurantReservation");

    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      while(query.next())  {
          rec = query.record();
          Table_Reservation_Base *temp = new Table_Reservation_Base();
          
          temp->SetTableNo(rec.value("tableId").toInt());
          temp->SetDate(rec.value("reservationDate").toDate());
          temp->SetTime(rec.value("reservationTime").toTime());
          temp->SetCapacity(rec.value("numPeople").toInt());
          temp->SetFirstName(rec.value("firstName").toString());
          temp->SetLastName(rec.value("lastName").toString());
          temp->SetHotelRoomNo(rec.value("roomId").toInt());
          temp->SetStatus(rec.value("status").toString());
          reservList.append(temp);
      }
      return(0);
    }
     return(-1);
}

/* ----CreateRestWaitlistTable---- */
int Db_Mgr::CreateRestWaitlistTable()
{
  	/* Create CreateRestWaitlistTable tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE RestaurantWaitlist (restWaitlistId integer primary key AUTO_INCREMENT, restId integer, timeCreated Time, numPeople integer, roomId integer, lastName varchar(20), firstName varchar(20))");
    q1.exec();
	
#ifdef STUB
    if( q1.isActive() )
        QMessageBox::information( &window, ":-(", "Created RestaurantWaitlist Table");
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif

	  if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddRestaurantWaitlist(Table_Waitlist_Base *waitlistInfo)
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    int restId = 1;   
      
    queryStr = QString("INSERT INTO RestaurantWaitlist (restId, numPeople,  roomId, lastName, firstName) VALUES (%1, %2, %3, '%4', '%5')")
      .arg(restId)      
      //.arg(timeCreated.toString())
      .arg(waitlistInfo->GetCapacity())
      .arg(waitlistInfo->GetHotelRoomNo())      
      .arg(waitlistInfo->GetLastName())      
      .arg(waitlistInfo->GetFirstName())      
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from RestaurantWaitlist");
        query.exec();
        if(query.next())  {
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::RemoveFromWaitlist(DBID waitlistId)
{
    QSqlQuery query;
    
     queryStr = QString("DELETE from RestaurantWaitlist WHERE restWaitlistId = %1")
      .arg(waitlistId);
    
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      QMessageBox::information( &window, ":-)"," Deleted from Waitlist");
      return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllWaitlist(QList<Table_Waitlist_Base*>&waitList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    queryStr = QString("SELECT * FROM RestaurantWaitlist");

    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();
            Table_Waitlist_Base *temp = new Table_Waitlist_Base();
            temp->SetCapacity(rec.value("numPeople").toInt());
            temp->SetHotelRoomNo(rec.value("roomId").toInt());
            temp->SetLastName(rec.value("lastName").toString());
            temp->SetFirstName(rec.value("firstName").toString());
            waitList.append(temp);
        }
        return(0);
    }
    return(-1);
}


#if 0
int Db_Mgr::GetAllTableReservationByName(QString lName, QString fName)
{
    QSqlQuery query;
    QSqlRecord rec;

    //int restaurantId = 1;    
    int size = 4;

    queryStr = QString("SELECT roomNum FROM RestaurantReservation WHERE ");
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    query.exec(queryStr);
    
    if( query.isActive() ) {
        while (query.next()) {
            rec = query.record();    
            size = rec.value("restaurantType").toInt();
#ifdef STUB
            /* I have to add it in the list in the parameter */
            QMessageBox::information( &window, ":-)","Got table Info");
#endif
        }
        return(0);
    }

    return(-1);    
}
#endif

/* ----CreateFunctionroomReserveTable---- */
int Db_Mgr::CreateFunctionroomReserveTable()
{
  	/* Create CreateFunctionroomReserveTable tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE FunctionRoomReserv (funcRoomReservId integer primary key AUTO_INCREMENT, funcRoomId integer, roomNum integer, reservationDate Date, startTime Time, endTime time, numPeople integer, dateCreated Date, status varchar(20))");
    q1.exec();
	
#ifdef STUB
    if( q1.isActive() )
        QMessageBox::information( &window, ":-(", "Created FunctionRoomReserv Table");
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif

	  if( q1.isActive() )
        return(0);    
      
    return(-1);
}

int Db_Mgr::GetAllFreeFunctionRooms(int capacity, QDate date, QTime fromTime, QTime toTime, QList<Func_Room_Info *> &funcRmList)
{
    QSqlQuery query;
    QSqlRecord rec;
    
    QVector<int> funcRoomList;
    int funcRoomIdCol = 0;
    int funcRoomId;
    
    /* Validate the arguments */
    if(!date.isValid()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)", "Date not valid");
#endif
        return(-1);
    }
    else if(!fromTime.isValid()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)"," From Time not valid");
#endif
        return(-2);
    }
    else if(!toTime.isValid()) {
#ifdef STUB
        QMessageBox::information( &window, ":-)","To Time not valid");
#endif
        return(-2);
    }

    /* First get the room list of given room type from the RoomInfo table */
    query.prepare("SELECT * FROM FuncRoomInfo WHERE capacity >= ?");
    query.bindValue(0, capacity);
    query.exec();

    rec = query.record();    
    funcRoomIdCol = rec.indexOf("funcRoomId");

    if( query.isActive() )
    while (query.next()) {
        funcRoomList.append(query.value(funcRoomIdCol).toInt());
    }

    /* For all rooms in the given type check if any is booked */
    QVectorIterator<int> iter(funcRoomList);
    while(iter.hasNext())
    {
        funcRoomId = iter.next();
        if(isFunctionRoomBooked(funcRoomId, date, fromTime, toTime)){
            funcRoomList.remove(funcRoomList.indexOf(funcRoomId));
      }
    }
        
#ifdef STUB
    for(int i = 0; i < funcRoomList.size(); i++)
    {
        QVariant var1(funcRoomList[i]);
        QMessageBox::information( &window, ":-)", var1.toString());
    }
#endif 
    /* This is not complete Need to send all the information */
    for(int i = 0; i < funcRoomList.size(); i++)
    {
        QVariant var(funcRoomList[i]);
        Func_Room_Info *temp = new Func_Room_Info();
        temp->SetFuncRoomNum(var.toString());
        funcRmList.append(temp);
    }    

    return(0);
}

bool Db_Mgr::isFunctionRoomBooked(int funcRoomId, QDate date, QTime fromTime, QTime toTime)
{
    QSqlQuery query;
    QTime temp;
    

    /* First Round
     * Test if table already booked from the given time to the interval val */
    QVariant v1(date);
    QVariant v2(fromTime);
    
    
    queryStr = QString("SELECT * FROM FunctionRoomReserv WHERE reservationDate  = '"+v1.toString()+"' AND '"+ v2.toString()+"' BETWEEN startTime and endTime AND funcRoomId = %1 ")
      .arg(funcRoomId)
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);  
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }

    
    
    /* Second round
     * Test if table already booked from negative interval val to given time */
    QVariant v3(toTime);
    queryStr = QString("SELECT * FROM FunctionRoomReserv WHERE reservationDate  = '"+v1.toString()+"' AND '"+ v3.toString()+"' BETWEEN startTime and endTime AND funcRoomId = %1 ")
      .arg(funcRoomId)
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);  
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }

    /* Third Round
     * Check for boundary conditions */
    queryStr = QString("SELECT * FROM FunctionRoomReserv WHERE reservationDate  = '"+v1.toString()+"' AND '"+ v2.toString()+"' < startTime and '"+ v3.toString()+"' > startTime AND funcRoomId = %1 ")
      .arg(funcRoomId)
      ;

#ifdef STUB
    QMessageBox::information( &window, ":-)", queryStr);  
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive())
        if (query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)","There is a reservation");
#endif
            return(TRUE);
        }
    
    
    return(FALSE);
}

DBID Db_Mgr::AddFunctionRoomReservation(Function_Room_Base *funcRoomReservation)
{
    QSqlQuery query;
    QDate endTime(10,00,00);
  
    queryStr = QString("INSERT INTO FunctionRoomReserv (funcRoomId, roomNum, reservationDate, startTime, endTime, numPeople, status) VALUES (%1, '%2', '%3', '%4', '%5', '%6')")
      .arg(funcRoomReservation->GetFunctionRoomNo())      
      .arg(funcRoomReservation->GetHotelRoomNo())
      .arg(funcRoomReservation->GetDate().toString("yyyy-MM-dd"))
      .arg(funcRoomReservation->GetTime().toString())      
      .arg(endTime.toString())      
      .arg(funcRoomReservation->GetCapacity())      
      //.arg(dateCreated.toString("yyyy-MM-dd"))      
      .arg(funcRoomReservation->GetStatus())      
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from FunctionRoomReserv");
        query.exec();
        if(query.next())  {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::RemoveFromFuncRoomReservationList(DBID reservId)
{
    QSqlQuery query;
    
     queryStr = QString("DELETE from FunctionRoomReserv WHERE funcRoomReservId = %1")
      .arg(reservId);
    
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      QMessageBox::information( &window, ":-)"," Deleted from FunctionRoomReserv");
      return(0);
    }
    return(-1);
}

#if 0

/* ----CreateTourInfoTable---- */
int Db_Mgr::CreateTourInfoTable()
{
  	/* Create CreateTourInfoTable tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE TourInfo (TourId integer primary key AUTO_INCREMENT, propertyId integer, startDate Date, startTime Time, numDays integer, capacity integer, startLocation varchar(30), expArrivalTime Time,  costPerPerson integer, tourDetails varchar(50), specialNotes varchar(25))");
    q1.exec();   

#ifdef STUB
    
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created TourInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddTourInfo(Tour_Info_Base *tourInfo)
{
    QSqlQuery query;
    int numDays = 1;
    QString startLocation = "Hotel";
    
    queryStr = QString("INSERT INTO TourInfo (propertyId, startDate, startTime, numDays, capacity, startLocation, expArrivalTime, costPerPerson, tourDetails) VALUES (%1, '%2', '%3', %4, %5, '%6','%7', %8, '%9')")
      .arg(propertyId)
      .arg(tourInfo->GetDate().toString("yyyy-MM-dd"))             
      .arg(tourInfo->GetStartTime().toString())             
      .arg(numDays)             
      .arg(tourInfo->GetTotalCapacity())             
      .arg(startLocation)             
      .arg(tourInfo->GetArrivalTime().toString())             
      .arg(tourInfo->GetCost())             
      .arg(tourInfo->GetTourDetails())             
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from TourInfo");
        query.exec();
        if(query.next()) {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::RemoveFromTourInfo(DBID reservId)
{
    QSqlQuery query;
    
     queryStr = QString("DELETE from TourInfo WHERE TourId = %1")
      .arg(reservId);
    
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      QMessageBox::information( &window, ":-)"," Deleted from TourInfo");
      return(0);
    }
    return(-1);
}

/* ----CreateTourReservationTable---- */
int Db_Mgr::CreateTourReservationTable()
{
  	/* Create TourReservation tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE TourReservation (tourReservId integer primary key AUTO_INCREMENT, tourId integer, reservDate Date, numPeople integer, dateCreated Date, status varchar(20))");
    q1.exec();   

#ifdef STUB
    
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created TourReservation Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddTourReservation()//Tour_Reserv *
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    int tourId = 1;
    QDate reservDate(2006,04,23);
    int numPeople = 2;
    QDate dateCreated(2006,04,23);
    QString status = "Reserved";

    
    queryStr = QString("INSERT INTO TourReservation (tourId, reservDate, numPeople, dateCreated, status) VALUES (%1, '%2', %3, '%4', '%5')")
      .arg(tourId)
      .arg(reservDate.toString("yyyy-MM-dd"))             
      .arg(numPeople)             
      .arg(dateCreated.toString("yyyy-MM-dd"))             
      .arg(status)             
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from TourReservation");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::RemoveFromTourReservation(DBID tourReservId)
{
    QSqlQuery query;
    
     queryStr = QString("DELETE from TourReservation WHERE tourReservId = %1")
      .arg(tourReservId);
    
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
      QMessageBox::information( &window, ":-)"," Deleted from TourReservation");
      return(0);
    }
    return(-1);
}

#endif



#if 0

/* ----CreateUserInfoTable---- */
int Db_Mgr::CreateUserInfoTable()
{
  	/* Create CreateUserInfoTable tables */
    QSqlQuery q1;

    q1.prepare("CREATE TABLE UserInfo (userId integer primary key AUTO_INCREMENT, propertyId integer, firstName varchar(30), lastName varchar(30), addr varchar(30), city varchar(20), state varchar(2), country varchar(2), zipCode integer, PhNum varchar(20), email varchar(30), ssn varchar(10), department varchar(20), accessRights varchar(10), username varchar(35), password varchar(20), responsibilities varchar(30), specialNotes varchar(30))");
    q1.exec();   

#ifdef STUB
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created UserInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text());
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}


DBID Db_Mgr::AddUserInfo(security_emp_details_base *userInfo)
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    QString phNum = "978-945-0300";
    QString ssn = "988-54678";
    QString userName = "ss";
    
  
    queryStr = QString("INSERT INTO UserInfo (propertyId, firstName, lastName, addr, city, state, country, zipCode, phNum, email, ssn, department, accessRights, username, password, responsibilities) VALUES (%1, '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', '%10', '%11', '%12', '%13', '%14', '%15', '%16')")
      .arg(propertyId)
      .arg(userInfo->GetFirstName())
      .arg(userInfo->GetLastName())
      .arg(userInfo->GetAddress())
      .arg(userInfo->GetCity())
      .arg(userInfo->GetState())
      .arg(userInfo->GetCountry())
      .arg(userInfo->GetZipCode())
      .arg(phNum)
      .arg(userInfo->GetEmail())      
      .arg(ssn)      
      .arg(userInfo->GetDepartment())      
      .arg(userInfo->GetAccessLevel())      
      .arg(userName)      
      .arg(userInfo->GetDefaultPassWord())      
      .arg(userInfo->GetDesignation())      
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from UserInfo");
        query.exec();
        if(query.next())  {            
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

/* ----GetUserId----- */
DBID Db_Mgr::GetUserId(QString userName)
{
    QSqlQuery query;
    int userId = -1;

    query.prepare("SELECT userId from UserInfo WHERE userName = '"+userName+"'");
    query.exec();
    if( query.isActive()) {
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            userId = query.value(0).toInt();
        }
    }

    return(userId);    
}

/* ----GetUserId----- */
QString Db_Mgr::GetUserPw(DBID userId)
{
    QSqlQuery query;
    QString pw = NULL;

    query.prepare("SELECT password from UserInfo WHERE userId = ?");
    query.bindValue(0, userId);
    query.exec();
    if( query.isActive()) {
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            pw = query.value(0).toString();
        }
    }

    return(pw);    
}

/* ----GetUserId----- */
int Db_Mgr::ChangeUserPw(DBID userId, QString newPw)
{
    QSqlQuery query;
    QString pw = NULL;

    queryStr = QString("UPDATE UserInfo SET password = '%1' WHERE userId = %2")
                .arg(newPw)
                .arg(userId);
      
    query.exec(queryStr);
    QMessageBox::information( &window, ":-)",queryStr);

    if( query.isActive()) {
        QMessageBox::information( &window, ":-)","Update successful");
        return(0);
    }

    return(-1);    
}

int Db_Mgr::GetUsersByName(QString lastName, QString firstName, QList<security_emp_details_base *>&userInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
     
    queryStr = QString("SELECT * from UserInfo WHERE lastName = %1 AND firstName = %2")
      .arg(lastName)
      .arg(firstName)
      ;
    
    query.exec(queryStr);
    if( query.isActive()) 
        while(query.next()) {
            rec = query.record();
            security_emp_details_base *temp = new security_emp_details_base();
            temp->SetLastName(rec.value("lastName").toString());
            temp->SetFirstName(rec.value("firstname").toString());
            temp->SetAddress(rec.value("addr").toString());
            temp->SetCity(rec.value("city").toString());
            temp->SetState(rec.value("state").toString());
            temp->SetCountry(rec.value("country").toString());
            temp->SetZipCode(rec.value("zipCode").toString());
            temp->SetEmail(rec.value("email").toString());
            temp->SetDepartment(rec.value("department").toString());
            temp->SetAccessLevel(rec.value("accessRights").toString());
            temp->SetDefaultPassWord(rec.value("password").toString());
            temp->SetDesignation(rec.value("responsibilities").toString());
            userInfo.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("firstName").toString());
#endif
            return(0);
        }
    return(-1);
}

int Db_Mgr::GetUsersByDept(QString deptName, QList<security_emp_details_base *>&userInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
     
    queryStr = QString("SELECT * from UserInfo WHERE department = %1")
      .arg(deptName)
      ;
    
    query.exec(queryStr);
    if( query.isActive()) 
        while(query.next()) {
            rec = query.record();    
            security_emp_details_base *temp = new security_emp_details_base();
            temp->SetLastName(rec.value("lastName").toString());
            temp->SetFirstName(rec.value("firstname").toString());
            temp->SetAddress(rec.value("addr").toString());
            temp->SetCity(rec.value("city").toString());
            temp->SetState(rec.value("state").toString());
            temp->SetCountry(rec.value("country").toString());
            temp->SetZipCode(rec.value("zipCode").toString());
            temp->SetEmail(rec.value("email").toString());
            temp->SetDepartment(rec.value("department").toString());
            temp->SetAccessLevel(rec.value("accessRights").toString());
            temp->SetDefaultPassWord(rec.value("password").toString());
            temp->SetDesignation(rec.value("responsibilities").toString());
            userInfo.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("firstName").toString());
#endif
            return(0);
        }
    return(-1);
}

int Db_Mgr::GetUsersById(int empId, QList<security_emp_details_base *>&userInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
     
    queryStr = QString("SELECT * from UserInfo WHERE userId = %1")
      .arg(empId)
      ;
    
    query.exec(queryStr);
    if( query.isActive()) 
        while(query.next()) {
            rec = query.record();    
            security_emp_details_base *temp = new security_emp_details_base();
            temp->SetLastName(rec.value("lastName").toString());
            temp->SetFirstName(rec.value("firstname").toString());
            temp->SetAddress(rec.value("addr").toString());
            temp->SetCity(rec.value("city").toString());
            temp->SetState(rec.value("state").toString());
            temp->SetCountry(rec.value("country").toString());
            temp->SetZipCode(rec.value("zipCode").toString());
            temp->SetEmail(rec.value("email").toString());
            temp->SetDepartment(rec.value("department").toString());
            temp->SetAccessLevel(rec.value("accessRights").toString());
            temp->SetDefaultPassWord(rec.value("password").toString());
            temp->SetDesignation(rec.value("responsibilities").toString());
            userInfo.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("firstName").toString());
#endif
            return(0);
        }
    return(-1);
}

int Db_Mgr::GetAllUsers(QList<security_emp_details_base *>&userInfo)
{
    QSqlQuery query;
    QSqlRecord rec;
     
    queryStr = QString("SELECT * from UserInfo");
    
    query.exec(queryStr);
    if( query.isActive()) 
        while(query.next()) {
            rec = query.record();    
            security_emp_details_base *temp = new security_emp_details_base();
            temp->SetLastName(rec.value("lastName").toString());
            temp->SetFirstName(rec.value("firstname").toString());
            temp->SetAddress(rec.value("addr").toString());
            temp->SetCity(rec.value("city").toString());
            temp->SetState(rec.value("state").toString());
            temp->SetCountry(rec.value("country").toString());
            temp->SetZipCode(rec.value("zipCode").toString());
            temp->SetEmail(rec.value("email").toString());
            temp->SetDepartment(rec.value("department").toString());
            temp->SetAccessLevel(rec.value("accessRights").toString());
            temp->SetDefaultPassWord(rec.value("password").toString());
            temp->SetDesignation(rec.value("responsibilities").toString());
            userInfo.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("firstName").toString());
#endif
            return(0);
        }
    return(-1);
}

/* ----CreateServiceInfoTable---- */
int Db_Mgr::CreateServiceInfoTable()
{
  	/* Create ServiceInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE ServiceInfo (serviceId integer primary key AUTO_INCREMENT, serviceName varchar(20), description varchar(45), serviceRate integer)");
    q1.exec();   
    
#ifdef STUB
    if( q1.isActive() )
        QMessageBox::information( &window, ":-)","Created ServiceInfo Table" );
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}


DBID Db_Mgr::AddServiceInfo()//Service_Info *
{
    QSqlQuery query;
      
    /* This list should be initialised with the parameters value */
    QString serviceName = "Change BedSheet";
    QString description = "+Clean Room";
    int serviceRate = 0;
    
      
    queryStr = QString("INSERT INTO ServiceInfo (serviceName,  description, serviceRate) VALUES ('%1', '%2', %3)")
      .arg(serviceName)
      .arg(description)             
      .arg(serviceRate)       
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from ServiceInfo");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::GetAllServices()//Service_Info *
{
    QSqlQuery query;
      
    /* This list should be initialised with the parameters value */
    QString serviceName = "Change BedSheet";
    QString description = "+Clean Room";
    //int serviceRate = 0;

    query.exec("SELECT * from ServiceInfo");
    if( query.isActive()) 
        if(query.next()) {
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(0);
        }
    return(-1);
}

DBID Db_Mgr::GetServiceId(QString serviceName)//Service_Request &
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT serviceId from ServiceInfo WHERE serviceName = %1")
      .arg(serviceName)
      ;

    query.exec(queryStr);
    if( query.isActive()) 
        if(query.next()) {
            rec = query.record();    
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("serviceId").toString());
#endif
            return(rec.value("serviceId").toInt());
        }
    return(-1);
}


/* ----CreateServiceRequestTable---- */
int Db_Mgr::CreateServiceRequestTable()
{
  	/* Create ServiceInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE ServiceRequest (serviceReqId integer primary key AUTO_INCREMENT, serviceId integer, inchargeFName varchar(20), inchargeLName varchar(20), requestTime Time, comments varchar(30), status varchar(20), roomNum integer)");
    q1.exec();   
    
#ifdef STUB
    if( q1.isActive() )
        QMessageBox::information( &window, ":-)","Created ServiceRequest Table" );
    else
        QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddServiceRequest(service_maint_base *maintRequest)
{
    QSqlQuery query;
       
    /* This list should be initialised with the parameters value */
    int serviceId = 1;
    QString status = "Requested";
      
    queryStr = QString("INSERT INTO ServiceRequest (serviceId,  inchargeFName, inchargeLName, requestTime, comments, status, roomNum) VALUES (%1, '%2', '%3', '%4', '%5', '%6', %7)")
      .arg(serviceId)
      .arg(maintRequest->GetFirstName())             
      .arg(maintRequest->GetLastName())       
      .arg(maintRequest->GetTime())//.toString())       
      .arg(maintRequest->GetComments())       
      .arg(status)       
      .arg(maintRequest->GetRoomNo())       
      ;
#ifdef STUB
    QMessageBox::information( &window, ":-)",queryStr);
#endif
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from ServiceRequest");
        query.exec();
        if(query.next()) { 
#ifdef STUB
            QMessageBox::information( &window, ":-)",query.value(0).toString());
#endif
            return(query.value(0).toInt());
        }
    }
    return(0);
}

int Db_Mgr::GetAllServiceRequests(QList<service_maint_base *>&serviceReqList)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * from ServiceRequest");
    query.exec(queryStr);
    if( query.isActive()) {
        while(query.next()) {
            rec = query.record();
            service_maint_base *temp = new service_maint_base();
            temp->SetLastName(rec.value("inchargeLName").toString());
            temp->SetFirstName(rec.value("inchargeFName").toString());
            temp->SetRoomNo(rec.value("roomNum").toString());
            temp->SetComments(rec.value("comments").toString());
            //temp->SetRequest(rec.value("inchargeLName").toString());
            temp->SetTime(rec.value("requestTime").toString());
            serviceReqList.append(temp);
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("inchargeFName").toString());
#endif
        }
        return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllServiceRequestsByRoom(int roomId, QList<service_maint_base *>&serviceReqList)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * from ServiceRequest WHERE roomNum = %1")
      .arg(roomId)
      ;

    query.exec(queryStr);
    if( query.isActive()) {
        while(query.next()) {
            rec = query.record();
            service_maint_base *temp = new service_maint_base();
            temp->SetLastName(rec.value("inchargeLName").toString());
            temp->SetFirstName(rec.value("inchargeFName").toString());
            temp->SetRoomNo(rec.value("roomNum").toString());
            temp->SetComments(rec.value("comments").toString());
            //temp->SetRequest(rec.value("inchargeLName").toString());
            temp->SetTime(rec.value("requestTime").toString());
            serviceReqList.append(temp);    
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("inchargeFName").toString());
#endif
        }
        return(0);
    }
    return(-1);
}

int Db_Mgr::GetAllServiceRequests(int serviceId, QList<service_maint_base *>&serviceReqList)
{
    QSqlQuery query;
    QSqlRecord rec;

    queryStr = QString("SELECT * from ServiceRequest WHERE serviceId = %1")
      .arg(serviceId)
      ;

    query.exec(queryStr);
    if( query.isActive()) {
        while(query.next()) {
            rec = query.record();  
            service_maint_base *temp = new service_maint_base();
            temp->SetLastName(rec.value("inchargeLName").toString());
            temp->SetFirstName(rec.value("inchargeFName").toString());
            temp->SetRoomNo(rec.value("roomNum").toString());
            temp->SetComments(rec.value("comments").toString());
            //temp->SetRequest(rec.value("inchargeLName").toString());
            temp->SetTime(rec.value("requestTime").toString());
            serviceReqList.append(temp); 
#ifdef STUB
            QMessageBox::information( &window, ":-)",rec.value("inchargeFName").toString());
#endif
        }
        return(0);
    }
    return(-1);
}
#endif

/* ----CreateGolfReservationTable---- */
int Db_Mgr::CreateGolfReservationTable()
{
  	/* Create GolfReservation tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE GolfReservation (golfReservId integer primary key AUTO_INCREMENT, golfId integer, roomId integer, firstName varchar(30), lastName varchar(30), reservDate Date, reservTime Time, numPeople integer, dateCreated Date, status varchar(20))");
    q1.exec();   

#ifdef STUB
    
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created GolfReservation Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddGolfReservation()//Golf_Reserv *
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    int golfId = 1;
    int roomId = 1;
    QString firstName = "ss";
    QString lastName = "nn";
    QDate reservDate(2006,04,23);
    QTime reservTime(9,00,00);
    int numPeople = 2;
    QDate dateCreated(2006,04,23);
    QString status = "Reserved";

    
    queryStr = QString("INSERT INTO GolfReservation (golfId, roomId, firstName, lastName, reservDate, reservTime, numPeople, dateCreated, status) VALUES (%1, %2, '%3', '%4', '%5', '%6', %7, '%8', '%9')")
      .arg(golfId)
      .arg(roomId)
      .arg(firstName)
      .arg(lastName)
      .arg(reservDate.toString("yyyy-MM-dd"))             
      .arg(reservTime.toString())             
      .arg(numPeople)             
      .arg(dateCreated.toString("yyyy-MM-dd"))             
      .arg(status)             
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from GolfReservation");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}

/* ----CreateGiftCertInfoTable---- */
int Db_Mgr::CreateGiftCertInfoTable()
{
  	/* Create GiftCertInfo tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE GiftCertInfo (giftCertId integer primary key AUTO_INCREMENT, certNum integer, sponsor varchar(30), amount integer, validFrom Date, validTill Date, notes varchar(20))");
    q1.exec();   

#ifdef STUB
    
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created GiftCertInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif
    if( q1.isActive() )
        return(0);    
      
    return(-1);
}

DBID Db_Mgr::AddGiftCert()//Golf_Reserv *
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    int certNum = 1;
    QString sponsor = "nn";
    int amount = 20;
    QDate validFrom(2006,04,23);
    QDate validTill(2006,06,23);
    QString notes = "Onetime";

    
    queryStr = QString("INSERT INTO GiftCertInfo (certNum, sponsor, amount, validFrom, validTill, notes) VALUES (%1, '%2', %3, '%4', '%5', '%6')")
      .arg(certNum)
      .arg(sponsor)
      .arg(amount)
      .arg(validFrom.toString("yyyy-MM-dd"))             
      .arg(validTill.toString("yyyy-MM-dd"))             
      .arg(notes)             
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from GiftCertInfo");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}


/* ----CreateShuttleInfoTable---- */
int Db_Mgr::CreateShuttleInfoTable()
{
  	/* Create CreateShuttleInfoTable tables */
    QSqlQuery q1;
    
    q1.prepare("CREATE TABLE ShuttleInfo (shuttleId integer primary key AUTO_INCREMENT, propertyId integer, capacity integer, startLocation varchar(30), destination varchar(30), startTime Time, destTime Time, onDate Date, specialNotes varchar(25))");
    q1.exec();   
    
#ifdef STUB
    
    if( q1.isActive() )
      QMessageBox::information( &window, ":-)","Created ShuttleInfo Table" );
    else
      QMessageBox::information( &window, ":-(", q1.lastError().text() );
#endif

    if( q1.isActive() )
        return(0);    
      
    return(-1);
}


DBID Db_Mgr::AddShuttleInfo()//Shuttle_Info *
{
    QSqlQuery query;
    
    /* This list should be initialised with the parameters value */
    int propertyId = 1;
    int capacity = 4;
    QString startLocation = "Lowell";
    QString destination = "Airport";
    QTime startTime(12,40,00);
    QTime destTime(13,00,00);
    QDate onDate(2006,04,23);
    
    queryStr = QString("INSERT INTO ShuttleInfo (propertyId, capacity, startLocation, destination, startTime, destTime, onDate) VALUES (%1, %2, '%3', '%4', '%5', '%6','%7')")
      .arg(propertyId)
      .arg(capacity)             
      .arg(startLocation)             
      .arg(destination)             
      .arg(startTime.toString())             
      .arg(destTime.toString())             
      .arg(onDate.toString("yyyy-MM-dd"))             
      ;
    QMessageBox::information( &window, ":-)",queryStr);
    
    query.prepare(queryStr);             
    query.exec();
    if( query.isActive()) {
        query.prepare("SELECT LAST_INSERT_ID() from ShuttleInfo");
        query.exec();
        if(query.next()) {            
            QMessageBox::information( &window, ":-)",query.value(0).toString());
            return(query.value(0).toInt());
        }
    }
    return(0);
}


