#include <QtGui>
#include <QObject>
#include "ui_security.h"
#include "security_emp_details_base.h"
#include <QTableWidgetItem>

#include <QDialog>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSqlQuery>
#include <QSQLQueryModel>
#include <QVBoxLayout>
#include <QSqlTableModel>
#include <QString>
#include <QtDebug>

#ifndef SECURITY_EMP_DETAILS_H
#define SECURITY_EMP_DETAILS_H

class security_emp_details: public QWidget
{
    Q_OBJECT

    public:
        security_emp_details();
        
    private slots:
        
        void InsertEmpDetails();
        void Revert(); 
        void SearchEmpDetails(); 
        void UpdateEmpDetails(); 
        void Quit(); 
		void getIdstr();
		void getLstr();
		void getFstr();
		void getSexstr();
		void getDeptstr();
		void getDsgstr();
		void getAstr();
		void getCstr();
		void getSstr();
		void getCntrystr();
		void getZstr();
		void getAccstr();
		void getPwordstr();
		void getEstr();
           
    private:
		QString em;
		QString fn;
		QString ln;
		QString sx;
		QString eml;
		QString dt;
		QString ds;
		QString al;
		QString ad;
		QString cy;
		QString st;
		QString zc;
		QString ct;
		QString pw;

		//security_emp_details sec;
		
        Ui::security ui;
        
};

#endif
