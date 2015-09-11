/*--------------- function_room.cpp ---------------*/
/*
BY:     Prasoonadevi Thippana
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - Function Room 

*/

#include "function_room.h"

Function_Room::Function_Room()
    {
        ui.setupUi(this);


        ui.tblFuncRoomAvail->clear();
        QStringList lblheaders;
        lblheaders << "Function Room #" << "Date" << "Time"<<"Capacity"<<"Status"<<"Bill Amount" ;
      
        ui.tblFuncRoomAvail->setHorizontalHeaderLabels(lblheaders);

        connect(ui.pbFuncRoomSearch, SIGNAL(clicked()), this, SLOT(FunctionRoomSearch()));
        
        connect(ui.pbFuncRoomReserve, SIGNAL(clicked()), this, SLOT(FunctionRoomReserve()));
       
       //Reserved List Tab widget
        ui.tblReserveList->clear();
        QStringList ReserveListlbheaders;
        ReserveListlbheaders << "Function Room #" << "Capacity"<<"Date" << "Time"<<"First Name "<<"Last Name"<<"HotelRoom #"<<"Bill Amount" ;
        
        ui.tblReserveList->setHorizontalHeaderLabels(ReserveListlbheaders);
       
        connect(ui.pbRLsearch, SIGNAL(clicked()), this, SLOT(ReservedListSearch()));
        
        connect(ui.pbRLclear, SIGNAL(clicked()), this, SLOT(ReservedListClear()));
        
    }
    
    
    
void Function_Room::FunctionRoomSearch()
    {

        //QMessageBox::critical(this, "You are in Search Table",
                  //  "Search date: " + ui.dtSearchDate->text()) ;
                  
        ui.tblFuncRoomAvail->clear();
        ui.tblFuncRoomAvail->setColumnCount(6);           
     
        QStringList lblheaders;
        lblheaders << "Function Room #" << "Date" << "Time"<<"Capacity"<<"Status"<<"Bill Amount" ;

        ui.tblFuncRoomAvail->setHorizontalHeaderLabels(lblheaders);
        
        
        int i ;
        
        for ( i = 0 ; i < 10 ; i++) 
        {
            ui.tblFuncRoomAvail->insertRow(i);

	    QTableWidgetItem *FunctionRoomNo = new QTableWidgetItem(tr("%1").arg((i+1)*(1+1)));
            ui.tblFuncRoomAvail->setItem(i, 0,FunctionRoomNo );
	        FunctionRoomNo->setText("1");
	    
	    QTableWidgetItem *Date = new QTableWidgetItem(tr("%1").arg((i+1)*(2+1)));
            Date->setText("04/20/2006");
            ui.tblFuncRoomAvail->setItem(i, 1, Date);
            
        QTableWidgetItem *Time = new QTableWidgetItem(tr("%1").arg((i+1)*(3+1)));
            Time->setText("02:00pm");
            ui.tblFuncRoomAvail->setItem(i, 2, Time);    

	    QTableWidgetItem *Capacity = new QTableWidgetItem(tr("%1").arg((i+1)*(4+1)));
            Capacity->setText( "4");
	        ui.tblFuncRoomAvail->setItem(i, 3, Capacity);
	    
	    
	    QTableWidgetItem *Status = new QTableWidgetItem(tr("%1").arg((i+1)*(5+1)));
            Status->setText("Open");
            ui.tblFuncRoomAvail->setItem(i, 4, Status);
            
        QTableWidgetItem *Billamount = new QTableWidgetItem(tr("%1").arg((i+1)*(6+1)));
            Billamount->setText("120.00");
            ui.tblFuncRoomAvail->setItem(i, 5, Billamount);
	

        }        

    }
 
    void Function_Room::FunctionRoomClear()
    {

      /* ui.lnCapacity->setText("0");
       ui.dtSearchDate->setDate(QDate::currentDate());
       ui.tmSearchTime->setTime(QTime::currentTime());

       ui.tblTableAvailability->clear();
        QStringList lblheaders;
        lblheaders << "Table #" << "Capacity" << "Date" << "Time"<<"Status";
        ui.tblTableAvailability->setHorizontalHeaderLabels(lblheaders); */
    }
    
void Function_Room::FunctionRoomReserve()
    {
         
        int reserveRow;
        int i;           //Counter for column
        QStringList reserveData;
        QString     tempStr;

        //Get row number for the higlighted row
        reserveRow = ui.tblFuncRoomAvail->currentRow();

        //Get the column data into a String list        
        for ( i = 0; i < 6 ;i++)
        {
           tempStr = ui.tblFuncRoomAvail->item(reserveRow,i)->text();

           reserveData <<tempStr;
        }

        //reserve is instance of FormReserveDialog
        //Set the type of Dialog, setFields with freetable information
        //Enablefields 
        //
        
       
        reserve.SetFields(reserveData);
        reserve.EnableFields();
        reserve.setWindowModality(Qt::WindowModal);
        reserve.show();
           
    }
         
    
    
   
//Reserved List Tab widget   
void Function_Room::ReservedListSearch()
    {
         QMessageBox::critical(this, "You are in Search Table",
                    "Search date: " + ui.dtRLSearchDate->text()) ;
         ui.dtRLSearchDate->setDate(QDate::currentDate());
    }

void Function_Room::ReservedListClear()
    {
         
    }
    
    
