#ifndef UI_HOTEL_INFO_H
#define UI_HOTEL_INFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Hotel_Info_Ui
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QTabWidget *Owner;
    QWidget *tab;
    QWidget *widget;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout;
    QLabel *label_25;
    QLineEdit *adrsLineEdit;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout1;
    QLabel *label_26;
    QLineEdit *cityLineEdit;
    QVBoxLayout *vboxLayout2;
    QLabel *label_27;
    QComboBox *stateComboBox;
    QVBoxLayout *vboxLayout3;
    QLabel *label_28;
    QLineEdit *codeLineEdit;
    QLabel *label_22;
    QLineEdit *countryLineEdit;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLabel *label;
    QGridLayout *gridLayout1;
    QLabel *label_23;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_5;
    QLabel *label_9;
    QLineEdit *lineEdit_14;
    QLabel *label_7;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_6;
    QTextEdit *textEdit;
    QPushButton *saveHotelInfo;
    QWidget *tab_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QTableWidget *ownerTable;
    QPushButton *delOwnerButton;
    QPushButton *addOwnerButton;
    QPushButton *saveOwnerInfo;
    QWidget *tab_4;
    QGroupBox *groupBox_2;
    QLabel *label_17;
    QLabel *label_20;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_12;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_34;
    QDateTimeEdit *dateTimeEdit_2;
    QGroupBox *groupBox_6;
    QTableWidget *roomTypesTable;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit_2;
    QPushButton *addRoomType;
    QPushButton *delRoomType;
    QPushButton *saveRoomTypes;
    QPushButton *saveRoomTypes_2;
    QWidget *tab_5;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *remRoomButton;
    QPushButton *saveRoomsInfo;
    QPushButton *addRoomButton;
    QTableWidget *roomsTable;
    QWidget *tab_6;
    QGroupBox *groupBox_7;
    QTableWidget *restTable;
    QGroupBox *groupBox_3;
    QTableWidget *restTablesTable;
    QPushButton *remRestButton;
    QPushButton *addRestButton;
    QPushButton *saveRestInfo;
    QPushButton *addTableButton;
    QPushButton *remTableButton;
    QPushButton *saveTablesInfo;
    QWidget *tab_8;
    QGroupBox *groupBox_8;
    QTableWidget *tableWidget_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_7;
    QGroupBox *groupBox_9;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_10;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Hotel_Info_Ui)
    {
    Hotel_Info_Ui->setObjectName(QString::fromUtf8("Hotel_Info_Ui"));
    Hotel_Info_Ui->resize(QSize(890, 588).expandedTo(Hotel_Info_Ui->minimumSizeHint()));
    groupBox = new QGroupBox(Hotel_Info_Ui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(9, 9, 872, 570));
    layoutWidget = new QWidget(groupBox);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(14, 531, 841, 25));
    hboxLayout = new QHBoxLayout(layoutWidget);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(121, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    okButton = new QPushButton(layoutWidget);
    okButton->setObjectName(QString::fromUtf8("okButton"));

    hboxLayout->addWidget(okButton);

    Owner = new QTabWidget(groupBox);
    Owner->setObjectName(QString::fromUtf8("Owner"));
    Owner->setGeometry(QRect(10, 20, 852, 505));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    widget = new QWidget(tab);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(10, 10, 828, 230));
    hboxLayout1 = new QHBoxLayout(widget);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    groupBox_4 = new QGroupBox(widget);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    vboxLayout = new QVBoxLayout(groupBox_4);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    label_25 = new QLabel(groupBox_4);
    label_25->setObjectName(QString::fromUtf8("label_25"));

    vboxLayout->addWidget(label_25);

    adrsLineEdit = new QLineEdit(groupBox_4);
    adrsLineEdit->setObjectName(QString::fromUtf8("adrsLineEdit"));

    vboxLayout->addWidget(adrsLineEdit);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    label_26 = new QLabel(groupBox_4);
    label_26->setObjectName(QString::fromUtf8("label_26"));

    vboxLayout1->addWidget(label_26);

    cityLineEdit = new QLineEdit(groupBox_4);
    cityLineEdit->setObjectName(QString::fromUtf8("cityLineEdit"));

    vboxLayout1->addWidget(cityLineEdit);


    hboxLayout2->addLayout(vboxLayout1);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(0);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    label_27 = new QLabel(groupBox_4);
    label_27->setObjectName(QString::fromUtf8("label_27"));

    vboxLayout2->addWidget(label_27);

    stateComboBox = new QComboBox(groupBox_4);
    stateComboBox->setObjectName(QString::fromUtf8("stateComboBox"));

    vboxLayout2->addWidget(stateComboBox);


    hboxLayout2->addLayout(vboxLayout2);

    vboxLayout3 = new QVBoxLayout();
    vboxLayout3->setSpacing(6);
    vboxLayout3->setMargin(0);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    label_28 = new QLabel(groupBox_4);
    label_28->setObjectName(QString::fromUtf8("label_28"));

    vboxLayout3->addWidget(label_28);

    codeLineEdit = new QLineEdit(groupBox_4);
    codeLineEdit->setObjectName(QString::fromUtf8("codeLineEdit"));

    vboxLayout3->addWidget(codeLineEdit);


    hboxLayout2->addLayout(vboxLayout3);


    vboxLayout->addLayout(hboxLayout2);

    label_22 = new QLabel(groupBox_4);
    label_22->setObjectName(QString::fromUtf8("label_22"));

    vboxLayout->addWidget(label_22);

    countryLineEdit = new QLineEdit(groupBox_4);
    countryLineEdit->setObjectName(QString::fromUtf8("countryLineEdit"));

    vboxLayout->addWidget(countryLineEdit);


    gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);

    label_2 = new QLabel(widget);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 1, 0, 1, 1);

    nameLineEdit = new QLineEdit(widget);
    nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

    gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

    label = new QLabel(widget);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);


    hboxLayout1->addLayout(gridLayout);

    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    label_23 = new QLabel(widget);
    label_23->setObjectName(QString::fromUtf8("label_23"));

    gridLayout1->addWidget(label_23, 1, 0, 1, 1);

    label_6 = new QLabel(widget);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout1->addWidget(label_6, 0, 0, 1, 1);

    lineEdit_6 = new QLineEdit(widget);
    lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

    gridLayout1->addWidget(lineEdit_6, 1, 1, 1, 1);

    lineEdit_17 = new QLineEdit(widget);
    lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));

    gridLayout1->addWidget(lineEdit_17, 2, 1, 1, 1);

    lineEdit_5 = new QLineEdit(widget);
    lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

    gridLayout1->addWidget(lineEdit_5, 0, 1, 1, 1);

    label_9 = new QLabel(widget);
    label_9->setObjectName(QString::fromUtf8("label_9"));

    gridLayout1->addWidget(label_9, 2, 0, 1, 1);

    lineEdit_14 = new QLineEdit(widget);
    lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

    gridLayout1->addWidget(lineEdit_14, 3, 1, 1, 1);

    label_7 = new QLabel(widget);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout1->addWidget(label_7, 3, 0, 1, 1);


    hboxLayout1->addLayout(gridLayout1);

    label_3 = new QLabel(tab);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(10, 260, 61, 22));
    checkBox = new QCheckBox(tab);
    checkBox->setObjectName(QString::fromUtf8("checkBox"));
    checkBox->setGeometry(QRect(510, 270, 91, 18));
    checkBox_5 = new QCheckBox(tab);
    checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
    checkBox_5->setGeometry(QRect(510, 330, 111, 18));
    checkBox_2 = new QCheckBox(tab);
    checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
    checkBox_2->setGeometry(QRect(660, 270, 81, 18));
    checkBox_4 = new QCheckBox(tab);
    checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
    checkBox_4->setGeometry(QRect(660, 330, 73, 18));
    checkBox_3 = new QCheckBox(tab);
    checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
    checkBox_3->setEnabled(true);
    checkBox_3->setGeometry(QRect(510, 390, 73, 18));
    checkBox_3->setAcceptDrops(false);
    checkBox_3->setAutoFillBackground(true);
    checkBox_3->setChecked(false);
    checkBox_3->setTristate(true);
    checkBox_6 = new QCheckBox(tab);
    checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
    checkBox_6->setGeometry(QRect(660, 390, 111, 18));
    textEdit = new QTextEdit(tab);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setGeometry(QRect(70, 260, 381, 151));
    saveHotelInfo = new QPushButton(tab);
    saveHotelInfo->setObjectName(QString::fromUtf8("saveHotelInfo"));
    saveHotelInfo->setGeometry(QRect(290, 440, 271, 23));
    Owner->addTab(tab, QApplication::translate("Hotel_Info_Ui", "Hotel Information", 0, QApplication::UnicodeUTF8));
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    label_4 = new QLabel(tab_2);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(20, 10, 96, 22));
    lineEdit_3 = new QLineEdit(tab_2);
    lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
    lineEdit_3->setGeometry(QRect(130, 10, 113, 20));
    ownerTable = new QTableWidget(tab_2);
    ownerTable->setObjectName(QString::fromUtf8("ownerTable"));
    ownerTable->setGeometry(QRect(10, 40, 801, 381));
    delOwnerButton = new QPushButton(tab_2);
    delOwnerButton->setObjectName(QString::fromUtf8("delOwnerButton"));
    delOwnerButton->setGeometry(QRect(300, 430, 221, 21));
    addOwnerButton = new QPushButton(tab_2);
    addOwnerButton->setObjectName(QString::fromUtf8("addOwnerButton"));
    addOwnerButton->setGeometry(QRect(50, 430, 211, 21));
    saveOwnerInfo = new QPushButton(tab_2);
    saveOwnerInfo->setObjectName(QString::fromUtf8("saveOwnerInfo"));
    saveOwnerInfo->setGeometry(QRect(570, 430, 201, 23));
    Owner->addTab(tab_2, QApplication::translate("Hotel_Info_Ui", "Owner", 0, QApplication::UnicodeUTF8));
    tab_4 = new QWidget();
    tab_4->setObjectName(QString::fromUtf8("tab_4"));
    groupBox_2 = new QGroupBox(tab_4);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(370, 70, 251, 101));
    label_17 = new QLabel(groupBox_2);
    label_17->setObjectName(QString::fromUtf8("label_17"));
    label_17->setGeometry(QRect(20, 20, 67, 25));
    label_20 = new QLabel(groupBox_2);
    label_20->setObjectName(QString::fromUtf8("label_20"));
    label_20->setGeometry(QRect(20, 56, 67, 25));
    lineEdit_13 = new QLineEdit(groupBox_2);
    lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
    lineEdit_13->setGeometry(QRect(130, 60, 71, 20));
    lineEdit_12 = new QLineEdit(groupBox_2);
    lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
    lineEdit_12->setGeometry(QRect(130, 20, 71, 20));
    label_19 = new QLabel(groupBox_2);
    label_19->setObjectName(QString::fromUtf8("label_19"));
    label_19->setGeometry(QRect(210, 60, 21, 25));
    label_18 = new QLabel(groupBox_2);
    label_18->setObjectName(QString::fromUtf8("label_18"));
    label_18->setGeometry(QRect(210, 20, 21, 25));
    label_34 = new QLabel(tab_4);
    label_34->setObjectName(QString::fromUtf8("label_34"));
    label_34->setGeometry(QRect(370, 20, 47, 25));
    dateTimeEdit_2 = new QDateTimeEdit(tab_4);
    dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
    dateTimeEdit_2->setGeometry(QRect(420, 20, 151, 22));
    groupBox_6 = new QGroupBox(tab_4);
    groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
    groupBox_6->setGeometry(QRect(40, 20, 241, 341));
    roomTypesTable = new QTableWidget(groupBox_6);
    roomTypesTable->setObjectName(QString::fromUtf8("roomTypesTable"));
    roomTypesTable->setGeometry(QRect(10, 20, 221, 311));
    groupBox_5 = new QGroupBox(tab_4);
    groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
    groupBox_5->setGeometry(QRect(370, 190, 411, 171));
    textEdit_2 = new QTextEdit(groupBox_5);
    textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
    textEdit_2->setGeometry(QRect(10, 20, 391, 141));
    addRoomType = new QPushButton(tab_4);
    addRoomType->setObjectName(QString::fromUtf8("addRoomType"));
    addRoomType->setGeometry(QRect(50, 380, 91, 23));
    delRoomType = new QPushButton(tab_4);
    delRoomType->setObjectName(QString::fromUtf8("delRoomType"));
    delRoomType->setGeometry(QRect(170, 380, 101, 23));
    saveRoomTypes = new QPushButton(tab_4);
    saveRoomTypes->setObjectName(QString::fromUtf8("saveRoomTypes"));
    saveRoomTypes->setGeometry(QRect(80, 430, 151, 23));
    saveRoomTypes_2 = new QPushButton(tab_4);
    saveRoomTypes_2->setObjectName(QString::fromUtf8("saveRoomTypes_2"));
    saveRoomTypes_2->setGeometry(QRect(500, 380, 151, 23));
    Owner->addTab(tab_4, QApplication::translate("Hotel_Info_Ui", "Room Types", 0, QApplication::UnicodeUTF8));
    tab_5 = new QWidget();
    tab_5->setObjectName(QString::fromUtf8("tab_5"));
    dateTimeEdit = new QDateTimeEdit(tab_5);
    dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
    dateTimeEdit->setGeometry(QRect(680, 20, 151, 22));
    remRoomButton = new QPushButton(tab_5);
    remRoomButton->setObjectName(QString::fromUtf8("remRoomButton"));
    remRoomButton->setGeometry(QRect(310, 440, 221, 23));
    saveRoomsInfo = new QPushButton(tab_5);
    saveRoomsInfo->setObjectName(QString::fromUtf8("saveRoomsInfo"));
    saveRoomsInfo->setGeometry(QRect(560, 440, 211, 23));
    addRoomButton = new QPushButton(tab_5);
    addRoomButton->setObjectName(QString::fromUtf8("addRoomButton"));
    addRoomButton->setGeometry(QRect(70, 440, 211, 23));
    roomsTable = new QTableWidget(tab_5);
    roomsTable->setObjectName(QString::fromUtf8("roomsTable"));
    roomsTable->setGeometry(QRect(10, 50, 821, 381));
    Owner->addTab(tab_5, QApplication::translate("Hotel_Info_Ui", "Rooms Information", 0, QApplication::UnicodeUTF8));
    tab_6 = new QWidget();
    tab_6->setObjectName(QString::fromUtf8("tab_6"));
    groupBox_7 = new QGroupBox(tab_6);
    groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
    groupBox_7->setGeometry(QRect(20, 20, 411, 261));
    restTable = new QTableWidget(groupBox_7);
    restTable->setObjectName(QString::fromUtf8("restTable"));
    restTable->setGeometry(QRect(20, 30, 381, 211));
    groupBox_3 = new QGroupBox(tab_6);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(440, 20, 401, 261));
    restTablesTable = new QTableWidget(groupBox_3);
    restTablesTable->setObjectName(QString::fromUtf8("restTablesTable"));
    restTablesTable->setGeometry(QRect(10, 30, 371, 211));
    remRestButton = new QPushButton(tab_6);
    remRestButton->setObjectName(QString::fromUtf8("remRestButton"));
    remRestButton->setGeometry(QRect(230, 330, 131, 23));
    addRestButton = new QPushButton(tab_6);
    addRestButton->setObjectName(QString::fromUtf8("addRestButton"));
    addRestButton->setGeometry(QRect(70, 330, 141, 23));
    saveRestInfo = new QPushButton(tab_6);
    saveRestInfo->setObjectName(QString::fromUtf8("saveRestInfo"));
    saveRestInfo->setGeometry(QRect(120, 390, 211, 23));
    addTableButton = new QPushButton(tab_6);
    addTableButton->setObjectName(QString::fromUtf8("addTableButton"));
    addTableButton->setGeometry(QRect(500, 330, 141, 23));
    remTableButton = new QPushButton(tab_6);
    remTableButton->setObjectName(QString::fromUtf8("remTableButton"));
    remTableButton->setGeometry(QRect(660, 330, 141, 23));
    saveTablesInfo = new QPushButton(tab_6);
    saveTablesInfo->setObjectName(QString::fromUtf8("saveTablesInfo"));
    saveTablesInfo->setGeometry(QRect(550, 390, 211, 23));
    Owner->addTab(tab_6, QApplication::translate("Hotel_Info_Ui", "Restaurant", 0, QApplication::UnicodeUTF8));
    tab_8 = new QWidget();
    tab_8->setObjectName(QString::fromUtf8("tab_8"));
    groupBox_8 = new QGroupBox(tab_8);
    groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
    groupBox_8->setGeometry(QRect(10, 20, 441, 351));
    tableWidget_6 = new QTableWidget(groupBox_8);
    tableWidget_6->setObjectName(QString::fromUtf8("tableWidget_6"));
    tableWidget_6->setGeometry(QRect(10, 20, 421, 321));
    pushButton = new QPushButton(tab_8);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(80, 390, 131, 23));
    pushButton_2 = new QPushButton(tab_8);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(240, 390, 131, 23));
    pushButton_3 = new QPushButton(tab_8);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(130, 440, 181, 23));
    Owner->addTab(tab_8, QApplication::translate("Hotel_Info_Ui", "Function Rooms", 0, QApplication::UnicodeUTF8));
    tab_7 = new QWidget();
    tab_7->setObjectName(QString::fromUtf8("tab_7"));
    groupBox_9 = new QGroupBox(tab_7);
    groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
    groupBox_9->setGeometry(QRect(40, 70, 381, 201));
    lineEdit_2 = new QLineEdit(groupBox_9);
    lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
    lineEdit_2->setGeometry(QRect(210, 50, 113, 20));
    lineEdit_8 = new QLineEdit(groupBox_9);
    lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
    lineEdit_8->setGeometry(QRect(210, 90, 113, 20));
    lineEdit_9 = new QLineEdit(groupBox_9);
    lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
    lineEdit_9->setGeometry(QRect(210, 130, 113, 20));
    label_8 = new QLabel(groupBox_9);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(30, 90, 151, 31));
    label_5 = new QLabel(groupBox_9);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(30, 60, 103, 22));
    label_10 = new QLabel(groupBox_9);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(30, 130, 141, 22));
    pushButton_4 = new QPushButton(tab_7);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(90, 330, 281, 23));
    Owner->addTab(tab_7, QApplication::translate("Hotel_Info_Ui", "Golf Course", 0, QApplication::UnicodeUTF8));
    label_25->setBuddy(adrsLineEdit);
    label_26->setBuddy(cityLineEdit);
    label_27->setBuddy(stateComboBox);
    label_28->setBuddy(codeLineEdit);
    label_22->setBuddy(countryLineEdit);
    label_2->setBuddy(restTablesTable);
    label->setBuddy(nameLineEdit);
    label_23->setBuddy(lineEdit_6);
    label_6->setBuddy(lineEdit_5);
    label_9->setBuddy(lineEdit_17);
    label_3->setBuddy(textEdit);
    QWidget::setTabOrder(Owner, nameLineEdit);
    QWidget::setTabOrder(nameLineEdit, adrsLineEdit);
    QWidget::setTabOrder(adrsLineEdit, cityLineEdit);
    QWidget::setTabOrder(cityLineEdit, stateComboBox);
    QWidget::setTabOrder(stateComboBox, codeLineEdit);
    QWidget::setTabOrder(codeLineEdit, countryLineEdit);
    QWidget::setTabOrder(countryLineEdit, lineEdit_5);
    QWidget::setTabOrder(lineEdit_5, lineEdit_6);
    QWidget::setTabOrder(lineEdit_6, lineEdit_17);
    QWidget::setTabOrder(lineEdit_17, textEdit);
    QWidget::setTabOrder(textEdit, okButton);
    QWidget::setTabOrder(okButton, lineEdit_3);
    QWidget::setTabOrder(lineEdit_3, ownerTable);
    QWidget::setTabOrder(ownerTable, addOwnerButton);
    QWidget::setTabOrder(addOwnerButton, dateTimeEdit_2);
    QWidget::setTabOrder(dateTimeEdit_2, lineEdit_12);
    QWidget::setTabOrder(lineEdit_12, lineEdit_13);
    QWidget::setTabOrder(lineEdit_13, roomTypesTable);
    QWidget::setTabOrder(roomTypesTable, textEdit_2);
    QWidget::setTabOrder(textEdit_2, addRoomType);
    QWidget::setTabOrder(addRoomType, restTable);
    QWidget::setTabOrder(restTable, lineEdit_2);
    QWidget::setTabOrder(lineEdit_2, lineEdit_8);
    QWidget::setTabOrder(lineEdit_8, lineEdit_9);
    retranslateUi(Hotel_Info_Ui);

    QMetaObject::connectSlotsByName(Hotel_Info_Ui);
    } // setupUi

    void retranslateUi(QWidget *Hotel_Info_Ui)
    {
    Hotel_Info_Ui->setWindowTitle(QApplication::translate("Hotel_Info_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Hotel_Info_Ui", "Property Information", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("Hotel_Info_Ui", "OK", 0, QApplication::UnicodeUTF8));
    Owner->setToolTip(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Property</p></body></html>", 0, QApplication::UnicodeUTF8));
    Owner->setWhatsThis(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-size:10pt;\">Prop</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("Hotel_Info_Ui", "", 0, QApplication::UnicodeUTF8));
    label_25->setText(QApplication::translate("Hotel_Info_Ui", "Street", 0, QApplication::UnicodeUTF8));
    label_26->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">City</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_27->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">State</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    stateComboBox->clear();
    stateComboBox->addItem(QApplication::translate("Hotel_Info_Ui", "MA", 0, QApplication::UnicodeUTF8));
    stateComboBox->addItem(QApplication::translate("Hotel_Info_Ui", "RI", 0, QApplication::UnicodeUTF8));
    stateComboBox->addItem(QApplication::translate("Hotel_Info_Ui", "NH", 0, QApplication::UnicodeUTF8));
    label_28->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">ZIP Code</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_22->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Country</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Location</p></body></html>", 0, QApplication::UnicodeUTF8));
    nameLineEdit->setText(QApplication::translate("Hotel_Info_Ui", "", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Hotel Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_23->setText(QApplication::translate("Hotel_Info_Ui", "Email", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Phone</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Web Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Number of Rooms</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Description</p></body></html>", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("Hotel_Info_Ui", "Restaurants", 0, QApplication::UnicodeUTF8));
    checkBox_5->setText(QApplication::translate("Hotel_Info_Ui", "Function Rooms", 0, QApplication::UnicodeUTF8));
    checkBox_2->setText(QApplication::translate("Hotel_Info_Ui", "Golf Course", 0, QApplication::UnicodeUTF8));
    checkBox_4->setText(QApplication::translate("Hotel_Info_Ui", "Shuttles", 0, QApplication::UnicodeUTF8));
    checkBox_3->setText(QApplication::translate("Hotel_Info_Ui", "Tours", 0, QApplication::UnicodeUTF8));
    checkBox_6->setText(QApplication::translate("Hotel_Info_Ui", "Gift certificates", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    saveHotelInfo->setText(QApplication::translate("Hotel_Info_Ui", "Save Hotel Information", 0, QApplication::UnicodeUTF8));
    Owner->setTabText(Owner->indexOf(tab), QApplication::translate("Hotel_Info_Ui", "Hotel Information", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Number of Owners</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    ownerTable->clear();
    ownerTable->setColumnCount(6);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("Hotel_Info_Ui", "First Name", 0, QApplication::UnicodeUTF8));
    ownerTable->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("Hotel_Info_Ui", "Last Name", 0, QApplication::UnicodeUTF8));
    ownerTable->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("Hotel_Info_Ui", "Address", 0, QApplication::UnicodeUTF8));
    ownerTable->setHorizontalHeaderItem(2, __colItem2);

    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    __colItem3->setText(QApplication::translate("Hotel_Info_Ui", "Phone", 0, QApplication::UnicodeUTF8));
    ownerTable->setHorizontalHeaderItem(3, __colItem3);

    QTableWidgetItem *__colItem4 = new QTableWidgetItem();
    __colItem4->setText(QApplication::translate("Hotel_Info_Ui", "Email", 0, QApplication::UnicodeUTF8));
    ownerTable->setHorizontalHeaderItem(4, __colItem4);

    QTableWidgetItem *__colItem5 = new QTableWidgetItem();
    __colItem5->setText(QApplication::translate("Hotel_Info_Ui", "Notes", 0, QApplication::UnicodeUTF8));
    ownerTable->setHorizontalHeaderItem(5, __colItem5);
    ownerTable->setRowCount(0);
    delOwnerButton->setText(QApplication::translate("Hotel_Info_Ui", "Delete Owner", 0, QApplication::UnicodeUTF8));
    addOwnerButton->setText(QApplication::translate("Hotel_Info_Ui", "Add Owner", 0, QApplication::UnicodeUTF8));
    saveOwnerInfo->setText(QApplication::translate("Hotel_Info_Ui", "Save Owner Information", 0, QApplication::UnicodeUTF8));
    Owner->setTabText(Owner->indexOf(tab_2), QApplication::translate("Hotel_Info_Ui", "Owner", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("Hotel_Info_Ui", "Increase", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Weekend</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_20->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-size:10pt;\">Seasonal</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    lineEdit_13->setText(QApplication::translate("Hotel_Info_Ui", "0", 0, QApplication::UnicodeUTF8));
    lineEdit_12->setText(QApplication::translate("Hotel_Info_Ui", "25", 0, QApplication::UnicodeUTF8));
    label_19->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">%</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_18->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">%</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_34->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Date</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    groupBox_6->setTitle(QApplication::translate("Hotel_Info_Ui", "Room Rates", 0, QApplication::UnicodeUTF8));
    roomTypesTable->clear();
    roomTypesTable->setColumnCount(2);

    QTableWidgetItem *__colItem6 = new QTableWidgetItem();
    __colItem6->setText(QApplication::translate("Hotel_Info_Ui", "Room Type", 0, QApplication::UnicodeUTF8));
    roomTypesTable->setHorizontalHeaderItem(0, __colItem6);

    QTableWidgetItem *__colItem7 = new QTableWidgetItem();
    __colItem7->setText(QApplication::translate("Hotel_Info_Ui", "Rate ($)", 0, QApplication::UnicodeUTF8));
    roomTypesTable->setHorizontalHeaderItem(1, __colItem7);
    roomTypesTable->setRowCount(0);
    groupBox_5->setTitle(QApplication::translate("Hotel_Info_Ui", "Notes", 0, QApplication::UnicodeUTF8));
    addRoomType->setText(QApplication::translate("Hotel_Info_Ui", "Add Room Type", 0, QApplication::UnicodeUTF8));
    delRoomType->setText(QApplication::translate("Hotel_Info_Ui", "Remove Room type", 0, QApplication::UnicodeUTF8));
    saveRoomTypes->setText(QApplication::translate("Hotel_Info_Ui", " Save Room Types", 0, QApplication::UnicodeUTF8));
    saveRoomTypes_2->setText(QApplication::translate("Hotel_Info_Ui", " Save Rates Increase", 0, QApplication::UnicodeUTF8));
    Owner->setTabText(Owner->indexOf(tab_4), QApplication::translate("Hotel_Info_Ui", "Room Types", 0, QApplication::UnicodeUTF8));
    remRoomButton->setText(QApplication::translate("Hotel_Info_Ui", "Remove Room", 0, QApplication::UnicodeUTF8));
    saveRoomsInfo->setText(QApplication::translate("Hotel_Info_Ui", "Save Rooms Information", 0, QApplication::UnicodeUTF8));
    addRoomButton->setText(QApplication::translate("Hotel_Info_Ui", "Add Room", 0, QApplication::UnicodeUTF8));
    roomsTable->clear();
    roomsTable->setColumnCount(8);

    QTableWidgetItem *__colItem8 = new QTableWidgetItem();
    __colItem8->setText(QApplication::translate("Hotel_Info_Ui", "Room Number", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(0, __colItem8);

    QTableWidgetItem *__colItem9 = new QTableWidgetItem();
    __colItem9->setText(QApplication::translate("Hotel_Info_Ui", "Floor", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(1, __colItem9);

    QTableWidgetItem *__colItem10 = new QTableWidgetItem();
    __colItem10->setText(QApplication::translate("Hotel_Info_Ui", "Status", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(2, __colItem10);

    QTableWidgetItem *__colItem11 = new QTableWidgetItem();
    __colItem11->setText(QApplication::translate("Hotel_Info_Ui", "Room-Type", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(3, __colItem11);

    QTableWidgetItem *__colItem12 = new QTableWidgetItem();
    __colItem12->setText(QApplication::translate("Hotel_Info_Ui", "Square Footage", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(4, __colItem12);

    QTableWidgetItem *__colItem13 = new QTableWidgetItem();
    __colItem13->setText(QApplication::translate("Hotel_Info_Ui", "Beds", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(5, __colItem13);

    QTableWidgetItem *__colItem14 = new QTableWidgetItem();
    __colItem14->setText(QApplication::translate("Hotel_Info_Ui", "Max Occupants", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(6, __colItem14);

    QTableWidgetItem *__colItem15 = new QTableWidgetItem();
    __colItem15->setText(QApplication::translate("Hotel_Info_Ui", "Window view", 0, QApplication::UnicodeUTF8));
    roomsTable->setHorizontalHeaderItem(7, __colItem15);
    roomsTable->setRowCount(0);
    Owner->setTabText(Owner->indexOf(tab_5), QApplication::translate("Hotel_Info_Ui", "Rooms Information", 0, QApplication::UnicodeUTF8));
    groupBox_7->setTitle(QApplication::translate("Hotel_Info_Ui", "Restaurant Information", 0, QApplication::UnicodeUTF8));
    restTable->clear();
    restTable->setColumnCount(4);

    QTableWidgetItem *__colItem16 = new QTableWidgetItem();
    __colItem16->setText(QApplication::translate("Hotel_Info_Ui", "Restaurant number", 0, QApplication::UnicodeUTF8));
    restTable->setHorizontalHeaderItem(0, __colItem16);

    QTableWidgetItem *__colItem17 = new QTableWidgetItem();
    __colItem17->setText(QApplication::translate("Hotel_Info_Ui", "Restaurant type", 0, QApplication::UnicodeUTF8));
    restTable->setHorizontalHeaderItem(1, __colItem17);

    QTableWidgetItem *__colItem18 = new QTableWidgetItem();
    __colItem18->setText(QApplication::translate("Hotel_Info_Ui", "Number of tables", 0, QApplication::UnicodeUTF8));
    restTable->setHorizontalHeaderItem(2, __colItem18);

    QTableWidgetItem *__colItem19 = new QTableWidgetItem();
    __colItem19->setText(QApplication::translate("Hotel_Info_Ui", "Notes", 0, QApplication::UnicodeUTF8));
    restTable->setHorizontalHeaderItem(3, __colItem19);
    restTable->setRowCount(0);
    groupBox_3->setTitle(QApplication::translate("Hotel_Info_Ui", "Table Information", 0, QApplication::UnicodeUTF8));
    restTablesTable->clear();
    restTablesTable->setColumnCount(3);

    QTableWidgetItem *__colItem20 = new QTableWidgetItem();
    __colItem20->setText(QApplication::translate("Hotel_Info_Ui", "Restaurant number", 0, QApplication::UnicodeUTF8));
    restTablesTable->setHorizontalHeaderItem(0, __colItem20);

    QTableWidgetItem *__colItem21 = new QTableWidgetItem();
    __colItem21->setText(QApplication::translate("Hotel_Info_Ui", "Table number", 0, QApplication::UnicodeUTF8));
    restTablesTable->setHorizontalHeaderItem(1, __colItem21);

    QTableWidgetItem *__colItem22 = new QTableWidgetItem();
    __colItem22->setText(QApplication::translate("Hotel_Info_Ui", "Capacity", 0, QApplication::UnicodeUTF8));
    restTablesTable->setHorizontalHeaderItem(2, __colItem22);
    restTablesTable->setRowCount(0);
    remRestButton->setText(QApplication::translate("Hotel_Info_Ui", "Remove Restaurant", 0, QApplication::UnicodeUTF8));
    addRestButton->setText(QApplication::translate("Hotel_Info_Ui", "Add Restaurant", 0, QApplication::UnicodeUTF8));
    saveRestInfo->setText(QApplication::translate("Hotel_Info_Ui", "Save Restaurants Information", 0, QApplication::UnicodeUTF8));
    addTableButton->setText(QApplication::translate("Hotel_Info_Ui", "Add Table", 0, QApplication::UnicodeUTF8));
    remTableButton->setText(QApplication::translate("Hotel_Info_Ui", "Remove Table", 0, QApplication::UnicodeUTF8));
    saveTablesInfo->setText(QApplication::translate("Hotel_Info_Ui", "Save Tables Information", 0, QApplication::UnicodeUTF8));
    Owner->setTabText(Owner->indexOf(tab_6), QApplication::translate("Hotel_Info_Ui", "Restaurant", 0, QApplication::UnicodeUTF8));
    groupBox_8->setTitle(QApplication::translate("Hotel_Info_Ui", "Function Rooms Information", 0, QApplication::UnicodeUTF8));
    tableWidget_6->clear();
    tableWidget_6->setColumnCount(4);

    QTableWidgetItem *__colItem23 = new QTableWidgetItem();
    __colItem23->setText(QApplication::translate("Hotel_Info_Ui", "Name", 0, QApplication::UnicodeUTF8));
    tableWidget_6->setHorizontalHeaderItem(0, __colItem23);

    QTableWidgetItem *__colItem24 = new QTableWidgetItem();
    __colItem24->setText(QApplication::translate("Hotel_Info_Ui", "Number", 0, QApplication::UnicodeUTF8));
    tableWidget_6->setHorizontalHeaderItem(1, __colItem24);

    QTableWidgetItem *__colItem25 = new QTableWidgetItem();
    __colItem25->setText(QApplication::translate("Hotel_Info_Ui", "Capacity", 0, QApplication::UnicodeUTF8));
    tableWidget_6->setHorizontalHeaderItem(2, __colItem25);

    QTableWidgetItem *__colItem26 = new QTableWidgetItem();
    __colItem26->setText(QApplication::translate("Hotel_Info_Ui", "Hourly Rate ($)", 0, QApplication::UnicodeUTF8));
    tableWidget_6->setHorizontalHeaderItem(3, __colItem26);
    tableWidget_6->setRowCount(0);
    pushButton->setText(QApplication::translate("Hotel_Info_Ui", "Add Function Room", 0, QApplication::UnicodeUTF8));
    pushButton_2->setText(QApplication::translate("Hotel_Info_Ui", "Remove Function Room", 0, QApplication::UnicodeUTF8));
    pushButton_3->setText(QApplication::translate("Hotel_Info_Ui", "Save Function Room Information", 0, QApplication::UnicodeUTF8));
    Owner->setTabText(Owner->indexOf(tab_8), QApplication::translate("Hotel_Info_Ui", "Function Rooms", 0, QApplication::UnicodeUTF8));
    groupBox_9->setTitle(QApplication::translate("Hotel_Info_Ui", "Golf Course Information", 0, QApplication::UnicodeUTF8));
    lineEdit_2->setText(QApplication::translate("Hotel_Info_Ui", "", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("Hotel_Info_Ui", "Number of right handed clubs", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Number of golf carts</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("Hotel_Info_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Number of left handed clubs</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    pushButton_4->setText(QApplication::translate("Hotel_Info_Ui", "Save Golf Course Information", 0, QApplication::UnicodeUTF8));
    Owner->setTabText(Owner->indexOf(tab_7), QApplication::translate("Hotel_Info_Ui", "Golf Course", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Hotel_Info_Ui);
    } // retranslateUi

};

namespace Ui {
    class Hotel_Info_Ui: public Ui_Hotel_Info_Ui {};
} // namespace Ui

#endif // UI_HOTEL_INFO_H
