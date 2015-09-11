#ifndef UI_FUNCTION_ROOM_H
#define UI_FUNCTION_ROOM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

class Ui_Function_Room
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pbFuncRoomReserve;
    QGroupBox *groupBox;
    QLabel *FuncRoomDate;
    QLabel *FuncRoomStatus;
    QDateEdit *dtSearchDate;
    QLabel *FuncRoomCapacity;
    QPushButton *pbFuncRoomSearch;
    QComboBox *cbSearchVacant;
    QLineEdit *lnSearchCapacity;
    QPushButton *pbFuncRoomCancel;
    QTableWidget *tblFuncRoomAvail;
    QWidget *tab_2;
    QLabel *RLDate;
    QPushButton *pbRLsearch;
    QLabel *RLCustLastName;
    QLineEdit *lnCustFirstName;
    QLineEdit *lnCustLastName;
    QDateEdit *dtRLSearchDate;
    QPushButton *pbRLclose;
    QPushButton *pbRLclear;
    QLabel *RLCustFirstName;
    QTableWidget *tblReserveList;

    void setupUi(QWidget *Function_Room)
    {
    Function_Room->setObjectName(QString::fromUtf8("Function_Room"));
    Function_Room->resize(QSize(792, 512).expandedTo(Function_Room->minimumSizeHint()));
    tabWidget = new QTabWidget(Function_Room);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(10, 50, 731, 431));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    pbFuncRoomReserve = new QPushButton(tab);
    pbFuncRoomReserve->setObjectName(QString::fromUtf8("pbFuncRoomReserve"));
    pbFuncRoomReserve->setGeometry(QRect(340, 340, 75, 23));
    groupBox = new QGroupBox(tab);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(10, 20, 671, 91));
    QFont font;
    font.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font.setPointSize(10);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    groupBox->setFont(font);
    FuncRoomDate = new QLabel(groupBox);
    FuncRoomDate->setObjectName(QString::fromUtf8("FuncRoomDate"));
    FuncRoomDate->setGeometry(QRect(70, 50, 47, 14));
    FuncRoomStatus = new QLabel(groupBox);
    FuncRoomStatus->setObjectName(QString::fromUtf8("FuncRoomStatus"));
    FuncRoomStatus->setGeometry(QRect(290, 20, 47, 14));
    dtSearchDate = new QDateEdit(groupBox);
    dtSearchDate->setObjectName(QString::fromUtf8("dtSearchDate"));
    dtSearchDate->setGeometry(QRect(140, 50, 110, 22));
    FuncRoomCapacity = new QLabel(groupBox);
    FuncRoomCapacity->setObjectName(QString::fromUtf8("FuncRoomCapacity"));
    FuncRoomCapacity->setGeometry(QRect(70, 20, 61, 16));
    pbFuncRoomSearch = new QPushButton(groupBox);
    pbFuncRoomSearch->setObjectName(QString::fromUtf8("pbFuncRoomSearch"));
    pbFuncRoomSearch->setGeometry(QRect(390, 50, 75, 23));
    cbSearchVacant = new QComboBox(groupBox);
    cbSearchVacant->setObjectName(QString::fromUtf8("cbSearchVacant"));
    cbSearchVacant->setGeometry(QRect(360, 20, 111, 22));
    lnSearchCapacity = new QLineEdit(groupBox);
    lnSearchCapacity->setObjectName(QString::fromUtf8("lnSearchCapacity"));
    lnSearchCapacity->setGeometry(QRect(140, 20, 113, 20));
    pbFuncRoomCancel = new QPushButton(tab);
    pbFuncRoomCancel->setObjectName(QString::fromUtf8("pbFuncRoomCancel"));
    pbFuncRoomCancel->setGeometry(QRect(430, 340, 75, 23));
    tblFuncRoomAvail = new QTableWidget(tab);
    tblFuncRoomAvail->setObjectName(QString::fromUtf8("tblFuncRoomAvail"));
    tblFuncRoomAvail->setGeometry(QRect(10, 130, 691, 171));
    QFont font1;
    font1.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font1.setPointSize(9);
    font1.setBold(false);
    font1.setItalic(false);
    font1.setUnderline(false);
    font1.setWeight(50);
    font1.setStrikeOut(false);
    tblFuncRoomAvail->setFont(font1);
    tblFuncRoomAvail->setLineWidth(1);
    tblFuncRoomAvail->setSelectionMode(QAbstractItemView::SingleSelection);
    tblFuncRoomAvail->setSelectionBehavior(QAbstractItemView::SelectRows);
    tabWidget->addTab(tab, QApplication::translate("Function_Room", "Function Room Availability", 0, QApplication::UnicodeUTF8));
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    RLDate = new QLabel(tab_2);
    RLDate->setObjectName(QString::fromUtf8("RLDate"));
    RLDate->setGeometry(QRect(380, 40, 41, 22));
    pbRLsearch = new QPushButton(tab_2);
    pbRLsearch->setObjectName(QString::fromUtf8("pbRLsearch"));
    pbRLsearch->setGeometry(QRect(450, 90, 75, 23));
    RLCustLastName = new QLabel(tab_2);
    RLCustLastName->setObjectName(QString::fromUtf8("RLCustLastName"));
    RLCustLastName->setGeometry(QRect(60, 80, 92, 22));
    lnCustFirstName = new QLineEdit(tab_2);
    lnCustFirstName->setObjectName(QString::fromUtf8("lnCustFirstName"));
    lnCustFirstName->setGeometry(QRect(180, 40, 113, 20));
    lnCustLastName = new QLineEdit(tab_2);
    lnCustLastName->setObjectName(QString::fromUtf8("lnCustLastName"));
    lnCustLastName->setGeometry(QRect(180, 80, 113, 20));
    dtRLSearchDate = new QDateEdit(tab_2);
    dtRLSearchDate->setObjectName(QString::fromUtf8("dtRLSearchDate"));
    dtRLSearchDate->setGeometry(QRect(440, 40, 110, 22));
    pbRLclose = new QPushButton(tab_2);
    pbRLclose->setObjectName(QString::fromUtf8("pbRLclose"));
    pbRLclose->setGeometry(QRect(460, 300, 75, 23));
    pbRLclear = new QPushButton(tab_2);
    pbRLclear->setObjectName(QString::fromUtf8("pbRLclear"));
    pbRLclear->setGeometry(QRect(360, 300, 75, 23));
    RLCustFirstName = new QLabel(tab_2);
    RLCustFirstName->setObjectName(QString::fromUtf8("RLCustFirstName"));
    RLCustFirstName->setGeometry(QRect(60, 40, 92, 22));
    tblReserveList = new QTableWidget(tab_2);
    tblReserveList->setObjectName(QString::fromUtf8("tblReserveList"));
    tblReserveList->setGeometry(QRect(0, 130, 721, 161));
    QFont font2;
    font2.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font2.setPointSize(9);
    font2.setBold(false);
    font2.setItalic(false);
    font2.setUnderline(false);
    font2.setWeight(50);
    font2.setStrikeOut(false);
    tblReserveList->setFont(font2);
    tblReserveList->setLineWidth(1);
    tabWidget->addTab(tab_2, QApplication::translate("Function_Room", "Reserved list", 0, QApplication::UnicodeUTF8));
    FuncRoomDate->setBuddy(dtRLSearchDate);
    FuncRoomStatus->setBuddy(cbSearchVacant);
    FuncRoomCapacity->setBuddy(lnSearchCapacity);
    RLDate->setBuddy(dtRLSearchDate);
    RLCustLastName->setBuddy(lnCustLastName);
    RLCustFirstName->setBuddy(lnCustFirstName);
    retranslateUi(Function_Room);
    QObject::connect(pbFuncRoomCancel, SIGNAL(clicked()), Function_Room, SLOT(close()));
    QObject::connect(pbRLclose, SIGNAL(clicked()), Function_Room, SLOT(close()));
    QObject::connect(tblFuncRoomAvail, SIGNAL(doubleClicked(QModelIndex)), pbFuncRoomReserve, SLOT(click()));

    QMetaObject::connectSlotsByName(Function_Room);
    } // setupUi

    void retranslateUi(QWidget *Function_Room)
    {
    Function_Room->setWindowTitle(QApplication::translate("Function_Room", "function_room", 0, QApplication::UnicodeUTF8));
    pbFuncRoomReserve->setText(QApplication::translate("Function_Room", "Reserve", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Function_Room", "Search", 0, QApplication::UnicodeUTF8));
    FuncRoomDate->setText(QApplication::translate("Function_Room", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Date</p></body></html>", 0, QApplication::UnicodeUTF8));
    FuncRoomStatus->setText(QApplication::translate("Function_Room", "Status", 0, QApplication::UnicodeUTF8));
    FuncRoomCapacity->setText(QApplication::translate("Function_Room", "Capacity", 0, QApplication::UnicodeUTF8));
    pbFuncRoomSearch->setText(QApplication::translate("Function_Room", "Search", 0, QApplication::UnicodeUTF8));
    cbSearchVacant->clear();
    cbSearchVacant->addItem(QApplication::translate("Function_Room", "Vacant", 0, QApplication::UnicodeUTF8));
    cbSearchVacant->addItem(QApplication::translate("Function_Room", "Reserved", 0, QApplication::UnicodeUTF8));
    pbFuncRoomCancel->setText(QApplication::translate("Function_Room", "Cancel", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->clear();
    tblFuncRoomAvail->setColumnCount(6);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("Function_Room", "Function Room #", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("Function_Room", "Date", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("Function_Room", "Time", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setHorizontalHeaderItem(2, __colItem2);

    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    __colItem3->setText(QApplication::translate("Function_Room", "Capacity", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setHorizontalHeaderItem(3, __colItem3);

    QTableWidgetItem *__colItem4 = new QTableWidgetItem();
    __colItem4->setText(QApplication::translate("Function_Room", "Status", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setHorizontalHeaderItem(4, __colItem4);

    QTableWidgetItem *__colItem5 = new QTableWidgetItem();
    __colItem5->setText(QApplication::translate("Function_Room", "Bill Amount", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setHorizontalHeaderItem(5, __colItem5);
    tblFuncRoomAvail->setRowCount(4);

    QTableWidgetItem *__rowItem = new QTableWidgetItem();
    __rowItem->setText(QApplication::translate("Function_Room", "1", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setVerticalHeaderItem(0, __rowItem);

    QTableWidgetItem *__rowItem1 = new QTableWidgetItem();
    __rowItem1->setText(QApplication::translate("Function_Room", "2", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setVerticalHeaderItem(1, __rowItem1);

    QTableWidgetItem *__rowItem2 = new QTableWidgetItem();
    __rowItem2->setText(QApplication::translate("Function_Room", "3", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setVerticalHeaderItem(2, __rowItem2);

    QTableWidgetItem *__rowItem3 = new QTableWidgetItem();
    __rowItem3->setText(QApplication::translate("Function_Room", "4", 0, QApplication::UnicodeUTF8));
    tblFuncRoomAvail->setVerticalHeaderItem(3, __rowItem3);
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Function_Room", "Function Room Availability", 0, QApplication::UnicodeUTF8));
    RLDate->setText(QApplication::translate("Function_Room", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Date</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    pbRLsearch->setText(QApplication::translate("Function_Room", "Search", 0, QApplication::UnicodeUTF8));
    RLCustLastName->setText(QApplication::translate("Function_Room", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Last Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    pbRLclose->setText(QApplication::translate("Function_Room", "Close", 0, QApplication::UnicodeUTF8));
    pbRLclear->setText(QApplication::translate("Function_Room", "Clear", 0, QApplication::UnicodeUTF8));
    RLCustFirstName->setText(QApplication::translate("Function_Room", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">First Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    tblReserveList->clear();
    tblReserveList->setColumnCount(8);

    QTableWidgetItem *__colItem6 = new QTableWidgetItem();
    __colItem6->setText(QApplication::translate("Function_Room", "Function Room #", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(0, __colItem6);

    QTableWidgetItem *__colItem7 = new QTableWidgetItem();
    __colItem7->setText(QApplication::translate("Function_Room", "Capacity", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(1, __colItem7);

    QTableWidgetItem *__colItem8 = new QTableWidgetItem();
    __colItem8->setText(QApplication::translate("Function_Room", "Date", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(2, __colItem8);

    QTableWidgetItem *__colItem9 = new QTableWidgetItem();
    __colItem9->setText(QApplication::translate("Function_Room", " Time", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(3, __colItem9);

    QTableWidgetItem *__colItem10 = new QTableWidgetItem();
    __colItem10->setText(QApplication::translate("Function_Room", "First name", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(4, __colItem10);

    QTableWidgetItem *__colItem11 = new QTableWidgetItem();
    __colItem11->setText(QApplication::translate("Function_Room", "Last name", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(5, __colItem11);

    QTableWidgetItem *__colItem12 = new QTableWidgetItem();
    __colItem12->setText(QApplication::translate("Function_Room", "Hotel Room #", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(6, __colItem12);

    QTableWidgetItem *__colItem13 = new QTableWidgetItem();
    __colItem13->setText(QApplication::translate("Function_Room", "Bill Amount", 0, QApplication::UnicodeUTF8));
    tblReserveList->setHorizontalHeaderItem(7, __colItem13);
    tblReserveList->setRowCount(4);

    QTableWidgetItem *__rowItem4 = new QTableWidgetItem();
    __rowItem4->setText(QApplication::translate("Function_Room", "1", 0, QApplication::UnicodeUTF8));
    tblReserveList->setVerticalHeaderItem(0, __rowItem4);

    QTableWidgetItem *__rowItem5 = new QTableWidgetItem();
    __rowItem5->setText(QApplication::translate("Function_Room", "2", 0, QApplication::UnicodeUTF8));
    tblReserveList->setVerticalHeaderItem(1, __rowItem5);

    QTableWidgetItem *__rowItem6 = new QTableWidgetItem();
    __rowItem6->setText(QApplication::translate("Function_Room", "3", 0, QApplication::UnicodeUTF8));
    tblReserveList->setVerticalHeaderItem(2, __rowItem6);

    QTableWidgetItem *__rowItem7 = new QTableWidgetItem();
    __rowItem7->setText(QApplication::translate("Function_Room", "4", 0, QApplication::UnicodeUTF8));
    tblReserveList->setVerticalHeaderItem(3, __rowItem7);
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Function_Room", "Reserved list", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Function_Room);
    } // retranslateUi

};

namespace Ui {
    class Function_Room: public Ui_Function_Room {};
} // namespace Ui

#endif // UI_FUNCTION_ROOM_H
