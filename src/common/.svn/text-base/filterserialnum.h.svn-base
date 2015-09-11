/*****************************************************************************
 * filterserialnum.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-23
 *
 *****************************************************************************
 */



#ifndef FILTERSERIALNUM_H
#define FILTERSERIALNUM_H

#include <QString>
#include <QtGlobal>
#include <common/common.h>

/**
 * Takes a serial number with dots, dashes or spaces as seperators
 * and returns the equivalent input without any seperators.
 * This function actually removes all non-numeric characters from the
 * string.
 */
QString FilterSerialNum( QString input );

/**
 * Takes a serial number with dots, dashes or spaces as seperators
 * and returns the equivalent input without any seperators.
 *
 * Returns the input as an unsigned integer.
 */
qulonglong ConvertSerialNum( QString input );


/**
 * unit tests for FilterSerialNum functions.
 */
int test_FilterSerialNum();



#endif
// EOF: filterserialnum.h

