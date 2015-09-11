/*--------------- table_Reservation.cpp ---------------*/
/*
BY:     Prasoonadevi Thippana
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - Table Reservation

*/

#include "table_Reservation.h"


    Table_Reservation::Table_Reservation()
    {
        ui.setupUi(this);

        //Table avaliablity tab
        ui.tblTableAvailability->clear();
        QStringList lblheaders;
        lblheaders << "Table #" << "Capacity" << "Date" << "Time"<<"Status";

        ui.tblTableAvailability->setHorizontalHeaderLabels(lblheaders);

        connect(ui.pbSearchTableAvail, SIGNAL(clicked()), this, SLOT(SearchTableOpen()));

        connect(ui.pbClearTableAvail, SIGNAL(clicked()), this, SLOT(ClearTableOpen()));

        connect(ui.pbReserve, SIGNAL(clicked()), this, SLOT(ReserveTable()));

        connect(ui.pbAddWaitlist, SIGNAL(clicked()), this, SLOT(AddWaitList()));
        
       //Reservation list tab
       
       connect(ui.pbReserveSearch, SIGNAL(clicked()), this, SLOT(ReserveSearch()));
       connect(ui.pbReserveSearchClear, SIGNAL(clicked()), this, SLOT(ReserveSearchClear()));
       connect(ui.pbClearTable, SIGNAL(clicked()), this, SLOT(ClearReserveTable()));
       
       //Wail list tab
       
        connect(ui.pbDelWaitlist, SIGNAL(clicked()), this, SLOT(DeleteWaitList()));
        connect(ui.tabReserve, SIGNAL(currentChanged(int)), this, SLOT(GetWaitList()));



    }


void Table_Reservation::SearchTableOpen()
    {

     //   QMessageBox::critical(this, "You are in Search Table",
     //               "Search date: " + ui.dtSearchDate->text()) ;
        

        
        ui.tblTableAvailability->clear();
        //ui.tblTableAvailability->setRowCount(10);
        ui.tblTableAvailability->setColumnCount(5);
     
        QStringList lblheaders;
        lblheaders << "Table #" << "Capacity" << "Date" << "Time"<<"Status";

        ui.tblTableAvailability->setHorizontalHeaderLabels(lblheaders);
        
 //Get All Free Tables send the date, time and capacity
       // QVector<> tablelist;
       //Db_Mgr   db;
       //DB Function : tablelist Db_Mgr::GetAllFreeTables(int size, QDate date, QTime time)
       //tablelist = db.GetAllFreeTables(ui.lnCapacity->text().toInt(&ok,10), ui.dtSearchDate->date(), ui.tmSearchTime->time())
/*---------Comment out ----------
       QVectorIterator<int> iter(tableList);
       int i = 0;
       while(iter.hasNext())
       {
            tableId = iter.next();

            ui.tblTableAvailability->insertRow(i);

	    QTableWidgetItem *TableNo = new QTableWidgetItem(tr("%1").arg((i+1)*(1+1)));
            ui.tblTableAvailability->setItem(i, 0, TableNo);
	    TableNo->setText(QString("%1").arg(tableId));

	    QTableWidgetItem *Capacity = new QTableWidgetItem(tr("%1").arg((i+1)*(2+1)));
            Capacity->setText( ui.lnCapacity->text());
	    ui.tblTableAvailability->setItem(i, 1, Capacity);
	    
	    QTableWidgetItem *Date = new QTableWidgetItem(tr("%1").arg((i+1)*(3+1)));
            Date->setText(ui.dtSearchDate->text());
            ui.tblTableAvailability->setItem(i, 2, Date);

	    QTableWidgetItem *Time = new QTableWidgetItem(tr("%1").arg((i+1)*(4+1)));
            Time->setText(ui.tmSearchTime->text());
            ui.tblTableAvailability->setItem(i, 3, Time);

	    QTableWidgetItem *Status = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            Status->setText("Open");
            ui.tblTableAvailability->setItem(i, 4, Status);
	

           
       }
    
-------------------Remove Commented portion later -----------*/
       

        int i ;
        for ( i = 0 ; i < 10 ; i++) 
        {
            ui.tblTableAvailability->insertRow(i);

	    QTableWidgetItem *TableNo = new QTableWidgetItem(tr("%1").arg((i+1)*(1+1)));
            ui.tblTableAvailability->setItem(i, 0, TableNo);
	    TableNo->setText("1");

	    QTableWidgetItem *Capacity = new QTableWidgetItem(tr("%1").arg((i+1)*(2+1)));
            Capacity->setText( "4");
	    ui.tblTableAvailability->setItem(i, 1, Capacity);
	    
	    QTableWidgetItem *Date = new QTableWidgetItem(tr("%1").arg((i+1)*(3+1)));
            Date->setText("04/20/2006");
            ui.tblTableAvailability->setItem(i, 2, Date);

	    QTableWidgetItem *Time = new QTableWidgetItem(tr("%1").arg((i+1)*(4+1)));
            Time->setText("02:00pm");
            ui.tblTableAvailability->setItem(i, 3, Time);

	    QTableWidgetItem *Status = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            Status->setText("Open");
            ui.tblTableAvailability->setItem(i, 4, Status);
	

        }        


                

    }

    void Table_Reservation::ClearTableOpen()
    {

           ui.lnCapacity->setText("0");
           ui.dtSearchDate->setDate(QDate::currentDate());
           ui.tmSearchTime->setTime(QTime::currentTime());
           
           ui.tblTableAvailability->clear();
           QStringList lblheaders;
           lblheaders << "Table #" << "Capacity" << "Date" << "Time"<<"Status";
           ui.tblTableAvailability->setHorizontalHeaderLabels(lblheaders);

           
    }

    void Table_Reservation::ReserveTable()
    {
        int reserveRow;
        int i;          //Counter for column
        QStringList reserveData;
        QString     tempStr;

        QMessageBox::critical(this, "You are in Search Table",
                    "Reserve Table") ;
        
        //Get row number for the higlighted row
        reserveRow = ui.tblTableAvailability->currentRow();
        
        //Get the column data into a String list        
        for ( i = 0; i < 5 ;i++)
        {
           tempStr = ui.tblTableAvailability->item(reserveRow,i)->text();
	  
           reserveData <<tempStr;
        }
        
        //reserve is instance of FormReserveDialog
        //Set the type of Dialog, setFields with freetable information
        //Enablefields 
        //

        reserve.SetType("Reserve");
        reserve.SetFields(reserveData);
        reserve.EnableFields();
       // reserve.SetWindowModality(Qt::WindowModal);
        reserve.show();

           
    }

    void Table_Reservation::AddWaitList()
    {
        QStringList reserveData;

        reserve.SetType("Waitlist");
        reserve.SetFields(reserveData);
        reserve.EnableFields();
        //reserve.SetWindowModality(Qt::WindowModal);
	    reserve.show();

           
    }


