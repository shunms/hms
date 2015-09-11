/*****************************************************************************
 * tablecombobox.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-13
 * 
 *****************************************************************************
 */
 


#include "tablecombobox.h"

#include <QDebug>


TableComboBox::TableComboBox( int row, int column, QTableWidget* parent ) 
    : QComboBox( parent )
{
    this->table = parent;
    this->rowId = row;
    this->colId = column;
    
    parent->setCellWidget( row, column, this );
    
    
    int conn;
    
    conn = connect( this, SIGNAL( currentIndexChanged( int ) ),
             this, SLOT( RefireIndexChanged( int ) ) );
    
    if ( not conn )
        qDebug( "Failed to connect!!" );
    
    
    conn = connect( this, SIGNAL( cellChanged( int, int ) ),
                    parent, SIGNAL( cellChanged( int, int ) ) );
    
    if ( not conn )
        qDebug( "Failed to connect!!" );
}
        

void TableComboBox::RefireIndexChanged( int index )
{
    
    emit rowSelectionChanged( rowId, index );
    emit columnSelectionChanged( colId, index );
    emit rowChanged( rowId );
    emit columnChanged( colId );
    emit cellChanged( rowId, colId );
}
        


// EOF: tablecombobox.cpp

