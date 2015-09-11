/*****************************************************************************
 * customer_base.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-16
 *
 *****************************************************************************
 */



#include "guest_base.h"

#include <QDebug>


QDate Guest_Base::GetDateOfBirth()
{
    return dateOfBirth;
}

QString Guest_Base::GetFirstName()
{
    return firstName;
}

QString Guest_Base::GetLastName()
{
    return lastName;
}

QString Guest_Base::GetNotes()
{
    return notes;
}

Guest_Base::Sex Guest_Base::GetSex()
{
    return sex;
}

QString Guest_Base::GetTitle()
{
    return title;
}

void Guest_Base::SetDateOfBirth( QDate dateOfBirth )
{
    this->dateOfBirth = dateOfBirth;
}


void Guest_Base::SetFirstName( QString firstName )
{
    this->firstName = firstName;
}


void Guest_Base::SetLastName( QString lastName )
{
    this->lastName = lastName;
}


void Guest_Base::SetNotes( QString notes )
{
    this->notes = notes;
}


void Guest_Base::SetSex( Guest_Base::Sex sex )
{
    this->sex = sex;
}


void Guest_Base::SetSex( int sex )
{
    if ( 0 == sex )
    {
        this->sex = Guest_Base::Male;
    }
    else
    {
        this->sex = Guest_Base::Female;
    }
}



void Guest_Base::SetTitle( QString title )
{
    this->title = title;
}



int test_Guest_Base()
{
    Guest_Base cb;
    cb.SetSex( 0 );
    cb.SetLastName( "Smith" );
    cb.SetFirstName( "Joe" );
    cb.SetTitle( "Mr." );
    cb.SetNotes( "Mr. Smith requires wheelchair access" );
    cb.SetDateOfBirth( QDate(1977,4,5) );

    assert_( cb.GetSex() == Guest_Base::Male );
    assert_( cb.GetLastName() == "Smith" );
    assert_( cb.GetFirstName() == "Joe" );

    qDebug() << QDate(1977,4,5) << cb.GetDateOfBirth() ;
    assert_( cb.GetDateOfBirth().month() == 4 );
    assert_( cb.GetDateOfBirth().year() == 1977 );

    cb.SetSex( 1 );
    assert_( cb.GetSex() == Guest_Base::Female );
    assert_( cb.GetSex() == 1 );

    cb.SetSex( 70 );  //this is invalid but must map to female
    assert_( cb.GetSex() == Guest_Base::Female );
    assert_( cb.GetSex() == 1 );

    cb.SetSex( Guest_Base::Male );
    assert_( cb.GetSex() == 0 );



    return 0;
}

// EOF: customer_base.cpp

