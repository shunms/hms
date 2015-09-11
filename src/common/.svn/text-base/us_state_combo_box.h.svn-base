/*****************************************************************************
 * us_state_combo_box.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-20
 * 
 *****************************************************************************
 */
 


#ifndef US_STATE_COMBO_BOX_H
#define US_STATE_COMBO_BOX_H

#include <QComboBox>

/**
 * The us_state_name struct is a helper just to make creating
 * the array of state names easier.
 * Other modules should not need to touch this.
 */
struct us_state_name
{
	const char * abbr;
	const char * full;
};


/**
 * The US_State_Combo_Box class is derived from the standard QComboBox and
 * provides a pre-generated drop down list of list of state names.
 * The names are displayed in the
 * abbriviated two-letter form standardised by the US Post office.
 */
class US_State_Combo_Box : public QComboBox
{
	Q_OBJECT

	public:
		/**
		 * Constructor, sets up the state names.
		 */
		US_State_Combo_Box( QWidget * parent = 0 );

		/**
		 * Given an integer index return the abbriviated two-letter
		 * code for a desired state.
		 * If the index is out of range, the function will
		 * return an empty string.
		 */
		QString GetShortName( int index ) const ;

		/**
		 * Given a integer index return the name for a desired
		 * state.
		 * If the index is out of range, the function will
		 * return an empty string.
		 */
		QString GetLongName( int index ) const ;

		/**
		 * Given either a long or short name return an index
		 * number for that state.
		 * If the string is invalid or not found the function
		 * will return -1.
		 */
		int GetIndex( QString name ) const ;
		
	private:
		// Interesting, in c++ you don't need to typedef
		// your struct first.
		static us_state_name stateNames [];
		
};




#endif
// EOF: us_state_combo_box.h
