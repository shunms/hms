#include "table_reservedialog.h"

   Table_ReserveDialog::Table_ReserveDialog()
    {
        ui.setupUi(this);


        connect(ui.pbAddWaitList, SIGNAL(clicked()), this, SLOT(AddWaitList()));

        connect(ui.pbCancel, SIGNAL(clicked()), this, SLOT(CancelDialog()));

        connect(ui.pbReserve, SIGNAL(clicked()), this, SLOT(ReserveTable()));

        
    }

    void Table_ReserveDialog::SetType(QString strType)
    {
        Type = strType;
    }

    QString Table_ReserveDialog::GetType()
    {
        return (Type);
    }


    void Table_ReserveDialog::AddWaitList()
    {

                

    }

    void Table_ReserveDialog::CancelDialog()
    {

           
    }

    void Table_ReserveDialog::ReserveTable()
    {
        QMessageBox::critical(this, "You are in Search Table",
                    "Table Number: " + ui.lnTableNo->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "Capacity: " + ui.lnCapacity->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "date: " + ui.dtDate->text()) ;

        QMessageBox::critical(this, "You are in Search Table",
                    "time: " + ui.tmTime->text()) ;

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
              QMessageBox::information(this, "Reservation",
                    "Reservation #: " ) ;

        }
           
    }

    bool Table_ReserveDialog::CheckReqFields()
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

       //Check for Date and Time as required fields for Reservation 
       if (IsReserveType())
       {

          //Check if Reservation date is null
          if ((ui.dtDate->text().isNull() || ui.dtDate->text().isEmpty()))
          {                   
             if (!(Errormsg.isNull() && Errormsg.isEmpty()))
             {
                Errormsg += ",";
             }
             Errormsg += " Date";
          }           


          //Check if Reservation time is null
          if ((ui.tmTime->text().isNull() || ui.tmTime->text().isEmpty()))
          {                   
             if (!(Errormsg.isNull() && Errormsg.isEmpty()))
             {
                Errormsg += ",";
             }
             Errormsg += " Time";
          }           

      }  // End of ReserveType

      //If the Errormessage is not null or empty then show the errormessage
      if (! (Errormsg.isNull() && Errormsg.isEmpty() ))
      {
         Errormsg += " are Required Fields. Please enter to proceed.";

         QMessageBox::critical(this, "Mandatory Fields",Errormsg) ;
         
         return(FALSE);
      }
      else
      {
         return(TRUE);
      }
    }

    bool Table_ReserveDialog::IsReserveType()
    {
        if (GetType() != QString("Waitlist"))
        {
            return (TRUE);
        }
        else
        {
            return (FALSE);
        }
            
    }
    
    void Table_ReserveDialog::EnableFields()
    {
       //Enable fields based on whether the form is for Waitlist 
       //or reservation

       if (! IsReserveType())
       {
          ui.pbAddWaitList->setEnabled(TRUE);
          ui.pbReserve->setEnabled(FALSE);
          ui.lnTableNo->setEnabled(FALSE);
          ui.lnCapacity->setEnabled(TRUE);
          ui.dtDate->setEnabled(FALSE);
          ui.tmTime->setEnabled(FALSE);

       }
       else
       {
          ui.pbReserve->setEnabled(TRUE);
          ui.pbAddWaitList->setEnabled(FALSE);
          ui.lnTableNo->setEnabled(TRUE);
          ui.lnCapacity->setEnabled(TRUE);
          ui.dtDate->setEnabled(TRUE);
          ui.tmTime->setEnabled(TRUE);          

       }



    }

    void Table_ReserveDialog::SetFields(QStringList inputData)
    {

       if ( ! IsReserveType())

       {         
         ui.lnTableNo->setText("");
         ui.lnCapacity->setText("");

         ui.dtDate->setDate(QDate::currentDate());
         
         QTime time = QTime::fromString(inputData.value(3), "hh:mmap");
         ui.tmTime->setTime(QTime::currentTime());


       }
       else
       {
         ui.lnTableNo->setText(inputData.value(0));
         ui.lnCapacity->setText(inputData.value(1));

	     QDate date = QDate::fromString(inputData.value(2), "MM/dd/yyyy");
         ui.dtDate->setDate(date);
         
         QTime time = QTime::fromString(inputData.value(3), "hh:mmap");
         ui.tmTime->setTime(time);


       }
    }

