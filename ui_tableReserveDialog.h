#ifndef UI_TABLERESERVEDIALOG_H
#define UI_TABLERESERVEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

class Ui_Table_ReserveDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *pbReserve;
    QPushButton *pbAddWaitList;
    QPushButton *pbCancel;
    QFrame *frame;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *lnCustFirstName;
    QLineEdit *lnCustLastName;
    QLabel *label_7;
    QLineEdit *lnRoomNo;
    QLineEdit *lnTableNo;
    QDateEdit *dtDate;
    QLineEdit *lnCapacity;
    QTimeEdit *tmTime;

    void setupUi(QWidget *Table_ReserveDialog)
    {
    Table_ReserveDialog->setObjectName(QString::fromUtf8("Table_ReserveDialog"));
    Table_ReserveDialog->resize(QSize(537, 328).expandedTo(Table_ReserveDialog->minimumSizeHint()));
    layoutWidget = new QWidget(Table_ReserveDialog);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(230, 270, 242, 25));
    hboxLayout = new QHBoxLayout(layoutWidget);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    pbReserve = new QPushButton(layoutWidget);
    pbReserve->setObjectName(QString::fromUtf8("pbReserve"));

    hboxLayout->addWidget(pbReserve);

    pbAddWaitList = new QPushButton(layoutWidget);
    pbAddWaitList->setObjectName(QString::fromUtf8("pbAddWaitList"));

    hboxLayout->addWidget(pbAddWaitList);

    pbCancel = new QPushButton(layoutWidget);
    pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

    hboxLayout->addWidget(pbCancel);

    frame = new QFrame(Table_ReserveDialog);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setGeometry(QRect(30, 10, 451, 241));
    QFont font;
    font.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font.setPointSize(10);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    frame->setFont(font);
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);
    label_10 = new QLabel(frame);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(50, 130, 51, 22));
    label_11 = new QLabel(frame);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(50, 160, 51, 22));
    label_12 = new QLabel(frame);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(50, 190, 51, 22));
    label_6 = new QLabel(frame);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(40, 40, 61, 17));
    QFont font1;
    font1.setFamily(QString::fromUtf8("MS Shell Dlg"));
    font1.setPointSize(9);
    font1.setBold(false);
    font1.setItalic(false);
    font1.setUnderline(false);
    font1.setWeight(50);
    font1.setStrikeOut(false);
    label_6->setFont(font1);
    label = new QLabel(frame);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(40, 10, 61, 22));
    label_8 = new QLabel(frame);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(40, 100, 51, 22));
    lnCustFirstName = new QLineEdit(frame);
    lnCustFirstName->setObjectName(QString::fromUtf8("lnCustFirstName"));
    lnCustFirstName->setGeometry(QRect(120, 10, 311, 23));
    lnCustLastName = new QLineEdit(frame);
    lnCustLastName->setObjectName(QString::fromUtf8("lnCustLastName"));
    lnCustLastName->setGeometry(QRect(120, 40, 311, 23));
    label_7 = new QLabel(frame);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(40, 70, 47, 14));
    lnRoomNo = new QLineEdit(frame);
    lnRoomNo->setObjectName(QString::fromUtf8("lnRoomNo"));
    lnRoomNo->setGeometry(QRect(120, 70, 113, 20));
    lnTableNo = new QLineEdit(frame);
    lnTableNo->setObjectName(QString::fromUtf8("lnTableNo"));
    lnTableNo->setGeometry(QRect(120, 100, 113, 20));
    dtDate = new QDateEdit(frame);
    dtDate->setObjectName(QString::fromUtf8("dtDate"));
    dtDate->setGeometry(QRect(120, 130, 111, 23));
    lnCapacity = new QLineEdit(frame);
    lnCapacity->setObjectName(QString::fromUtf8("lnCapacity"));
    lnCapacity->setGeometry(QRect(120, 190, 113, 20));
    tmTime = new QTimeEdit(frame);
    tmTime->setObjectName(QString::fromUtf8("tmTime"));
    tmTime->setGeometry(QRect(120, 160, 111, 23));
    label_10->setBuddy(lnTableNo);
    label_11->setBuddy(lnTableNo);
    label_12->setBuddy(lnTableNo);
    label_6->setBuddy(lnCustLastName);
    label->setBuddy(lnCustFirstName);
    label_8->setBuddy(lnTableNo);
    label_7->setBuddy(lnRoomNo);
    QWidget::setTabOrder(lnCustFirstName, lnCustLastName);
    QWidget::setTabOrder(lnCustLastName, lnRoomNo);
    QWidget::setTabOrder(lnRoomNo, lnTableNo);
    QWidget::setTabOrder(lnTableNo, dtDate);
    QWidget::setTabOrder(dtDate, tmTime);
    QWidget::setTabOrder(tmTime, lnCapacity);
    QWidget::setTabOrder(lnCapacity, pbReserve);
    QWidget::setTabOrder(pbReserve, pbAddWaitList);
    QWidget::setTabOrder(pbAddWaitList, pbCancel);
    retranslateUi(Table_ReserveDialog);
    QObject::connect(pbCancel, SIGNAL(clicked()), Table_ReserveDialog, SLOT(close()));

    QMetaObject::connectSlotsByName(Table_ReserveDialog);
    } // setupUi

    void retranslateUi(QWidget *Table_ReserveDialog)
    {
    Table_ReserveDialog->setWindowTitle(QApplication::translate("Table_ReserveDialog", "table_reservedialog", 0, QApplication::UnicodeUTF8));
    pbReserve->setText(QApplication::translate("Table_ReserveDialog", "Reserve", 0, QApplication::UnicodeUTF8));
    pbAddWaitList->setText(QApplication::translate("Table_ReserveDialog", "Add to Wail list", 0, QApplication::UnicodeUTF8));
    pbCancel->setText(QApplication::translate("Table_ReserveDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("Table_ReserveDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Date</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("Table_ReserveDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Time</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("Table_ReserveDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Capacity</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Table_ReserveDialog", " Last Name", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Table_ReserveDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:10pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">First Name</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("Table_ReserveDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Table #</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Table_ReserveDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Room #</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Table_ReserveDialog);
    } // retranslateUi

};

namespace Ui {
    class Table_ReserveDialog: public Ui_Table_ReserveDialog {};
} // namespace Ui

#endif // UI_TABLERESERVEDIALOG_H
