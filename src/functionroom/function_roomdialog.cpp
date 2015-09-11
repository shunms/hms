#include "function_roomdialog.h"

Function_RoomDialog::Function_RoomDialog()
    {
        ui.setupUi(this);

        connect(ui.pbReservationCancel, SIGNAL(clicked()), this, SLOT(CancelDialog()));
        connect(ui.pbReservationReserve, SIGNAL(clicked()), this, SLOT(ReserveFunctionRoom()));

        
    }

void Function_RoomDialog::ReserveFunctionRoom()
    {
       // Qint ReservationId;

        QMessageBox::critical(this, "You are in Search Table",
                    "FunctionRoom Number: " + ui.lnFuncRoomNo->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "Capacity: " + ui.lnCapacity->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "date: " + ui.lndtDate->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "time: " + ui.lntmTime->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "Room No: " + ui.lnRoomNo->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "First Name: " + ui.lnCustFirstName->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "Last Name: " + ui.lnCustLastName->text()) ;

        //Call checkReqFields to check whether all the required fields 
        //are entered and call Addreservation
        if (CheckReqFields())
        {
              
              //Call the Reserve Function otherwise don't call
              //add parameters
              //ReservationId = addTableReservation();
              //Display Reservation Id
              //DBID Db_Mgr::AddTableReservation()//Table_reservation *
              //QMessageBox::information(this, "Reservation", "Reservation #: " ) ;

        }
                   
    }

bool Function_RoomDialog::CheckReqFields()
    {

       QString Errormsg;


       //Check if First Name is null

       if ((ui.lnCustFirstName->text().isNull()) || (ui.lnCustFirstName->text().isEmpty()))
       {                   
           if (!(Errormsg.isNull() && Errormsg.isEmpty()))
           {
              Errormsg += ",";
           }

           Errormsg += " First Name";
       }           

       // Check for Last Name whether Null or Empty
       if ((ui.lnCustLastName->text().isNull() || ui.lnCustLastName->text().isEmpty()))
       {                   
           if (!(Errormsg.isNull() && Errormsg.isEmpty()))
           {
              Errormsg += ",";
           }

           Errormsg += " Last Name";
       }           


       // Check for Capacity whether Null or Empty
       if ((ui.lnCapacity->text().isNull() || ui.lnCapacity->text().isEmpty()))
       {                   
           if (!(Errormsg.isNull() && Errormsg.isEmpty()))
           {
              Errormsg += ",";
           }

           Errormsg += " Capacity";
       }           
       
             //If the Errormessage is not null or empty then show the errormessage
      if (! (Errormsg.isNull() && Errormsg.isEmpty() ))
      {
         Errormsg += " are Required Fields. Please enter to proceed.";

         QMessageBox::critical(this, "Mandatory Fields",Errormsg) ;
         
         return(FALSE);
      }
      
         return(TRUE);
    }

void Function_RoomDialog::EnableFields()
    {
          ui.pbReservationReserve->setEnabled(TRUE);
          ui.lnFuncRoomNo->setEnabled(TRUE);
          ui.lnCapacity->setEnabled(TRUE);
          ui.lndtDate->setEnabled(TRUE);
          ui.lntmTime->setEnabled(TRUE); 
    }
    
    
void Function_RoomDialog::SetFields(QStringList inputData)
    {

      
         ui.lnFuncRoomNo->setText(inputData.value(0));
         

	     QDate date = QDate::fromString(inputData.value(1), "MM/dd/yyyy");
         ui.lndtDate->setDate(date);
         
         QTime time = QTime::fromString(inputData.value(2), "hh:mmap");
         ui.lntmTime->setTime(time);
         
         ui.lnCapacity->setText(inputData.value(3));


       
    }    
