/*****************************************************************************
 * tablecombobox.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-13
 * 
 *****************************************************************************
 */
 


#ifndef TABLECOMBOBOX_H
#define TABLECOMBOBOX_H


#include <QTableWidget>
#include <QComboBox>

class TableComboBox : public QComboBox
{
    Q_OBJECT
    
    public:
        TableComboBox( int row, int column, QTableWidget * parent = 0 );
        
    private slots:
        void RefireIndexChanged( int index );
        
    signals:
        void rowSelectionChanged( int row, int index );
        void columnSelectionChanged( int column, int index );
        void rowChanged( int row );
        void columnChanged( int row );
        void cellChanged( int row, int column );
        
    
    private:
        int rowId;
        int colId;
        QTableWidget* table;
};


#endif
// EOF: tablecombobox.h

