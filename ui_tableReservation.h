#ifndef UI_TABLERESERVATION_H
#define UI_TABLERESERVATION_H

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
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

class Ui_Table_Reservation
{
public:
    QTabWidget *tabReserve;
    QWidget *tab;
    QPushButton *pbCancel;
    QGroupBox *groupBox;
    QDateEdit *dtSearchDate;
    QPushButton *pbClearTable_2;
    QPushButton *pbSearchTableAvail;
    QLineEdit *lnCapacity;
    QComboBox *cbRestauarantName;
    QComboBox *cbStatus;
    QPushButton *pbClearTableAvail;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QTimeEdit *tmSearchTime;
    QPushButton *pbReserve;
    QPushButton *pbAddWaitlist;
    QTableWidget *tblTableAvailability;
    QWidget *tab_3;
    QPushButton *pbReseveCancel;
    QDateEdit *dtSearchReserve;
    QLabel *label_11;
    QLineEdit *lnCustFirstName;
    QLabel *label_12;
    QLineEdit *lnCustLastName;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lnReserveNum;
    QLabel *label_6;
    QTimeEdit *tmSearchReserve;
    QPushButton *pbReserveSearch;
    QPushButton *pbReserveSearchClear;
    QPushButton *pbClearTable;
    QTableWidget *tblReserve;
    QWidget *tab_2;
    QTableWidget *tblWaitList;
    QPushButton *pbDelWaitlist;

