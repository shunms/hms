#ifndef UI_FUNCTION_ROOMDIALOG_H
#define UI_FUNCTION_ROOMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

class Ui_Function_RoomDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *pbReservationReserve;
    QPushButton *pbReservationCancel;
    QGroupBox *groupBox;
    QLabel *lbReservationFuncRoomNo;
    QLabel *lbReservationHotelRoomNo;
    QLabel *lbReservationLastName;
    QLabel *lbReservationFirstName;
    QLineEdit *lnCustFirstName;
    QLineEdit *lnCustLastName;
    QLineEdit *lnRoomNo;
    QLineEdit *lnFuncRoomNo;
    QLabel *lbReservationTime;
    QLabel *lbReservationDate;
    QLabel *lbCapacity;
    QLineEdit *lnCapacity;
    QDateEdit *lndtDate;
    QTimeEdit *lntmTime;

    void setupUi(QWidget *Function_RoomDialog)
    {
    Function_RoomDialog->setObjectName(QString::fromUtf8("Function_RoomDialog"));
    Function_RoomDialog->resize(QSize(572, 423).expandedTo(Function_RoomDialog->minimumSizeHint()));
    layoutWidget = new QWidget(Function_RoomDialog);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(320, 360, 158, 25));
    hboxLayout = new QHBoxLayout(layoutWidget);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    pbReservationReserve = new QPushButton(layoutWidget);
    pbReservationReserve->setObjectName(QString::fromUtf8("pbReservationReserve"));

    hboxLayout->addWidget(pbReservationReserve);

    pbReservationCancel = new QPushButton(layoutWidget);
    pbReservationCancel->setObjectName(QString::fromUtf8("pbReservationCancel"));

    hboxLayout->addWidget(pbReservationCancel);

    groupBox = new QGroupBox(Function_RoomDialog);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(60, 60, 431, 281));
    lbReservationFuncRoomNo = new QLabel(groupBox);
    lbReservationFuncRoomNo->setObjectName(QString::fromUtf8("lbReservationFuncRoomNo"));
    lbReservationFuncRoomNo->setGeometry(QRect(20, 120, 91, 16));
    lbReservationHotelRoomNo = new QLabel(groupBox);
    lbReservationHotelRoomNo->setObjectName(QString::fromUtf8("lbReservationHotelRoomNo"));
    lbReservationHotelRoomNo->setGeometry(QRect(20, 80, 74, 22));
    lbReservationLastName = new QLabel(groupBox);
    lbReservationLastName->setObjectName(QString::fromUtf8("lbReservationLastName"));
    lbReservationLastName->setGeometry(QRect(20, 50, 62, 22));
    lbReservationFirstName = new QLabel(groupBox);
    lbReservationFirstName->setObjectName(QString::fromUtf8("lbReservationFirstName"));
    lbReservationFirstName->setGeometry(QRect(20, 20, 92, 22));
    lnCustFirstName = new QLineEdit(groupBox);
    lnCustFirstName->setObjectName(QString::fromUtf8("lnCustFirstName"));
    lnCustFirstName->setGeometry(QRect(120, 20, 301, 20));
    lnCustLastName = new QLineEdit(groupBox);
    lnCustLastName->setObjectName(QString::fromUtf8("lnCustLastName"));
    lnCustLastName->setGeometry(QRect(120, 50, 301, 20));
    lnRoomNo = new QLineEdit(groupBox);
    lnRoomNo->setObjectName(QString::fromUtf8("lnRoomNo"));
    lnRoomNo->setGeometry(QRect(120, 80, 111, 20));
    lnFuncRoomNo = new QLineEdit(groupBox);
    lnFuncRoomNo->setObjectName(QString::fromUtf8("lnFuncRoomNo"));
    lnFuncRoomNo->setGeometry(QRect(120, 120, 111, 20));
    lbReservationTime = new QLabel(groupBox);
    lbReservationTime->setObjectName(QString::fromUtf8("lbReservationTime"));
    lbReservationTime->setGeometry(QRect(40, 220, 51, 20));
    lbReservationDate = new QLabel(groupBox);
    lbReservationDate->setObjectName(QString::fromUtf8("lbReservationDate"));
    lbReservationDate->setGeometry(QRect(30, 190, 47, 14));
    lbCapacity = new QLabel(groupBox);
    lbCapacity->setObjectName(QString::fromUtf8("lbCapacity"));
    lbCapacity->setGeometry(QRect(30, 150, 61, 16));
    lnCapacity = new QLineEdit(groupBox);
    lnCapacity->setObjectName(QString::fromUtf8("lnCapacity"));
    lnCapacity->setGeometry(QRect(120, 150, 113, 20));
    lndtDate = new QDateEdit(groupBox);
    lndtDate->setObjectName(QString::fromUtf8("lndtDate"));
    lndtDate->setGeometry(QRect(120, 190, 111, 21));
    lntmTime = new QTimeEdit(groupBox);
    lntmTime->setObjectName(QString::fromUtf8("lntmTime"));
    lntmTime->setGeometry(QRect(120, 220, 111, 22));
    retranslateUi(Function_RoomDialog);
    QObject::connect(pbReservationCancel, SIGNAL(clicked()), Function_RoomDialog, SLOT(close()));

    QMetaObject::connectSlotsByName(Function_RoomDialog);
    } // setupUi

    void retranslateUi(QWidget *Function_RoomDialog)
    {
    Function_RoomDialog->setWindowTitle(QApplication::translate("Function_RoomDialog", "FuncRoomDialog", 0, QApplication::UnicodeUTF8));
    pbReservationReserve->setText(QApplication::translate("Function_RoomDialog", "Reserve", 0, QApplication::UnicodeUTF8));
    pbReservationCancel->setText(QApplication::translate("Function_RoomDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Function_RoomDialog", "Reservation", 0, QApplication::UnicodeUTF8));
    lbReservationFuncRoomNo->setText(QApplication::translate("Function_RoomDialog", "Function Room #", 0, QApplication::UnicodeUTF8));
    lbReservationHotelRoomNo->setText(QApplication::translate("Function_RoomDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Hotel Room #</p></body></html>", 0, QApplication::UnicodeUTF8));
    lbReservationLastName->setText(QApplication::translate("Function_RoomDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Last Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    lbReservationFirstName->setText(QApplication::translate("Function_RoomDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">First Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    lbReservationTime->setText(QApplication::translate("Function_RoomDialog", "Time", 0, QApplication::UnicodeUTF8));
    lbReservationDate->setText(QApplication::translate("Function_RoomDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><span style=\" font-size:8pt;\">Date</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    lbCapacity->setText(QApplication::translate("Function_RoomDialog", "Capacity", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Function_RoomDialog);
    } // retranslateUi

};

namespace Ui {
    class Function_RoomDialog: public Ui_Function_RoomDialog {};
} // namespace Ui

#endif // UI_FUNCTION_ROOMDIALOG_H
