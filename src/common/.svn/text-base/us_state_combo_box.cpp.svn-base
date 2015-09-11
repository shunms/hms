/*****************************************************************************
 * us_state_combo_box.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-20
 * 
 *****************************************************************************
 */
 


#include "us_state_combo_box.h"

#include <QDebug>


us_state_name US_State_Combo_Box::stateNames [] = {
	{ "AK",	"ALASKA"  },
	{ "AL",	"ALABAMA" },
	{ "AR", "ARKANSAS" },
	{ "AS", "AMERICAN SAMOA" },
	{ "AZ", "ARIZONA " },
	{ "CA", "CALIFORNIA " },
	{ "CO", "COLORADO " },
	{ "CT", "CONNECTICUT" },
	{ "DC", "DISTRICT OF COLUMBIA" },
	{ "DE", "DELAWARE" },
	{ "FL", "FLORIDA" },
	{ "FM", "FEDERATED STATES OF MICRONESIA" },
	{ "GA", "GEORGIA" },
	{ "GU", "GUAM " },
	{ "HI", "HAWAII" },
	{ "IA", "IOWA" },
	{ "ID", "IDAHO" },
	{ "IL", "ILLINOIS" },
	{ "IN", "INDIANA" },
	{ "KS", "KANSAS" },
	{ "KY", "KENTUCKY" },
	{ "LA", "LOUISIANA" },
	{ "MA", "MASSACHUSETTS" },
	{ "MD", "MARYLAND" },
	{ "ME", "MAINE" },
	{ "MH", "MARSHALL ISLANDS" },
	{ "MI", "MICHIGAN" },
	{ "MN", "MINNESOTA" },
	{ "MO", "MISSOURI" },
	{ "MP", "NORTHERN MARIANA ISLANDS" },
	{ "MS", "MISSISSIPPI" },
	{ "MT", "MONTANA" },
	{ "NC", "NORTH CAROLINA" },
	{ "ND", "NORTH DAKOTA" },
	{ "NE", "NEBRASKA" },
	{ "NH", "NEW HAMPSHIRE" },
	{ "NJ", "NEW JERSEY" },
	{ "NM", "NEW MEXICO" },
	{ "NV", "NEVADA" },
	{ "NY", "NEW YORK" },
	{ "OH", "OHIO" },
	{ "OK", "OKLAHOMA" },
	{ "OR", "OREGON" },
	{ "PA", "PENNSYLVANIA" },
	{ "PR", "PUERTO RICO" },
	{ "PW", "PALAU" },
	{ "RI", "RHODE ISLAND" },
	{ "SC", "SOUTH CAROLINA" },
	{ "SD", "SOUTH DAKOTA" },
	{ "TN", "TENNESSEE" },
	{ "TX", "TEXAS" },
	{ "UT", "UTAH" },
	{ "VA", "VIRGINIA " },
	{ "VI", "VIRGIN ISLANDS" },
	{ "VT", "VERMONT" },
	{ "WA", "WASHINGTON" },
	{ "WI", "WISCONSIN" },
	{ "WV", "WEST VIRGINIA" },
	{ "WY", "WYOMING" },

};


US_State_Combo_Box::US_State_Combo_Box( QWidget * parent ) 
	: QComboBox( parent )
{
	// 50 states, plus territories or whatever
	for ( int index = 0; index < 59; index++ )
	{
		this->addItem( stateNames[ index ].abbr );
	};
}



QString US_State_Combo_Box::GetShortName( int index ) const
{
	if ( index < 0 or index >= 59 )
	{
		qDebug( "YUCK! Bad index." );
		return QString("");
	}


	return QString( stateNames[ index ].abbr );
}

QString US_State_Combo_Box::GetLongName( int index ) const
{
	if ( index < 0 or index >= 59 )
	{
		qDebug( "YUCK! Bad index." );
		return QString("");
	}


	return QString( stateNames[ index ].full );
}



int US_State_Combo_Box::GetIndex( QString name ) const
{
	// yes, this is stupid an inefficent search
	// but the list is fixed at 59 items, so whatever.
	// after all premature optomization is the root of all evil
	
	int index;
	for ( index = 0; index < 59; index++ )
	{
		if ( name == stateNames[ index ].full or
		     name == stateNames[ index ].abbr )
		{
			return index;
		}
	}
	

	qDebug( "Hmmm, bad search string?" );
	return -1;
}	


							     



// EOF: us_state_combo_box.cpp