    void setupUi(QWidget *Table_Reservation)
    {
    Table_Reservation->setObjectName(QString::fromUtf8("Table_Reservation"));
    Table_Reservation->resize(QSize(799, 487).expandedTo(Table_Reservation->minimumSizeHint()));
    tabReserve = new QTabWidget(Table_Reservation);
    tabReserve->setObjectName(QString::fromUtf8("tabReserve"));
    tabReserve->setGeometry(QRect(10, 20, 781, 431));
    tabReserve->setTabPosition(QTabWidget::North);
    tabReserve->setTabShape(QTabWidget::Rounded);
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    pbCancel = new QPushButton(tab);
    pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
    pbCancel->setGeometry(QRect(470, 370, 75, 23));
    groupBox = new QGroupBox(tab);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(10, 10, 561, 131));
    QFont font;
    font.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font.setPointSize(10);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    groupBox->setFont(font);
    dtSearchDate = new QDateEdit(groupBox);
    dtSearchDate->setObjectName(QString::fromUtf8("dtSearchDate"));
    dtSearchDate->setGeometry(QRect(120, 50, 111, 23));
    pbClearTable_2 = new QPushButton(groupBox);
    pbClearTable_2->setObjectName(QString::fromUtf8("pbClearTable_2"));
    pbClearTable_2->setGeometry(QRect(620, 360, 75, 23));
    pbSearchTableAvail = new QPushButton(groupBox);
    pbSearchTableAvail->setObjectName(QString::fromUtf8("pbSearchTableAvail"));
    pbSearchTableAvail->setGeometry(QRect(450, 90, 75, 23));
    lnCapacity = new QLineEdit(groupBox);
    lnCapacity->setObjectName(QString::fromUtf8("lnCapacity"));
    lnCapacity->setGeometry(QRect(120, 20, 113, 20));
    cbRestauarantName = new QComboBox(groupBox);
    cbRestauarantName->setObjectName(QString::fromUtf8("cbRestauarantName"));
    cbRestauarantName->setGeometry(QRect(380, 20, 151, 22));
    cbStatus = new QComboBox(groupBox);
    cbStatus->setObjectName(QString::fromUtf8("cbStatus"));
    cbStatus->setGeometry(QRect(380, 50, 151, 22));
    cbStatus->setCursor(QCursor(static_cast<Qt::CursorShape>(10)));
    pbClearTableAvail = new QPushButton(groupBox);
    pbClearTableAvail->setObjectName(QString::fromUtf8("pbClearTableAvail"));
    pbClearTableAvail->setGeometry(QRect(370, 90, 75, 23));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(50, 20, 61, 16));
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(50, 50, 68, 25));
    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(270, 20, 111, 17));
    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(300, 50, 71, 20));
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(50, 90, 43, 23));
    tmSearchTime = new QTimeEdit(groupBox);
    tmSearchTime->setObjectName(QString::fromUtf8("tmSearchTime"));
    tmSearchTime->setGeometry(QRect(120, 90, 111, 23));
    pbReserve = new QPushButton(tab);
    pbReserve->setObjectName(QString::fromUtf8("pbReserve"));
    pbReserve->setGeometry(QRect(300, 370, 75, 23));
    pbAddWaitlist = new QPushButton(tab);
    pbAddWaitlist->setObjectName(QString::fromUtf8("pbAddWaitlist"));
    pbAddWaitlist->setGeometry(QRect(380, 370, 78, 23));
    tblTableAvailability = new QTableWidget(tab);
    tblTableAvailability->setObjectName(QString::fromUtf8("tblTableAvailability"));
    tblTableAvailability->setGeometry(QRect(10, 150, 551, 201));
    QFont font1;
    font1.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font1.setPointSize(9);
    font1.setBold(false);
    font1.setItalic(false);
    font1.setUnderline(false);
    font1.setWeight(50);
    font1.setStrikeOut(false);
    tblTableAvailability->setFont(font1);
    tblTableAvailability->setLineWidth(1);
    tblTableAvailability->setSelectionBehavior(QAbstractItemView::SelectRows);
    tabReserve->addTab(tab, QApplication::translate("Table_Reservation", "Table Availability", 0, QApplication::UnicodeUTF8));
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    pbReseveCancel = new QPushButton(tab_3);
    pbReseveCancel->setObjectName(QString::fromUtf8("pbReseveCancel"));
    pbReseveCancel->setGeometry(QRect(680, 340, 75, 23));
    dtSearchReserve = new QDateEdit(tab_3);
    dtSearchReserve->setObjectName(QString::fromUtf8("dtSearchReserve"));
    dtSearchReserve->setGeometry(QRect(460, 30, 110, 22));
    label_11 = new QLabel(tab_3);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(30, 30, 92, 22));
    lnCustFirstName = new QLineEdit(tab_3);
    lnCustFirstName->setObjectName(QString::fromUtf8("lnCustFirstName"));
    lnCustFirstName->setGeometry(QRect(130, 30, 201, 20));
    label_12 = new QLabel(tab_3);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(30, 60, 92, 22));
    lnCustLastName = new QLineEdit(tab_3);
    lnCustLastName->setObjectName(QString::fromUtf8("lnCustLastName"));
    lnCustLastName->setGeometry(QRect(130, 60, 201, 20));
    label_13 = new QLabel(tab_3);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setGeometry(QRect(390, 30, 41, 22));
    label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    label_14 = new QLabel(tab_3);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(20, 90, 81, 22));
    label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    lnReserveNum = new QLineEdit(tab_3);
    lnReserveNum->setObjectName(QString::fromUtf8("lnReserveNum"));
    lnReserveNum->setGeometry(QRect(130, 90, 113, 20));
    label_6 = new QLabel(tab_3);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(400, 60, 31, 23));
    label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    tmSearchReserve = new QTimeEdit(tab_3);
    tmSearchReserve->setObjectName(QString::fromUtf8("tmSearchReserve"));
    tmSearchReserve->setGeometry(QRect(460, 60, 111, 23));
    pbReserveSearch = new QPushButton(tab_3);
    pbReserveSearch->setObjectName(QString::fromUtf8("pbReserveSearch"));
    pbReserveSearch->setGeometry(QRect(630, 90, 75, 23));
    pbReserveSearchClear = new QPushButton(tab_3);
    pbReserveSearchClear->setObjectName(QString::fromUtf8("pbReserveSearchClear"));
    pbReserveSearchClear->setGeometry(QRect(630, 60, 75, 23));
    pbClearTable = new QPushButton(tab_3);
    pbClearTable->setObjectName(QString::fromUtf8("pbClearTable"));
    pbClearTable->setGeometry(QRect(600, 340, 75, 23));
    tblReserve = new QTableWidget(tab_3);
    tblReserve->setObjectName(QString::fromUtf8("tblReserve"));
    tblReserve->setGeometry(QRect(10, 130, 721, 161));
    QFont font2;
    font2.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font2.setPointSize(9);
    font2.setBold(false);
    font2.setItalic(false);
    font2.setUnderline(false);
    font2.setWeight(50);
    font2.setStrikeOut(false);
    tblReserve->setFont(font2);
    tblReserve->setLineWidth(1);
    tabReserve->addTab(tab_3, QApplication::translate("Table_Reservation", "Reserved list", 0, QApplication::UnicodeUTF8));
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tblWaitList = new QTableWidget(tab_2);
    tblWaitList->setObjectName(QString::fromUtf8("tblWaitList"));
    tblWaitList->setGeometry(QRect(20, 60, 531, 161));
    QFont font3;
    font3.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font3.setPointSize(9);
    font3.setBold(false);
    font3.setItalic(false);
    font3.setUnderline(false);
    font3.setWeight(50);
    font3.setStrikeOut(false);
    tblWaitList->setFont(font3);
    tblWaitList->setLineWidth(1);
    pbDelWaitlist = new QPushButton(tab_2);
    pbDelWaitlist->setObjectName(QString::fromUtf8("pbDelWaitlist"));
    pbDelWaitlist->setGeometry(QRect(370, 260, 75, 23));
    tabReserve->addTab(tab_2, QApplication::translate("Table_Reservation", "Wait list", 0, QApplication::UnicodeUTF8));
    label->setBuddy(lnCapacity);
    label_2->setBuddy(dtSearchDate);
    label_3->setBuddy(cbRestauarantName);
    label_5->setBuddy(cbStatus);
    label_4->setBuddy(tmSearchTime);
    label_11->setBuddy(lnCustFirstName);
    label_12->setBuddy(lnCustLastName);
    label_13->setBuddy(dtSearchReserve);
    label_14->setBuddy(lnReserveNum);
    label_6->setBuddy(tmSearchReserve);
    retranslateUi(Table_Reservation);
    QObject::connect(tblTableAvailability, SIGNAL(doubleClicked(QModelIndex)), pbReserve, SLOT(click()));
    QObject::connect(pbCancel, SIGNAL(clicked()), Table_Reservation, SLOT(close()));

    QMetaObject::connectSlotsByName(Table_Reservation);
    } // setupUi

    void retranslateUi(QWidget *Table_Reservation)
    {
    Table_Reservation->setWindowTitle(QApplication::translate("Table_Reservation", "table_reservation", 0, QApplication::UnicodeUTF8));
    pbCancel->setText(QApplication::translate("Table_Reservation", "Cancel", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Table_Reservation", "Search", 0, QApplication::UnicodeUTF8));
    pbClearTable_2->setText(QApplication::translate("Table_Reservation", "Clear", 0, QApplication::UnicodeUTF8));
    pbSearchTableAvail->setText(QApplication::translate("Table_Reservation", "Search", 0, QApplication::UnicodeUTF8));
    cbStatus->clear();
    cbStatus->addItem(QApplication::translate("Table_Reservation", "Open", 0, QApplication::UnicodeUTF8));
    cbStatus->addItem(QApplication::translate("Table_Reservation", "Occupied", 0, QApplication::UnicodeUTF8));
    pbClearTableAvail->setText(QApplication::translate("Table_Reservation", "Clear", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Table_Reservation", "Capacity", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Table_Reservation", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Date</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Table_Reservation", "Restaurant Name", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Table_Reservation", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Table_Reservation", "Time", 0, QApplication::UnicodeUTF8));
    pbReserve->setText(QApplication::translate("Table_Reservation", "Reserve", 0, QApplication::UnicodeUTF8));
    pbAddWaitlist->setText(QApplication::translate("Table_Reservation", "Add to Wail list", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->clear();
    tblTableAvailability->setColumnCount(5);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("Table_Reservation", "Table #", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("Table_Reservation", "Capacity", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("Table_Reservation", "Date", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setHorizontalHeaderItem(2, __colItem2);

    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    __colItem3->setText(QApplication::translate("Table_Reservation", "Time", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setHorizontalHeaderItem(3, __colItem3);

    QTableWidgetItem *__colItem4 = new QTableWidgetItem();
    __colItem4->setText(QApplication::translate("Table_Reservation", "Status", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setHorizontalHeaderItem(4, __colItem4);
    tblTableAvailability->setRowCount(6);

    QTableWidgetItem *__rowItem = new QTableWidgetItem();
    __rowItem->setText(QApplication::translate("Table_Reservation", "1", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setVerticalHeaderItem(0, __rowItem);

    QTableWidgetItem *__rowItem1 = new QTableWidgetItem();
    __rowItem1->setText(QApplication::translate("Table_Reservation", "2", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setVerticalHeaderItem(1, __rowItem1);

    QTableWidgetItem *__rowItem2 = new QTableWidgetItem();
    __rowItem2->setText(QApplication::translate("Table_Reservation", "3", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setVerticalHeaderItem(2, __rowItem2);

    QTableWidgetItem *__rowItem3 = new QTableWidgetItem();
    __rowItem3->setText(QApplication::translate("Table_Reservation", "4", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setVerticalHeaderItem(3, __rowItem3);

    QTableWidgetItem *__rowItem4 = new QTableWidgetItem();
    __rowItem4->setText(QApplication::translate("Table_Reservation", "5", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setVerticalHeaderItem(4, __rowItem4);

    QTableWidgetItem *__rowItem5 = new QTableWidgetItem();
    __rowItem5->setText(QApplication::translate("Table_Reservation", "6", 0, QApplication::UnicodeUTF8));
    tblTableAvailability->setVerticalHeaderItem(5, __rowItem5);
    tabReserve->setTabText(tabReserve->indexOf(tab), QApplication::translate("Table_Reservation", "Table Availability", 0, QApplication::UnicodeUTF8));
    pbReseveCancel->setText(QApplication::translate("Table_Reservation", "Cancel", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("Table_Reservation", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">First Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("Table_Reservation", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Last Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("Table_Reservation", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Date</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("Table_Reservation", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Reservation #</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Table_Reservation", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Time</p></body></html>", 0, QApplication::UnicodeUTF8));
    pbReserveSearch->setText(QApplication::translate("Table_Reservation", "Search", 0, QApplication::UnicodeUTF8));
    pbReserveSearchClear->setText(QApplication::translate("Table_Reservation", "Clear", 0, QApplication::UnicodeUTF8));
    pbClearTable->setText(QApplication::translate("Table_Reservation", "Clear", 0, QApplication::UnicodeUTF8));
    tblReserve->clear();
    tblReserve->setColumnCount(8);

    QTableWidgetItem *__colItem5 = new QTableWidgetItem();
    __colItem5->setText(QApplication::translate("Table_Reservation", "Table #", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(0, __colItem5);

    QTableWidgetItem *__colItem6 = new QTableWidgetItem();
    __colItem6->setText(QApplication::translate("Table_Reservation", "Capacity", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(1, __colItem6);

    QTableWidgetItem *__colItem7 = new QTableWidgetItem();
    __colItem7->setText(QApplication::translate("Table_Reservation", "Date", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(2, __colItem7);

    QTableWidgetItem *__colItem8 = new QTableWidgetItem();
    __colItem8->setText(QApplication::translate("Table_Reservation", " Time", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(3, __colItem8);

    QTableWidgetItem *__colItem9 = new QTableWidgetItem();
    __colItem9->setText(QApplication::translate("Table_Reservation", "First name", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(4, __colItem9);

    QTableWidgetItem *__colItem10 = new QTableWidgetItem();
    __colItem10->setText(QApplication::translate("Table_Reservation", "Last name", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(5, __colItem10);

    QTableWidgetItem *__colItem11 = new QTableWidgetItem();
    __colItem11->setText(QApplication::translate("Table_Reservation", "Hotel Room #", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(6, __colItem11);

    QTableWidgetItem *__colItem12 = new QTableWidgetItem();
    __colItem12->setText(QApplication::translate("Table_Reservation", "Bill Amount", 0, QApplication::UnicodeUTF8));
    tblReserve->setHorizontalHeaderItem(7, __colItem12);
    tblReserve->setRowCount(2);

    QTableWidgetItem *__rowItem6 = new QTableWidgetItem();
    __rowItem6->setText(QApplication::translate("Table_Reservation", "1", 0, QApplication::UnicodeUTF8));
    tblReserve->setVerticalHeaderItem(0, __rowItem6);

    QTableWidgetItem *__rowItem7 = new QTableWidgetItem();
    __rowItem7->setText(QApplication::translate("Table_Reservation", "2", 0, QApplication::UnicodeUTF8));
    tblReserve->setVerticalHeaderItem(1, __rowItem7);
    tabReserve->setTabText(tabReserve->indexOf(tab_3), QApplication::translate("Table_Reservation", "Reserved list", 0, QApplication::UnicodeUTF8));
    tblWaitList->clear();
    tblWaitList->setColumnCount(5);

    QTableWidgetItem *__colItem13 = new QTableWidgetItem();
    __colItem13->setText(QApplication::translate("Table_Reservation", "Wait list #", 0, QApplication::UnicodeUTF8));
    tblWaitList->setHorizontalHeaderItem(0, __colItem13);

    QTableWidgetItem *__colItem14 = new QTableWidgetItem();
    __colItem14->setText(QApplication::translate("Table_Reservation", "Capacity", 0, QApplication::UnicodeUTF8));
    tblWaitList->setHorizontalHeaderItem(1, __colItem14);

    QTableWidgetItem *__colItem15 = new QTableWidgetItem();
    __colItem15->setText(QApplication::translate("Table_Reservation", "First name", 0, QApplication::UnicodeUTF8));
    tblWaitList->setHorizontalHeaderItem(2, __colItem15);

    QTableWidgetItem *__colItem16 = new QTableWidgetItem();
    __colItem16->setText(QApplication::translate("Table_Reservation", "Last name", 0, QApplication::UnicodeUTF8));
    tblWaitList->setHorizontalHeaderItem(3, __colItem16);

    QTableWidgetItem *__colItem17 = new QTableWidgetItem();
    __colItem17->setText(QApplication::translate("Table_Reservation", "Hotel Room #", 0, QApplication::UnicodeUTF8));
    tblWaitList->setHorizontalHeaderItem(4, __colItem17);
    tblWaitList->setRowCount(4);

    QTableWidgetItem *__rowItem8 = new QTableWidgetItem();
    __rowItem8->setText(QApplication::translate("Table_Reservation", "1", 0, QApplication::UnicodeUTF8));
    tblWaitList->setVerticalHeaderItem(0, __rowItem8);

    QTableWidgetItem *__rowItem9 = new QTableWidgetItem();
    __rowItem9->setText(QApplication::translate("Table_Reservation", "2", 0, QApplication::UnicodeUTF8));
    tblWaitList->setVerticalHeaderItem(1, __rowItem9);

    QTableWidgetItem *__rowItem10 = new QTableWidgetItem();
    __rowItem10->setText(QApplication::translate("Table_Reservation", "3", 0, QApplication::UnicodeUTF8));
    tblWaitList->setVerticalHeaderItem(2, __rowItem10);

    QTableWidgetItem *__rowItem11 = new QTableWidgetItem();
    __rowItem11->setText(QApplication::translate("Table_Reservation", "4", 0, QApplication::UnicodeUTF8));
    tblWaitList->setVerticalHeaderItem(3, __rowItem11);
    pbDelWaitlist->setText(QApplication::translate("Table_Reservation", "Delete", 0, QApplication::UnicodeUTF8));
    tabReserve->setTabText(tabReserve->indexOf(tab_2), QApplication::translate("Table_Reservation", "Wait list", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Table_Reservation);
    } // retranslateUi

};

namespace Ui {
    class Table_Reservation: public Ui_Table_Reservation {};
} // namespace Ui

#endif // UI_TABLERESERVATION_H
