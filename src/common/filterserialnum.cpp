/*****************************************************************************
 * filterserialnum.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-23
 *
 *****************************************************************************
 */



#include "filterserialnum.h"

#include <QDebug>

QString FilterSerialNum( QString input )
{
    QString temp;
    for ( int index = 0; index < input.size(); index++ )
    {
        if ( input[index] >= '0' and input[index] <= '9' )
        {
            temp += input[index];
        }
    }

    return temp;
}


qulonglong ConvertSerialNum( QString input )
{
    return FilterSerialNum( input ).toULongLong();
}


int test_FilterSerialNum()
{
    qDebug() << "XX" << FilterSerialNum("555-876-5555");
    assert_( FilterSerialNum("555-876-5555") == "5558765555" );
    assert_( FilterSerialNum("1-22-4534-0099") == "12245340099" );
    assert_( FilterSerialNum("76.90342.2") == "76903422" );
    assert_( FilterSerialNum("10 90 88 77") == "10908877" );

    qDebug() << "XX" << FilterSerialNum("jimm");
    assert_( FilterSerialNum("jimm") == "" );


    assert_( ConvertSerialNum("98-67-00") == 986700 );
    assert_( ConvertSerialNum("oops") == 0 );

    return 0;
}


// EOF: filterserialnum.cpp

