#include <QtGui>
#include <QObject>
#include "ui_service_maint.h"
#include "service_maint_base.h"
#include <QTableWidgetItem>
#include <QDialog>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QSqlQuery>
#include <QSQLQueryModel>
#include <QSqlTableModel>
#include <QString>
#include <QtDebug>

#ifndef SERVICE_MAINT_H
#define SERVICE_MAINT_H

class service_maint: public QWidget
{
    Q_OBJECT

    public:
        service_maint();
        
    private slots:
        
        void AddReq();
        void Cancel(); 
        void Find(); 
		void Update();
        void Quit(); 

		void getRnstr();
		void getLstr();
		void getFstr();
		void getRstr();
		void getCstr();
		void getTstr();
		
           
    private:
		QString rn;
		QString fn;
		QString ln;
		QString cm;
		QString rq;
		QString dt;
		

		
		
        Ui::service_maint ui;
        
};

#endif
