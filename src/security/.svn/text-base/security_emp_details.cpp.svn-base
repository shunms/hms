#include "security_emp_details.h"

 security_emp_details::security_emp_details()
    {
        ui.setupUi(this);
		

		connect(ui.lineEditEmp, SIGNAL(editingFinished()), this, SLOT(getIdstr()));
		connect(ui.lineEditFname, SIGNAL(editingFinished()), this, SLOT(getFstr()));
		connect(ui.lineEditLname, SIGNAL(editingFinished()), this, SLOT(getLstr()));
		connect(ui.lineEditSex, SIGNAL(editingFinished()), this, SLOT(getSexstr()));
		connect(ui.lineEditDpt, SIGNAL(editingFinished()), this, SLOT(getDeptstr()));
		connect(ui.lineEdit, SIGNAL(editingFinished()), this, SLOT(getDsgstr()));
		connect(ui.lineEditPword, SIGNAL(editingFinished()), this, SLOT(getPwordstr()));
		connect(ui.lineEditAdd, SIGNAL(editingFinished()), this, SLOT(getAstr()));
		connect(ui.lineEditCity, SIGNAL(editingFinished()), this, SLOT(getCstr()));
		connect(ui.lineEditState, SIGNAL(editingFinished()), this, SLOT(getSstr()));
		connect(ui.lineEditZip, SIGNAL(editingFinished()), this, SLOT(getZstr()));
		connect(ui.lineEditCntry, SIGNAL(editingFinished()), this, SLOT(getCntrystr()));
   		connect(ui.lineEditAcc, SIGNAL(editingFinished()), this, SLOT(getAccstr()));
		connect(ui.lineEditEmail, SIGNAL(editingFinished()), this, SLOT(getEstr()));
     
     
     
        connect(ui.pushButtonAdd, SIGNAL(clicked()), this, SLOT(InsertEmpDetails())); 
		connect(ui.pushButtonCncl, SIGNAL(clicked()), this, SLOT(Revert()));
        connect(ui.pushButtonFind, SIGNAL(clicked()), this, SLOT(SearchEmpDetails()));

		

		
		
        connect(ui.pushButtonOk, SIGNAL(clicked()), this, SLOT(UpdateEmpDetails()));
		connect(ui.pushButtonClose, SIGNAL(clicked()), this, SLOT(Quit()));
       
           
              
              
        
    }

    
    void security_emp_details::InsertEmpDetails()
    {
       
		qDebug() << "I am in slot function";
		QSqlQuery query;
		QSqlTableModel *model = new QSqlTableModel(this);
	    model->database().transaction();
		query.prepare("insert into person (personid, firstname, lastname) "
			           "VALUES (?, ?, ?)");
		query.addBindValue(em);
	    query.addBindValue(fn);
	    query.addBindValue(ln);
		query.exec();
		model->database().commit();     
       
       
    }
 
    void security_emp_details::Revert()
    {
            
    }
    
	void security_emp_details::SearchEmpDetails()
    {
                  

    }
	

    
	void security_emp_details::UpdateEmpDetails()
	{    

      

    }
    
	void security_emp_details::Quit()
	{
    }
	

	void security_emp_details::getIdstr() {
	 em = ui.lineEditEmp->displayText();
	 qDebug() << em;
	 }

	 void security_emp_details::getFstr() {
	 qDebug() << " I am in Fline edit slot";
	 fn = ui.lineEditFname->displayText();
	 qDebug() << fn;
	 //return pern;
 }
	void security_emp_details::getLstr() {
	 qDebug() << " I am in Lline edit slot";
	 ln = ui.lineEditLname->displayText();
	 qDebug() << ln;
	 //return pern;
	 
 }

		 void security_emp_details::getEstr() {
			 eml = ui.lineEditEmail->displayText();
			 qDebug() << eml;
			 }

		 void security_emp_details::getAstr() {
			 ad = ui.lineEditAdd->displayText();
			 qDebug() << ad;
			 }

		 void security_emp_details::getDeptstr() {
			 dt = ui.lineEditDept->displayText();
			 qDebug() << dt;
			 }

		 void security_emp_details::getDsgstr() {
			 ds = ui.lineEditDsg->displayText();
			 qDebug() << ds;
			 }

		 void security_emp_details::getAccstr() {
			 al = ui.lineEditAcc->displayText();
			 qDebug() << al;
			 }

		 void security_emp_details::getSexstr() {
			 sx = ui.lineEditSex->displayText();
			 qDebug() << sx;
			 }

		void security_emp_details::getCstr() {
			cy = ui.lineEditCity->displayText();
			 qDebug() << cy;
			 }	

		void security_emp_details::getSstr() {
			 st = ui.lineEditState->displayText();
			 qDebug() << st;
			 }

		void security_emp_details::getCntrystr() {
			 ct = ui.lineEditCntry->displayText();
			 qDebug() << ct;
			 }

		void security_emp_details::getZstr() {
			 zc = ui.lineEditZip->displayText();
			 qDebug() << zc;
			 }
		
		void security_emp_details::getPwstr() {
			pw = ui.lineEditPword->displayText();
			qDebug() << pw;
			}





    
    
  
