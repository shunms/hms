#include "service_maint.h"

 service_maint::service_maint()
    {
        ui.setupUi(this);
		

		connect(ui.lineEditRoom, SIGNAL(editingFinished()), this, SLOT(getRnstr()));
		connect(ui.lineEditFname, SIGNAL(editingFinished()), this, SLOT(getFstr()));
		connect(ui.lineEditLname, SIGNAL(editingFinished()), this, SLOT(getLstr()));
		connect(ui.textEditComments, SIGNAL(editingFinished()), this, SLOT(getCstr()));
		connect(ui.comboBoxReq, SIGNAL(editingFinished()), this, SLOT(getRstr()));
		connect(ui.lineEditTime, SIGNAL(editingFinished()), this, SLOT(getTstr()));
		
     
     
        connect(ui.pushButtonAdd, SIGNAL(clicked()), this, SLOT(AddReq())); 
		connect(ui.pushButtonCancel, SIGNAL(clicked()), this, SLOT(Cancel()));
        connect(ui.pushButtonFind, SIGNAL(clicked()), this, SLOT(Find()));
        connect(ui.pushButtonOk, SIGNAL(clicked()), this, SLOT(Update()));
		connect(ui.pushButtonClose, SIGNAL(clicked()), this, SLOT(Quit()));
       
           
              
              
        
    }

    
    void service_maint::AddReq()
    {
       
		qDebug() << "I am in slot function";
		QSqlQuery query;
		QSqlTableModel *model = new QSqlTableModel(this);
	    model->database().transaction();
		query.prepare("insert into person (personid, firstname, lastname) "
			           "VALUES (?, ?, ?)");
		query.addBindValue(rn);
	    query.addBindValue(fn);
	    query.addBindValue(ln);
		query.exec();
		model->database().commit();     
       
       
    }
 
    void service_maint::Cancel()
    {
            
    }
    
	void service_maint::Find()
    {
                  

    }
	

    
	void service_maint::Update()
	{    

      

    }
    
	void service_maint::Quit()
	{
    }
	

	void service_maint::getRnstr() {
	 rn = ui.lineEditRoom->displayText();
	 qDebug() << rn;
	 }

	 void service_maint::getFstr() {
	 qDebug() << " I am in Fline edit slot";
	 fn = ui.lineEditFname->displayText();
	 qDebug() << fn;
	 //return pern;
 }
	void service_maint::getLstr() {
	 qDebug() << " I am in Lline edit slot";
	 ln = ui.lineEditLname->displayText();
	 qDebug() << ln;
	 //return pern;
	 
 }

		 void service_maint::getCstr() {
		//	 cm = ui.textEditComments->setHtml();
			 qDebug() << cm;
			 }

		 void service_maint::getRstr() {
			 rq = ui.comboBoxReq->currentText();
			 qDebug() << rq;
			 }

		 void service_maint::getTstr() {
			 dt = ui.lineEditTime->displayText();
			 qDebug() << dt;
			 }


		




    
    
  
