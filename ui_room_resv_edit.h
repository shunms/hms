#ifndef UI_ROOM_RESV_EDIT_H
#define UI_ROOM_RESV_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Room_Resv_Edit_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QDateEdit *toDate;
    QToolButton *addCustomerButton;
    QLabel *label_5;
    QToolButton *addGuestButton;
    QLineEdit *roomNumber;
    QLabel *label_6;
    QComboBox *roomType;
    QDateEdit *fromDate;
    QLineEdit *guestName;
    QLineEdit *customerName;
    QLabel *label_10;
    QLabel *label_9;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout1;
    QLabel *label_7;
    QTextEdit *resvHistory;
    QLabel *label_8;
    QTextEdit *resvNotes;
    QCheckBox *cancelToggle;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *saveButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *Room_Resv_Edit_Ui)
    {
    Room_Resv_Edit_Ui->setObjectName(QString::fromUtf8("Room_Resv_Edit_Ui"));
    Room_Resv_Edit_Ui->resize(QSize(616, 535).expandedTo(Room_Resv_Edit_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Room_Resv_Edit_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox = new QGroupBox(Room_Resv_Edit_Ui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setEnabled(true);
    groupBox->setAutoFillBackground(true);
    groupBox->setFlat(false);
    vboxLayout1 = new QVBoxLayout(groupBox);
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
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 3, 0, 1, 2);

    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 2, 0, 1, 2);

    toDate = new QDateEdit(groupBox);
    toDate->setObjectName(QString::fromUtf8("toDate"));

    gridLayout->addWidget(toDate, 4, 2, 1, 1);

    addCustomerButton = new QToolButton(groupBox);
    addCustomerButton->setObjectName(QString::fromUtf8("addCustomerButton"));

    gridLayout->addWidget(addCustomerButton, 0, 3, 1, 1);

    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout->addWidget(label_5, 4, 0, 1, 2);

    addGuestButton = new QToolButton(groupBox);
    addGuestButton->setObjectName(QString::fromUtf8("addGuestButton"));

    gridLayout->addWidget(addGuestButton, 1, 3, 1, 1);

    roomNumber = new QLineEdit(groupBox);
    roomNumber->setObjectName(QString::fromUtf8("roomNumber"));

    gridLayout->addWidget(roomNumber, 2, 2, 1, 1);

    label_6 = new QLabel(groupBox);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout->addWidget(label_6, 5, 0, 1, 2);

    roomType = new QComboBox(groupBox);
    roomType->setObjectName(QString::fromUtf8("roomType"));

    gridLayout->addWidget(roomType, 5, 2, 1, 1);

    fromDate = new QDateEdit(groupBox);
    fromDate->setObjectName(QString::fromUtf8("fromDate"));

    gridLayout->addWidget(fromDate, 3, 2, 1, 1);

    guestName = new QLineEdit(groupBox);
    guestName->setObjectName(QString::fromUtf8("guestName"));
    guestName->setEnabled(true);
    guestName->setAutoFillBackground(false);
    guestName->setFrame(true);
    guestName->setReadOnly(false);

    gridLayout->addWidget(guestName, 1, 2, 1, 1);

    customerName = new QLineEdit(groupBox);
    customerName->setObjectName(QString::fromUtf8("customerName"));
    customerName->setEnabled(true);
    customerName->setAutoFillBackground(false);
    customerName->setFrame(true);
    customerName->setReadOnly(false);

    gridLayout->addWidget(customerName, 0, 2, 1, 1);

    label_10 = new QLabel(groupBox);
    label_10->setObjectName(QString::fromUtf8("label_10"));

    gridLayout->addWidget(label_10, 1, 0, 1, 2);

    label_9 = new QLabel(groupBox);
    label_9->setObjectName(QString::fromUtf8("label_9"));

    gridLayout->addWidget(label_9, 0, 0, 1, 2);


    hboxLayout->addLayout(gridLayout);

    spacerItem = new QSpacerItem(111, 194, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);


    vboxLayout1->addLayout(hboxLayout);

    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    label_7 = new QLabel(groupBox);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout1->addWidget(label_7, 0, 0, 1, 1);

    resvHistory = new QTextEdit(groupBox);
    resvHistory->setObjectName(QString::fromUtf8("resvHistory"));
    resvHistory->setEnabled(true);
    QPalette palette;
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(238, 239, 241));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(110, 111, 114));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(147, 149, 152));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(221, 223, 228));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(238, 239, 241));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(238, 239, 241));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(110, 111, 114));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(147, 149, 152));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(221, 223, 228));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(238, 239, 241));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(110, 111, 114));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(238, 239, 241));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(110, 111, 114));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(147, 149, 152));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(110, 111, 114));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(110, 111, 114));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(221, 223, 228));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(221, 223, 228));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(221, 223, 228));
    resvHistory->setPalette(palette);
    resvHistory->setFrameShape(QFrame::StyledPanel);
    resvHistory->setFrameShadow(QFrame::Sunken);
    resvHistory->setTabChangesFocus(true);
    resvHistory->setReadOnly(true);

    gridLayout1->addWidget(resvHistory, 1, 1, 1, 1);

    label_8 = new QLabel(groupBox);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    gridLayout1->addWidget(label_8, 1, 0, 1, 1);

    resvNotes = new QTextEdit(groupBox);
    resvNotes->setObjectName(QString::fromUtf8("resvNotes"));
    resvNotes->setTabChangesFocus(true);

    gridLayout1->addWidget(resvNotes, 0, 1, 1, 1);


    vboxLayout1->addLayout(gridLayout1);

    cancelToggle = new QCheckBox(groupBox);
    cancelToggle->setObjectName(QString::fromUtf8("cancelToggle"));

    vboxLayout1->addWidget(cancelToggle);


    vboxLayout->addWidget(groupBox);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    spacerItem1 = new QSpacerItem(408, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);

    saveButton = new QPushButton(Room_Resv_Edit_Ui);
    saveButton->setObjectName(QString::fromUtf8("saveButton"));

    hboxLayout1->addWidget(saveButton);

    cancelButton = new QPushButton(Room_Resv_Edit_Ui);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

    hboxLayout1->addWidget(cancelButton);


    vboxLayout->addLayout(hboxLayout1);

    label_4->setBuddy(fromDate);
    label_3->setBuddy(roomNumber);
    label_5->setBuddy(toDate);
    label_6->setBuddy(roomType);
    label_10->setBuddy(guestName);
    label_9->setBuddy(customerName);
    label_7->setBuddy(resvNotes);
    label_8->setBuddy(resvHistory);
    QWidget::setTabOrder(customerName, addCustomerButton);
    QWidget::setTabOrder(addCustomerButton, guestName);
    QWidget::setTabOrder(guestName, addGuestButton);
    QWidget::setTabOrder(addGuestButton, roomNumber);
    QWidget::setTabOrder(roomNumber, fromDate);
    QWidget::setTabOrder(fromDate, toDate);
    QWidget::setTabOrder(toDate, roomType);
    QWidget::setTabOrder(roomType, resvNotes);
    QWidget::setTabOrder(resvNotes, resvHistory);
    QWidget::setTabOrder(resvHistory, cancelToggle);
    QWidget::setTabOrder(cancelToggle, saveButton);
    QWidget::setTabOrder(saveButton, cancelButton);
    retranslateUi(Room_Resv_Edit_Ui);

    QMetaObject::connectSlotsByName(Room_Resv_Edit_Ui);
    } // setupUi

    void retranslateUi(QWidget *Room_Resv_Edit_Ui)
    {
    Room_Resv_Edit_Ui->setWindowTitle(QApplication::translate("Room_Resv_Edit_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Room_Resv_Edit_Ui", "Reservation", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Room_Resv_Edit_Ui", "From", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Room_Resv_Edit_Ui", "Room Number", 0, QApplication::UnicodeUTF8));
    toDate->setDisplayFormat(QApplication::translate("Room_Resv_Edit_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    addCustomerButton->setText(QApplication::translate("Room_Resv_Edit_Ui", "Add", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Room_Resv_Edit_Ui", "to", 0, QApplication::UnicodeUTF8));
    addGuestButton->setText(QApplication::translate("Room_Resv_Edit_Ui", "Add", 0, QApplication::UnicodeUTF8));
    roomNumber->setText(QApplication::translate("Room_Resv_Edit_Ui", "", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Room_Resv_Edit_Ui", "Type", 0, QApplication::UnicodeUTF8));
    roomType->clear();
    roomType->addItem(QApplication::translate("Room_Resv_Edit_Ui", "Standard Reservation", 0, QApplication::UnicodeUTF8));
    roomType->addItem(QApplication::translate("Room_Resv_Edit_Ui", "Walk-In Reservation", 0, QApplication::UnicodeUTF8));
    fromDate->setDisplayFormat(QApplication::translate("Room_Resv_Edit_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    guestName->setText(QApplication::translate("Room_Resv_Edit_Ui", "", 0, QApplication::UnicodeUTF8));
    customerName->setText(QApplication::translate("Room_Resv_Edit_Ui", "", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("Room_Resv_Edit_Ui", "Guests", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("Room_Resv_Edit_Ui", "Bill To", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Room_Resv_Edit_Ui", "Notes", 0, QApplication::UnicodeUTF8));
    resvHistory->setHtml(QApplication::translate("Room_Resv_Edit_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("Room_Resv_Edit_Ui", "History", 0, QApplication::UnicodeUTF8));
    cancelToggle->setText(QApplication::translate("Room_Resv_Edit_Ui", "Cancel Reservation", 0, QApplication::UnicodeUTF8));
    saveButton->setText(QApplication::translate("Room_Resv_Edit_Ui", "Save Reservation", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("Room_Resv_Edit_Ui", "Cancel Editing", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Room_Resv_Edit_Ui);
    } // retranslateUi

};

namespace Ui {
    class Room_Resv_Edit_Ui: public Ui_Room_Resv_Edit_Ui {};
} // namespace Ui

#endif // UI_ROOM_RESV_EDIT_H
