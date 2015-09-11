#include <QtGui>
#include "ui_tour_information.h"

class tour_info: public QMainWindow
{
    Q_OBJECT

    public:
        tour_info();
        
    private slots:
        
        void TourInfo_Add();
        void TourInfo_Save();
        void TourInfo_Delete();
        
    private:
        Ui::tour_info ui;  
        
};      
