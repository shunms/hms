
#include <QObject>
#include <QWidget>
#include <QString>
// #include "src/common/common.h"


#ifndef SERVICE_MAINT_BASE_H
#define SERVICE_MAINT_BASE_H

class service_maint_base: public QWidget
{
  Q_OBJECT

    public:
       service_maint_base();
	  // ~service_maint_base();
        
		void SetLastName(QString lastname);
		void SetFirstName(QString firstname);
		void SetRoomNo(QString roomNo);
		void SetComments(QString comments);
		void SetRequest(QString request);
		void SetTime(QString time);
		

		QString GetLastName();
		QString GetFirstName();
		QString GetRoomNo();
		QString GetComments();
		QString GetRequest();
		QString GetTime();
		
		
private:
		QString lastName;
		QString firstName;
		QString comments;
		QString request;
		QString roomNo;
		QString time;
		

};


#endif
