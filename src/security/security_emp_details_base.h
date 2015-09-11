
#include <QObject>
#include <QWidget>
#include <QString>
// #include "src/common/common.h"


#ifndef SECURITY_EMP_DETAILS_BASE_H
#define SECURITY_EMP_DETAILS_BASE_H

class security_emp_details_base: public QWidget
{
  Q_OBJECT

    public:
       security_emp_details_base();
	   ~security_emp_details_base();
        
public:

		void SetLastName(QString lastname);
		void SetFirstName(QString firstname);
		void SetEmployeeId(int empid);
		void SetSex();
		void SetEmail(QString mail);
		void SetDepartment(QString dept);
		void SetDesignation(QString desg);
		void SetAccessLevel(QString acc);
		void SetDefaultPassWord(QString pword);
		void SetAddress(QString empaddress);
		void SetCity(QString empcity);
		void SetState(QString empstate);
		void SetZipCode(QString zipcode);
		void SetCountry(QString empcountty);

		QString GetLastName();
		QString GetFirstName();
		int GetEmployeeId();
		QString GetSex();
		QString GetEmail();
		QString GetDepartment();
		QString GetDesignation();
		QString GetAccessLevel();
		QString GetDefaultPassWord();
		QString GetAddress();
		QString GetCity();
		QString GetState();
		QString GetZipCode();
		QString GetCountry();
		
private:
		QString lastName;
		QString firstName;
		int employeeId;
		QString sex;
		QString email;
		QString department;
		QString designation;
		QString accessLevel;
		QString defaultPassWord;
		QString address;
		QString city;
		QString state;
		QString zipCode;
		QString country;

};


#endif
