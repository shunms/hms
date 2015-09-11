//#ifndef UI_TABLERESERVATION_H
//#define UI_TABLERESERVATION_H

#include <QtGui>
#include "ui_tableReserveDialog.h"

class Table_ReserveDialog: public QMainWindow
{
    Q_OBJECT

    public:
        Table_ReserveDialog();
        void SetFields(QStringList inputData);
        void SetType(QString strType);
        QString GetType();
        void EnableFields();
        bool IsReserveType();


    private slots:
        void AddWaitList();
        void CancelDialog();
	    void ReserveTable();
        bool CheckReqFields();


    private:
        Ui::Table_ReserveDialog ui;
        QString Type;

        
};

  //  #endif