void Table_Reservation::ReserveSearch()
    {

        
        
        ui.tblReserve->clear();
        ui.tblReserve->setColumnCount(8);
     
        QStringList lblheaders;
        lblheaders << "Table #" << "Capacity" << "Date" << "Time"<<"First Name"<<"Last Name"<<"Hotel Room#"<<"Bill Amount";

        ui.tblReserve->setHorizontalHeaderLabels(lblheaders);


        //bool ok;


       //Get All Reserved tables for the search criteria
       // QVector<RestaurantReserve> RestaurantReservationList;
       //Db_Mgr   db;
       //int DBFindTableReservations(QString restaurantName, int roomNum, QString custFirstName, QString custLastName, RestautantReservationList &);

/*---------Comment out ----------
       QVectorIterator<int> iter(RestaurantReservationList);
       int i = 0;
       while(iter.hasNext())
       {
            tableId = iter.next();

            ui.tblReserve->insertRow(i);

	    QTableWidgetItem *TableNo = new QTableWidgetItem(tr("%1").arg((i+1)*(1+1)));
            ui.tblReserve->setItem(i, 0, TableNo);
	    TableNo->setText(tableId->toString());

	    QTableWidgetItem *Capacity = new QTableWidgetItem(tr("%1").arg((i+1)*(2+1)));
            Capacity->setText( ui.lnCapacity->text());
	    ui.tblReserve->setItem(i, 1, Capacity);
	    
	    QTableWidgetItem *Date = new QTableWidgetItem(tr("%1").arg((i+1)*(3+1)));
            Date->setText(ui.dtSearchDate->text());
            ui.tblReserve->setItem(i, 2, Date);

	    QTableWidgetItem *Time = new QTableWidgetItem(tr("%1").arg((i+1)*(4+1)));
            Time->setText(ui.tmSearchTime->text());
            ui.tblReserve->setItem(i, 3, Time);

	    QTableWidgetItem *FirstName = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            FirstName->setText("John");
            ui.tblReserve->setItem(i, 4, FirstName);
	
	    QTableWidgetItem *LastName = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            LastName->setText("Smith");
            ui.tblReserve->setItem(i, 5, LastName);
	
	    QTableWidgetItem *RoomNo = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            RoomNo->setText("101");
            ui.tblReserve->setItem(i, 6, RoomNo);
            
       QTableWidgetItem *BillAmount = new QTableWidgetItem(tr("%1").arg((i+1)*(6+1)));
            BillAmount->setText("101.00");
            ui.tblReserve->setItem(i, 7, BillAmount);

       }
    
-------------------Remove Commented portion later -----------*/

        int i =0 ;

        //for ( i = 0 ; i < 1 ; i++) 
        //{
            ui.tblReserve->insertRow(i);

	    QTableWidgetItem *TableNo = new QTableWidgetItem(tr("%1").arg((i+1)*(1+1)));
            ui.tblReserve->setItem(i, 0, TableNo);
	    TableNo->setText(QString("%1").arg(i));

	    QTableWidgetItem *Capacity = new QTableWidgetItem(tr("%1").arg((i+1)*(2+1)));
            Capacity->setText( ui.lnCapacity->text());
	    ui.tblReserve->setItem(i, 1, Capacity);
	    
	    QTableWidgetItem *Date = new QTableWidgetItem(tr("%1").arg((i+1)*(3+1)));
            Date->setText(ui.dtSearchDate->text());
            ui.tblReserve->setItem(i, 2, Date);

	    QTableWidgetItem *Time = new QTableWidgetItem(tr("%1").arg((i+1)*(4+1)));
            Time->setText(ui.tmSearchTime->text());
            ui.tblReserve->setItem(i, 3, Time);

	    QTableWidgetItem *FirstName = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            FirstName->setText("John");
            ui.tblReserve->setItem(i, 4, FirstName);
	
	    QTableWidgetItem *LastName = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            LastName->setText("Smith");
            ui.tblReserve->setItem(i, 5, LastName);
	
	    QTableWidgetItem *RoomNo = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            RoomNo->setText("101");
            ui.tblReserve->setItem(i, 6, RoomNo);

	

        //}        
    }  /* End of Function */

  
