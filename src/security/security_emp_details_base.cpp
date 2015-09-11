#include<security_emp_details_base.h>


	security_emp_details_base::security_emp_details_base()
	{
	}

		security_emp_details_base::~security_emp_details_base()
		{
		}


	void security_emp_details_base::SetLastName(QString lastname)
{
    this->lastName = lastname;
}
	
	void security_emp_details_base::SetFirstName(QString firstname)
{
    this->firstName = firstname;
}	
	
	void security_emp_details_base::SetEmployeeId(int empid )
{
    this->employeeId = empid;
}



void security_emp_details_base::SetAddress(QString empaddress)
{
	this->address = empaddress;
    
}

void security_emp_details_base::SetCity(QString empcity)
{
    this->city = empcity;
}

void security_emp_details_base::SetState(QString empstate)
{
    this->state = empstate;
}

void security_emp_details_base::SetZipCode(QString zipcode )
{
    this->zipCode = zipcode ;
}

void security_emp_details_base::SetCountry(QString empcountry )
{
    this->country = empcountry;
}


void security_emp_details_base::SetDepartment(QString dept )
{
   this->department = dept;
}

void security_emp_details_base::SetDesignation(QString desg )
{
   this->designation = desg;
}

void security_emp_details_base::SetDefaultPassWord(QString pword )
{
    this->defaultPassWord = pword;
}

void security_emp_details_base::SetAccessLevel(QString acc )
{
    this->accessLevel = acc;
}

void security_emp_details_base::SetSex( )
{
   // sex = ui.comboBoxSex->currentText();
}

void security_emp_details_base::SetEmail(QString mail )
{
    this->email = mail;
}


QString security_emp_details_base::GetLastName( )
{
   return lastName;
}
	
	QString security_emp_details_base::GetFirstName( )
{
    return firstName;
}	
	
	int security_emp_details_base::GetEmployeeId( )
{
  return employeeId;
}


QString security_emp_details_base::GetAddress( )
{
   return address;
}

QString security_emp_details_base::GetCity( )
{
    return city;
}

QString security_emp_details_base::GetState( )
{
    return state;
}

QString security_emp_details_base::GetZipCode( )
{
    return zipCode;
}

QString security_emp_details_base::GetCountry( )
{
    return country;
}


QString security_emp_details_base::GetDepartment( )
{
   return department;
}

QString security_emp_details_base::GetDesignation( )
{
    return designation;
}

QString security_emp_details_base::GetDefaultPassWord( )
{
    return defaultPassWord;
}

QString security_emp_details_base::GetAccessLevel( )
{
     return accessLevel;
}

QString security_emp_details_base::GetSex( )
{
    return sex;
}

QString security_emp_details_base::GetEmail( )
{
    return email;
}


