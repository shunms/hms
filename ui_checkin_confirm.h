#ifndef UI_CHECKIN_CONFIRM_H
#define UI_CHECKIN_CONFIRM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Checkin_Confirm_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QTreeWidget *confirmView;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *confirmCheckin;
    QPushButton *cancelCheckin;

    void setupUi(QWidget *Checkin_Confirm_Ui)
    {
    Checkin_Confirm_Ui->setObjectName(QString::fromUtf8("Checkin_Confirm_Ui"));
    Checkin_Confirm_Ui->resize(QSize(524, 412).expandedTo(Checkin_Confirm_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Checkin_Confirm_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox = new QGroupBox(Checkin_Confirm_Ui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    vboxLayout1 = new QVBoxLayout(groupBox);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(9);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    vboxLayout1->addWidget(label);

    confirmView = new QTreeWidget(groupBox);
    confirmView->setObjectName(QString::fromUtf8("confirmView"));
    confirmView->setMidLineWidth(0);
    confirmView->setAlternatingRowColors(false);
    confirmView->setRootIsDecorated(false);

    vboxLayout1->addWidget(confirmView);


    vboxLayout->addWidget(groupBox);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    confirmCheckin = new QPushButton(Checkin_Confirm_Ui);
    confirmCheckin->setObjectName(QString::fromUtf8("confirmCheckin"));

    hboxLayout->addWidget(confirmCheckin);

    cancelCheckin = new QPushButton(Checkin_Confirm_Ui);
    cancelCheckin->setObjectName(QString::fromUtf8("cancelCheckin"));

    hboxLayout->addWidget(cancelCheckin);


    vboxLayout->addLayout(hboxLayout);

    retranslateUi(Checkin_Confirm_Ui);

    QMetaObject::connectSlotsByName(Checkin_Confirm_Ui);
    } // setupUi

    void retranslateUi(QWidget *Checkin_Confirm_Ui)
    {
    Checkin_Confirm_Ui->setWindowTitle(QApplication::translate("Checkin_Confirm_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Checkin_Confirm_Ui", "Check In Confirmation", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Checkin_Confirm_Ui", "Reservation Detail", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(0, QApplication::translate("Checkin_Confirm_Ui", "Room Number", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(1, QApplication::translate("Checkin_Confirm_Ui", "Guest Name", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(2, QApplication::translate("Checkin_Confirm_Ui", "From Date", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(3, QApplication::translate("Checkin_Confirm_Ui", "To Date", 0, QApplication::UnicodeUTF8));
    confirmCheckin->setText(QApplication::translate("Checkin_Confirm_Ui", "Confirm Check-In", 0, QApplication::UnicodeUTF8));
    cancelCheckin->setText(QApplication::translate("Checkin_Confirm_Ui", "Cancel Check-In", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Checkin_Confirm_Ui);
    } // retranslateUi

};

namespace Ui {
    class Checkin_Confirm_Ui: public Ui_Checkin_Confirm_Ui {};
} // namespace Ui

#endif // UI_CHECKIN_CONFIRM_H
