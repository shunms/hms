#include "tour_info.h"

tour_info::tour_info()
    {
        ui.setupUi(this);
       // ui.tblTourInfo->setRowCount(0);
    }

        void tour_info::TourInfo_Add()
        {
             
             connect(ui.pbTourAdd, SIGNAL(clicked()),this, SLOT(ui.tblTourInfo->insertRows(1)));

         
        }
        
        void tour_info::TourInfo_Save()
        {          
             
        }
        
        void tour_info::TourInfo_Delete()
        {
          connect(ui.pbTourDelete, SIGNAL(clicked()),this, SLOT(ui.tblTourInfo->removeRow(1)));   
        }
        
    
        
