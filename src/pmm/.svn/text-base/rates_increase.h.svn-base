/*****************************************************************************
 * rates_increase.h - header file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#ifndef RATES_INCREASE_H
#define RATES_INCREASE_H


#include <QObject>


/**
* The Rates_Increase class provides the foundation for the
* data attributes of the Rates_Increase class.
*/

class Rates_Increase //: public QObject
{
    //Q_OBJECT

    public:

        /**
        * Constructor for Rates_Increase class.
        */
        Rates_Increase( );

		/**
        * Destructor for Rates_Increase class.
        */
        ~Rates_Increase( );


        /**
        * Sets the weekend percentage increase.
        */
        void SetWeekendInc( int increase );

		/**
        * Sets the seasonal percentage increase.
        */
        void SetSeasonalInc( int increase );

        /**
        * Sets notes for the rates increase.
        */
        void SetIncNotes( QString notes );


       /**
        * Gets the weekend percentage increase.
        */
        int GetWeekendInc( );

		/**
        * Gets the seasonal percentage increase.
        */
        int GetSeasonalInc( );

        /**
        * Gets notes for the rates increase.
        */
        QString GetIncNotes( );


    private:
		int		weekendInc;
		int		seasonalInc;
        QString incNotes;
 
};



#endif

// EOF

