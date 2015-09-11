#include<service_maint_base.h>


	service_maint_base::service_maint_base()
	{
	}

	/*service_maint_base::~service_maint_base()
	{
		}
*/

	void service_maint_base::SetLastName(QString lastname)
{
    this->lastName = lastname;
}
	
	void service_maint_base::SetFirstName(QString firstname)
{
    this->firstName = firstname;
}	
	
	void service_maint_base::SetRoomNo(QString room )
{
    this->roomNo = room;
}



void service_maint_base::SetComments(QString com)
{
	this->comments = com;
    
}

void service_maint_base::SetRequest(QString req)
{
    this->request = req;
}

void service_maint_base::SetTime(QString time)
{
    this->time = time;
}



QString service_maint_base::GetLastName( )
{
   return lastName;
}
	
	QString service_maint_base::GetFirstName( )
{
    return firstName;
}	
	
	QString service_maint_base::GetRoomNo( )
{
  return roomNo;
}


QString service_maint_base::GetComments( )
{
   return comments;
}

QString service_maint_base::GetTime( )
{
    return time;
}

QString service_maint_base::GetRequest( )
{
    return request;
}
