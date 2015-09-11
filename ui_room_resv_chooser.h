#ifndef UI_ROOM_RESV_CHOOSER_H
#define UI_ROOM_RESV_CHOOSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Room_Resv_Chooser_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *topTabs;
    QWidget *newResvTab;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout;
    QLabel *fromDateLabel;
    QLabel *roomTypeLabel;
    QDateEdit *newFromDate;
    QComboBox *newRoomType;
    QLabel *toDateLabel;
    QDateEdit *newToDate;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QSpacerItem *spacerItem1;
    QPushButton *newFillButton;
    QTreeWidget *newResvResults;
    QWidget *findResvTab;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout2;
    QGridLayout *gridLayout1;
    QDateEdit *findFromDate;
    QLineEdit *findRoomNumber;
    QLabel *roomNumberLabel;
    QLineEdit *findFirstName;
    QDateEdit *findToDate;
    QLabel *firstNameLabel;
    QCheckBox *findDatesToggle;
    QLabel *lastNameLabel;
    QLineEdit *findLastName;
    QLabel *toDateLabel1;
    QLabel *fromDateLabel1;
    QLabel *reservationStatusLabel;
    QComboBox *findResvStatus;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout3;
    QLabel *label_6;
    QSpacerItem *spacerItem3;
    QPushButton *findFillButton;
    QTreeWidget *findResvResults;
    QWidget *checkInTab;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout4;
    QGridLayout *gridLayout2;
    QLabel *label_12;
    QDateEdit *checkinFromDate;
    QCheckBox *checkinDatesToggle;
    QLineEdit *checkinLastName;
    QDateEdit *checkinToDate;
    QLabel *label_13;
    QLabel *lastNameLabel1;
    QLineEdit *checkinRoomNumber;
    QLabel *roomNumberLabel1;
    QLineEdit *checkinFirstName;
    QLabel *firstNameLabel1;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout5;
    QLabel *label_22;
    QSpacerItem *spacerItem5;
    QPushButton *walkInButton;
    QPushButton *checkinFillButton;
    QTreeWidget *checkinResvResults;
    QWidget *checkOutTab;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout6;
    QGridLayout *gridLayout3;
    QLabel *label_17;
    QDateEdit *checkoutFromDate;
    QCheckBox *checkoutDatesToggle;
    QLineEdit *checkoutLastName;
    QDateEdit *checkoutToDate;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *checkoutRoomNumber;
    QLabel *label_20;
    QLineEdit *checkoutFirstName;
    QLabel *label_21;
    QSpacerItem *spacerItem6;
    QHBoxLayout *hboxLayout7;
    QLabel *label_29;
    QSpacerItem *spacerItem7;
    QPushButton *checkoutFillButton;
    QTreeWidget *checkoutResvResults;

    void setupUi(QWidget *Room_Resv_Chooser_Ui)
    {
    Room_Resv_Chooser_Ui->setObjectName(QString::fromUtf8("Room_Resv_Chooser_Ui"));
    Room_Resv_Chooser_Ui->resize(QSize(642, 559).expandedTo(Room_Resv_Chooser_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Room_Resv_Chooser_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    topTabs = new QTabWidget(Room_Resv_Chooser_Ui);
    topTabs->setObjectName(QString::fromUtf8("topTabs"));
    newResvTab = new QWidget();
    newResvTab->setObjectName(QString::fromUtf8("newResvTab"));
    vboxLayout1 = new QVBoxLayout(newResvTab);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(9);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    fromDateLabel = new QLabel(newResvTab);
    fromDateLabel->setObjectName(QString::fromUtf8("fromDateLabel"));

    gridLayout->addWidget(fromDateLabel, 0, 0, 1, 1);

    roomTypeLabel = new QLabel(newResvTab);
    roomTypeLabel->setObjectName(QString::fromUtf8("roomTypeLabel"));

    gridLayout->addWidget(roomTypeLabel, 2, 0, 1, 1);

    newFromDate = new QDateEdit(newResvTab);
    newFromDate->setObjectName(QString::fromUtf8("newFromDate"));

    gridLayout->addWidget(newFromDate, 0, 1, 1, 1);

    newRoomType = new QComboBox(newResvTab);
    newRoomType->setObjectName(QString::fromUtf8("newRoomType"));

    gridLayout->addWidget(newRoomType, 2, 1, 1, 1);

    toDateLabel = new QLabel(newResvTab);
    toDateLabel->setObjectName(QString::fromUtf8("toDateLabel"));

    gridLayout->addWidget(toDateLabel, 1, 0, 1, 1);

    newToDate = new QDateEdit(newResvTab);
    newToDate->setObjectName(QString::fromUtf8("newToDate"));

    gridLayout->addWidget(newToDate, 1, 1, 1, 1);


    hboxLayout->addLayout(gridLayout);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);


    vboxLayout1->addLayout(hboxLayout);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    label_3 = new QLabel(newResvTab);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    hboxLayout1->addWidget(label_3);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);

    newFillButton = new QPushButton(newResvTab);
    newFillButton->setObjectName(QString::fromUtf8("newFillButton"));

    hboxLayout1->addWidget(newFillButton);


    vboxLayout1->addLayout(hboxLayout1);

    newResvResults = new QTreeWidget(newResvTab);
    newResvResults->setObjectName(QString::fromUtf8("newResvResults"));
    newResvResults->setAlternatingRowColors(true);

    vboxLayout1->addWidget(newResvResults);

    topTabs->addTab(newResvTab, QApplication::translate("Room_Resv_Chooser_Ui", "New", 0, QApplication::UnicodeUTF8));
    findResvTab = new QWidget();
    findResvTab->setObjectName(QString::fromUtf8("findResvTab"));
    vboxLayout2 = new QVBoxLayout(findResvTab);
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(9);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    findFromDate = new QDateEdit(findResvTab);
    findFromDate->setObjectName(QString::fromUtf8("findFromDate"));

    gridLayout1->addWidget(findFromDate, 5, 1, 1, 1);

    findRoomNumber = new QLineEdit(findResvTab);
    findRoomNumber->setObjectName(QString::fromUtf8("findRoomNumber"));

    gridLayout1->addWidget(findRoomNumber, 2, 1, 1, 1);

    roomNumberLabel = new QLabel(findResvTab);
    roomNumberLabel->setObjectName(QString::fromUtf8("roomNumberLabel"));

    gridLayout1->addWidget(roomNumberLabel, 2, 0, 1, 1);

    findFirstName = new QLineEdit(findResvTab);
    findFirstName->setObjectName(QString::fromUtf8("findFirstName"));

    gridLayout1->addWidget(findFirstName, 0, 1, 1, 1);

    findToDate = new QDateEdit(findResvTab);
    findToDate->setObjectName(QString::fromUtf8("findToDate"));

    gridLayout1->addWidget(findToDate, 6, 1, 1, 1);

    firstNameLabel = new QLabel(findResvTab);
    firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));

    gridLayout1->addWidget(firstNameLabel, 0, 0, 1, 1);

    findDatesToggle = new QCheckBox(findResvTab);
    findDatesToggle->setObjectName(QString::fromUtf8("findDatesToggle"));

    gridLayout1->addWidget(findDatesToggle, 4, 1, 1, 1);

    lastNameLabel = new QLabel(findResvTab);
    lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));

    gridLayout1->addWidget(lastNameLabel, 1, 0, 1, 1);

    findLastName = new QLineEdit(findResvTab);
    findLastName->setObjectName(QString::fromUtf8("findLastName"));

    gridLayout1->addWidget(findLastName, 1, 1, 1, 1);

    toDateLabel1 = new QLabel(findResvTab);
    toDateLabel1->setObjectName(QString::fromUtf8("toDateLabel1"));

    gridLayout1->addWidget(toDateLabel1, 6, 0, 1, 1);

    fromDateLabel1 = new QLabel(findResvTab);
    fromDateLabel1->setObjectName(QString::fromUtf8("fromDateLabel1"));

    gridLayout1->addWidget(fromDateLabel1, 5, 0, 1, 1);

    reservationStatusLabel = new QLabel(findResvTab);
    reservationStatusLabel->setObjectName(QString::fromUtf8("reservationStatusLabel"));

    gridLayout1->addWidget(reservationStatusLabel, 3, 0, 1, 1);

    findResvStatus = new QComboBox(findResvTab);
    findResvStatus->setObjectName(QString::fromUtf8("findResvStatus"));

    gridLayout1->addWidget(findResvStatus, 3, 1, 1, 1);


    hboxLayout2->addLayout(gridLayout1);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem2);


    vboxLayout2->addLayout(hboxLayout2);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(0);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    label_6 = new QLabel(findResvTab);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    hboxLayout3->addWidget(label_6);

    spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem3);

    findFillButton = new QPushButton(findResvTab);
    findFillButton->setObjectName(QString::fromUtf8("findFillButton"));

    hboxLayout3->addWidget(findFillButton);


    vboxLayout2->addLayout(hboxLayout3);

    findResvResults = new QTreeWidget(findResvTab);
    findResvResults->setObjectName(QString::fromUtf8("findResvResults"));
    findResvResults->setAlternatingRowColors(true);

    vboxLayout2->addWidget(findResvResults);

    topTabs->addTab(findResvTab, QApplication::translate("Room_Resv_Chooser_Ui", "Find", 0, QApplication::UnicodeUTF8));
    checkInTab = new QWidget();
    checkInTab->setObjectName(QString::fromUtf8("checkInTab"));
    vboxLayout3 = new QVBoxLayout(checkInTab);
    vboxLayout3->setSpacing(6);
    vboxLayout3->setMargin(9);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(0);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    gridLayout2 = new QGridLayout();
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(0);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label_12 = new QLabel(checkInTab);
    label_12->setObjectName(QString::fromUtf8("label_12"));

    gridLayout2->addWidget(label_12, 5, 0, 1, 1);

    checkinFromDate = new QDateEdit(checkInTab);
    checkinFromDate->setObjectName(QString::fromUtf8("checkinFromDate"));

    gridLayout2->addWidget(checkinFromDate, 4, 1, 1, 1);

    checkinDatesToggle = new QCheckBox(checkInTab);
    checkinDatesToggle->setObjectName(QString::fromUtf8("checkinDatesToggle"));

    gridLayout2->addWidget(checkinDatesToggle, 3, 1, 1, 1);

    checkinLastName = new QLineEdit(checkInTab);
    checkinLastName->setObjectName(QString::fromUtf8("checkinLastName"));

    gridLayout2->addWidget(checkinLastName, 1, 1, 1, 1);

    checkinToDate = new QDateEdit(checkInTab);
    checkinToDate->setObjectName(QString::fromUtf8("checkinToDate"));

    gridLayout2->addWidget(checkinToDate, 5, 1, 1, 1);

    label_13 = new QLabel(checkInTab);
    label_13->setObjectName(QString::fromUtf8("label_13"));

    gridLayout2->addWidget(label_13, 4, 0, 1, 1);

    lastNameLabel1 = new QLabel(checkInTab);
    lastNameLabel1->setObjectName(QString::fromUtf8("lastNameLabel1"));

    gridLayout2->addWidget(lastNameLabel1, 1, 0, 1, 1);

    checkinRoomNumber = new QLineEdit(checkInTab);
    checkinRoomNumber->setObjectName(QString::fromUtf8("checkinRoomNumber"));

    gridLayout2->addWidget(checkinRoomNumber, 2, 1, 1, 1);

    roomNumberLabel1 = new QLabel(checkInTab);
    roomNumberLabel1->setObjectName(QString::fromUtf8("roomNumberLabel1"));

    gridLayout2->addWidget(roomNumberLabel1, 2, 0, 1, 1);

    checkinFirstName = new QLineEdit(checkInTab);
    checkinFirstName->setObjectName(QString::fromUtf8("checkinFirstName"));

    gridLayout2->addWidget(checkinFirstName, 0, 1, 1, 1);

    firstNameLabel1 = new QLabel(checkInTab);
    firstNameLabel1->setObjectName(QString::fromUtf8("firstNameLabel1"));

    gridLayout2->addWidget(firstNameLabel1, 0, 0, 1, 1);


    hboxLayout4->addLayout(gridLayout2);

    spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout4->addItem(spacerItem4);


    vboxLayout3->addLayout(hboxLayout4);

    hboxLayout5 = new QHBoxLayout();
    hboxLayout5->setSpacing(6);
    hboxLayout5->setMargin(0);
    hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
    label_22 = new QLabel(checkInTab);
    label_22->setObjectName(QString::fromUtf8("label_22"));

    hboxLayout5->addWidget(label_22);

    spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout5->addItem(spacerItem5);

    walkInButton = new QPushButton(checkInTab);
    walkInButton->setObjectName(QString::fromUtf8("walkInButton"));

    hboxLayout5->addWidget(walkInButton);

    checkinFillButton = new QPushButton(checkInTab);
    checkinFillButton->setObjectName(QString::fromUtf8("checkinFillButton"));

    hboxLayout5->addWidget(checkinFillButton);


    vboxLayout3->addLayout(hboxLayout5);

    checkinResvResults = new QTreeWidget(checkInTab);
    checkinResvResults->setObjectName(QString::fromUtf8("checkinResvResults"));
    checkinResvResults->setAlternatingRowColors(true);

    vboxLayout3->addWidget(checkinResvResults);

    topTabs->addTab(checkInTab, QApplication::translate("Room_Resv_Chooser_Ui", "Check-In", 0, QApplication::UnicodeUTF8));
    checkOutTab = new QWidget();
    checkOutTab->setObjectName(QString::fromUtf8("checkOutTab"));
    vboxLayout4 = new QVBoxLayout(checkOutTab);
    vboxLayout4->setSpacing(6);
    vboxLayout4->setMargin(9);
    vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
    hboxLayout6 = new QHBoxLayout();
    hboxLayout6->setSpacing(6);
    hboxLayout6->setMargin(0);
    hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
    gridLayout3 = new QGridLayout();
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(0);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    label_17 = new QLabel(checkOutTab);
    label_17->setObjectName(QString::fromUtf8("label_17"));

    gridLayout3->addWidget(label_17, 5, 0, 1, 1);

    checkoutFromDate = new QDateEdit(checkOutTab);
    checkoutFromDate->setObjectName(QString::fromUtf8("checkoutFromDate"));

    gridLayout3->addWidget(checkoutFromDate, 4, 1, 1, 1);

    checkoutDatesToggle = new QCheckBox(checkOutTab);
    checkoutDatesToggle->setObjectName(QString::fromUtf8("checkoutDatesToggle"));

    gridLayout3->addWidget(checkoutDatesToggle, 3, 1, 1, 1);

    checkoutLastName = new QLineEdit(checkOutTab);
    checkoutLastName->setObjectName(QString::fromUtf8("checkoutLastName"));

    gridLayout3->addWidget(checkoutLastName, 1, 1, 1, 1);

    checkoutToDate = new QDateEdit(checkOutTab);
    checkoutToDate->setObjectName(QString::fromUtf8("checkoutToDate"));

    gridLayout3->addWidget(checkoutToDate, 5, 1, 1, 1);

    label_18 = new QLabel(checkOutTab);
    label_18->setObjectName(QString::fromUtf8("label_18"));

    gridLayout3->addWidget(label_18, 4, 0, 1, 1);

    label_19 = new QLabel(checkOutTab);
    label_19->setObjectName(QString::fromUtf8("label_19"));

    gridLayout3->addWidget(label_19, 1, 0, 1, 1);

    checkoutRoomNumber = new QLineEdit(checkOutTab);
    checkoutRoomNumber->setObjectName(QString::fromUtf8("checkoutRoomNumber"));

    gridLayout3->addWidget(checkoutRoomNumber, 2, 1, 1, 1);

    label_20 = new QLabel(checkOutTab);
    label_20->setObjectName(QString::fromUtf8("label_20"));

    gridLayout3->addWidget(label_20, 2, 0, 1, 1);

    checkoutFirstName = new QLineEdit(checkOutTab);
    checkoutFirstName->setObjectName(QString::fromUtf8("checkoutFirstName"));

    gridLayout3->addWidget(checkoutFirstName, 0, 1, 1, 1);

    label_21 = new QLabel(checkOutTab);
    label_21->setObjectName(QString::fromUtf8("label_21"));

    gridLayout3->addWidget(label_21, 0, 0, 1, 1);


    hboxLayout6->addLayout(gridLayout3);

    spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout6->addItem(spacerItem6);


    vboxLayout4->addLayout(hboxLayout6);

    hboxLayout7 = new QHBoxLayout();
    hboxLayout7->setSpacing(6);
    hboxLayout7->setMargin(0);
    hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
    label_29 = new QLabel(checkOutTab);
    label_29->setObjectName(QString::fromUtf8("label_29"));

    hboxLayout7->addWidget(label_29);

    spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout7->addItem(spacerItem7);

    checkoutFillButton = new QPushButton(checkOutTab);
    checkoutFillButton->setObjectName(QString::fromUtf8("checkoutFillButton"));

    hboxLayout7->addWidget(checkoutFillButton);


    vboxLayout4->addLayout(hboxLayout7);

    checkoutResvResults = new QTreeWidget(checkOutTab);
    checkoutResvResults->setObjectName(QString::fromUtf8("checkoutResvResults"));
    checkoutResvResults->setAlternatingRowColors(true);

    vboxLayout4->addWidget(checkoutResvResults);

    topTabs->addTab(checkOutTab, QApplication::translate("Room_Resv_Chooser_Ui", "Check-Out", 0, QApplication::UnicodeUTF8));

    vboxLayout->addWidget(topTabs);

    QWidget::setTabOrder(topTabs, newFromDate);
    QWidget::setTabOrder(newFromDate, newToDate);
    QWidget::setTabOrder(newToDate, newRoomType);
    QWidget::setTabOrder(newRoomType, newFillButton);
    QWidget::setTabOrder(newFillButton, newResvResults);
    QWidget::setTabOrder(newResvResults, findFirstName);
    QWidget::setTabOrder(findFirstName, findLastName);
    QWidget::setTabOrder(findLastName, findRoomNumber);
    QWidget::setTabOrder(findRoomNumber, findResvStatus);
    QWidget::setTabOrder(findResvStatus, findDatesToggle);
    QWidget::setTabOrder(findDatesToggle, findFromDate);
    QWidget::setTabOrder(findFromDate, findToDate);
    QWidget::setTabOrder(findToDate, findFillButton);
    QWidget::setTabOrder(findFillButton, findResvResults);
    QWidget::setTabOrder(findResvResults, checkinFirstName);
    QWidget::setTabOrder(checkinFirstName, checkinLastName);
    QWidget::setTabOrder(checkinLastName, checkinRoomNumber);
    QWidget::setTabOrder(checkinRoomNumber, checkinDatesToggle);
    QWidget::setTabOrder(checkinDatesToggle, checkinFromDate);
    QWidget::setTabOrder(checkinFromDate, checkinToDate);
    QWidget::setTabOrder(checkinToDate, walkInButton);
    QWidget::setTabOrder(walkInButton, checkinFillButton);
    QWidget::setTabOrder(checkinFillButton, checkinResvResults);
    QWidget::setTabOrder(checkinResvResults, checkoutFirstName);
    QWidget::setTabOrder(checkoutFirstName, checkoutLastName);
    QWidget::setTabOrder(checkoutLastName, checkoutRoomNumber);
    QWidget::setTabOrder(checkoutRoomNumber, checkoutDatesToggle);
    QWidget::setTabOrder(checkoutDatesToggle, checkoutFromDate);
    QWidget::setTabOrder(checkoutFromDate, checkoutToDate);
    QWidget::setTabOrder(checkoutToDate, checkoutFillButton);
    QWidget::setTabOrder(checkoutFillButton, checkoutResvResults);
    retranslateUi(Room_Resv_Chooser_Ui);

    QMetaObject::connectSlotsByName(Room_Resv_Chooser_Ui);
    } // setupUi

    void retranslateUi(QWidget *Room_Resv_Chooser_Ui)
    {
    Room_Resv_Chooser_Ui->setWindowTitle(QApplication::translate("Room_Resv_Chooser_Ui", "Form", 0, QApplication::UnicodeUTF8));
    fromDateLabel->setText(QApplication::translate("Room_Resv_Chooser_Ui", "From Date", 0, QApplication::UnicodeUTF8));
    roomTypeLabel->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Room Type", 0, QApplication::UnicodeUTF8));
    newFromDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    newRoomType->clear();
    newRoomType->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Single", 0, QApplication::UnicodeUTF8));
    newRoomType->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Double", 0, QApplication::UnicodeUTF8));
    newRoomType->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Something Else", 0, QApplication::UnicodeUTF8));
    newRoomType->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "ANY", 0, QApplication::UnicodeUTF8));
    toDateLabel->setText(QApplication::translate("Room_Resv_Chooser_Ui", "To Date", 0, QApplication::UnicodeUTF8));
    newToDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Room Availability", 0, QApplication::UnicodeUTF8));
    newFillButton->setText(QApplication::translate("Room_Resv_Chooser_Ui", "F&ind", 0, QApplication::UnicodeUTF8));
    newResvResults->headerItem()->setText(0, QApplication::translate("Room_Resv_Chooser_Ui", "Room No.", 0, QApplication::UnicodeUTF8));
    newResvResults->headerItem()->setText(1, QApplication::translate("Room_Resv_Chooser_Ui", "Description", 0, QApplication::UnicodeUTF8));
    newResvResults->headerItem()->setText(2, QApplication::translate("Room_Resv_Chooser_Ui", "Status", 0, QApplication::UnicodeUTF8));
    topTabs->setTabText(topTabs->indexOf(newResvTab), QApplication::translate("Room_Resv_Chooser_Ui", "New", 0, QApplication::UnicodeUTF8));
    findFromDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    roomNumberLabel->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Room Number", 0, QApplication::UnicodeUTF8));
    findToDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    firstNameLabel->setText(QApplication::translate("Room_Resv_Chooser_Ui", "First Name", 0, QApplication::UnicodeUTF8));
    findDatesToggle->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Search Using Dates", 0, QApplication::UnicodeUTF8));
    lastNameLabel->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Last Name", 0, QApplication::UnicodeUTF8));
    toDateLabel1->setText(QApplication::translate("Room_Resv_Chooser_Ui", "To Date", 0, QApplication::UnicodeUTF8));
    fromDateLabel1->setText(QApplication::translate("Room_Resv_Chooser_Ui", "From Date", 0, QApplication::UnicodeUTF8));
    reservationStatusLabel->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Reservation Status", 0, QApplication::UnicodeUTF8));
    findResvStatus->clear();
    findResvStatus->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Ready", 0, QApplication::UnicodeUTF8));
    findResvStatus->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Late", 0, QApplication::UnicodeUTF8));
    findResvStatus->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Active", 0, QApplication::UnicodeUTF8));
    findResvStatus->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Cancelled", 0, QApplication::UnicodeUTF8));
    findResvStatus->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "Complete", 0, QApplication::UnicodeUTF8));
    findResvStatus->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "ANY Incomplete", 0, QApplication::UnicodeUTF8));
    findResvStatus->addItem(QApplication::translate("Room_Resv_Chooser_Ui", "ANY", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Reserved Rooms", 0, QApplication::UnicodeUTF8));
    findFillButton->setText(QApplication::translate("Room_Resv_Chooser_Ui", "F&ind", 0, QApplication::UnicodeUTF8));
    findResvResults->headerItem()->setText(0, QApplication::translate("Room_Resv_Chooser_Ui", "Room No.", 0, QApplication::UnicodeUTF8));
    findResvResults->headerItem()->setText(1, QApplication::translate("Room_Resv_Chooser_Ui", "Guest", 0, QApplication::UnicodeUTF8));
    findResvResults->headerItem()->setText(2, QApplication::translate("Room_Resv_Chooser_Ui", "Reserved By", 0, QApplication::UnicodeUTF8));
    findResvResults->headerItem()->setText(3, QApplication::translate("Room_Resv_Chooser_Ui", "Status", 0, QApplication::UnicodeUTF8));
    topTabs->setTabText(topTabs->indexOf(findResvTab), QApplication::translate("Room_Resv_Chooser_Ui", "Find", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("Room_Resv_Chooser_Ui", "To Date", 0, QApplication::UnicodeUTF8));
    checkinFromDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    checkinDatesToggle->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Search Using Dates", 0, QApplication::UnicodeUTF8));
    checkinToDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("Room_Resv_Chooser_Ui", "From Date", 0, QApplication::UnicodeUTF8));
    lastNameLabel1->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Last Name", 0, QApplication::UnicodeUTF8));
    roomNumberLabel1->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Room Number", 0, QApplication::UnicodeUTF8));
    firstNameLabel1->setText(QApplication::translate("Room_Resv_Chooser_Ui", "First Name", 0, QApplication::UnicodeUTF8));
    label_22->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Check In Guests", 0, QApplication::UnicodeUTF8));
    walkInButton->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Walk-In", 0, QApplication::UnicodeUTF8));
    checkinFillButton->setText(QApplication::translate("Room_Resv_Chooser_Ui", "F&ind", 0, QApplication::UnicodeUTF8));
    checkinResvResults->headerItem()->setText(0, QApplication::translate("Room_Resv_Chooser_Ui", "Room No.", 0, QApplication::UnicodeUTF8));
    checkinResvResults->headerItem()->setText(1, QApplication::translate("Room_Resv_Chooser_Ui", "Guest", 0, QApplication::UnicodeUTF8));
    checkinResvResults->headerItem()->setText(2, QApplication::translate("Room_Resv_Chooser_Ui", "Reserved By", 0, QApplication::UnicodeUTF8));
    checkinResvResults->headerItem()->setText(3, QApplication::translate("Room_Resv_Chooser_Ui", "Status", 0, QApplication::UnicodeUTF8));
    topTabs->setTabText(topTabs->indexOf(checkInTab), QApplication::translate("Room_Resv_Chooser_Ui", "Check-In", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("Room_Resv_Chooser_Ui", "To Date", 0, QApplication::UnicodeUTF8));
    checkoutFromDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    checkoutDatesToggle->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Search Using Dates", 0, QApplication::UnicodeUTF8));
    checkoutToDate->setDisplayFormat(QApplication::translate("Room_Resv_Chooser_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    label_18->setText(QApplication::translate("Room_Resv_Chooser_Ui", "From Date", 0, QApplication::UnicodeUTF8));
    label_19->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Last Name", 0, QApplication::UnicodeUTF8));
    label_20->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Room Number", 0, QApplication::UnicodeUTF8));
    label_21->setText(QApplication::translate("Room_Resv_Chooser_Ui", "First Name", 0, QApplication::UnicodeUTF8));
    label_29->setText(QApplication::translate("Room_Resv_Chooser_Ui", "Check Out Guests", 0, QApplication::UnicodeUTF8));
    checkoutFillButton->setText(QApplication::translate("Room_Resv_Chooser_Ui", "F&ind", 0, QApplication::UnicodeUTF8));
    checkoutResvResults->headerItem()->setText(0, QApplication::translate("Room_Resv_Chooser_Ui", "Room No.", 0, QApplication::UnicodeUTF8));
    checkoutResvResults->headerItem()->setText(1, QApplication::translate("Room_Resv_Chooser_Ui", "Guest", 0, QApplication::UnicodeUTF8));
    checkoutResvResults->headerItem()->setText(2, QApplication::translate("Room_Resv_Chooser_Ui", "Reserved By", 0, QApplication::UnicodeUTF8));
    checkoutResvResults->headerItem()->setText(3, QApplication::translate("Room_Resv_Chooser_Ui", "Status", 0, QApplication::UnicodeUTF8));
    topTabs->setTabText(topTabs->indexOf(checkOutTab), QApplication::translate("Room_Resv_Chooser_Ui", "Check-Out", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Room_Resv_Chooser_Ui);
    } // retranslateUi

};

namespace Ui {
    class Room_Resv_Chooser_Ui: public Ui_Room_Resv_Chooser_Ui {};
} // namespace Ui

#endif // UI_ROOM_RESV_CHOOSER_H
