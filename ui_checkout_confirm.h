#ifndef UI_CHECKOUT_CONFIRM_H
#define UI_CHECKOUT_CONFIRM_H

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

class Ui_Checkout_Confirm_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QTreeWidget *confirmView;
    QLabel *label_2;
    QTreeWidget *chargeSummary;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QPushButton *addCertButton;
    QPushButton *invoiceButton;
    QPushButton *chargeButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *confirmCheckout;
    QPushButton *cancelCheckout;

    void setupUi(QWidget *Checkout_Confirm_Ui)
    {
    Checkout_Confirm_Ui->setObjectName(QString::fromUtf8("Checkout_Confirm_Ui"));
    Checkout_Confirm_Ui->resize(QSize(646, 535).expandedTo(Checkout_Confirm_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Checkout_Confirm_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox = new QGroupBox(Checkout_Confirm_Ui);
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

    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    vboxLayout1->addWidget(label_2);

    chargeSummary = new QTreeWidget(groupBox);
    chargeSummary->setObjectName(QString::fromUtf8("chargeSummary"));
    chargeSummary->setAlternatingRowColors(true);
    chargeSummary->setRootIsDecorated(false);

    vboxLayout1->addWidget(chargeSummary);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(0);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    addCertButton = new QPushButton(groupBox);
    addCertButton->setObjectName(QString::fromUtf8("addCertButton"));

    vboxLayout2->addWidget(addCertButton);

    invoiceButton = new QPushButton(groupBox);
    invoiceButton->setObjectName(QString::fromUtf8("invoiceButton"));

    vboxLayout2->addWidget(invoiceButton);

    chargeButton = new QPushButton(groupBox);
    chargeButton->setObjectName(QString::fromUtf8("chargeButton"));

    vboxLayout2->addWidget(chargeButton);


    hboxLayout->addLayout(vboxLayout2);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);


    vboxLayout1->addLayout(hboxLayout);


    vboxLayout->addWidget(groupBox);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);

    confirmCheckout = new QPushButton(Checkout_Confirm_Ui);
    confirmCheckout->setObjectName(QString::fromUtf8("confirmCheckout"));

    hboxLayout1->addWidget(confirmCheckout);

    cancelCheckout = new QPushButton(Checkout_Confirm_Ui);
    cancelCheckout->setObjectName(QString::fromUtf8("cancelCheckout"));

    hboxLayout1->addWidget(cancelCheckout);


    vboxLayout->addLayout(hboxLayout1);

    retranslateUi(Checkout_Confirm_Ui);

    QMetaObject::connectSlotsByName(Checkout_Confirm_Ui);
    } // setupUi

    void retranslateUi(QWidget *Checkout_Confirm_Ui)
    {
    Checkout_Confirm_Ui->setWindowTitle(QApplication::translate("Checkout_Confirm_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Checkout_Confirm_Ui", "Check Out Confirmation", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Checkout_Confirm_Ui", "Reservation Detail", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(0, QApplication::translate("Checkout_Confirm_Ui", "Room Number", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(1, QApplication::translate("Checkout_Confirm_Ui", "Guest Name", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(2, QApplication::translate("Checkout_Confirm_Ui", "From Date", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(3, QApplication::translate("Checkout_Confirm_Ui", "To Date", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(4, QApplication::translate("Checkout_Confirm_Ui", "Total Charges", 0, QApplication::UnicodeUTF8));
    confirmView->headerItem()->setText(5, QApplication::translate("Checkout_Confirm_Ui", "Paid", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Checkout_Confirm_Ui", "Charge Summary", 0, QApplication::UnicodeUTF8));
    chargeSummary->headerItem()->setText(0, QApplication::translate("Checkout_Confirm_Ui", "Reason", 0, QApplication::UnicodeUTF8));
    chargeSummary->headerItem()->setText(1, QApplication::translate("Checkout_Confirm_Ui", "Amount", 0, QApplication::UnicodeUTF8));
    addCertButton->setText(QApplication::translate("Checkout_Confirm_Ui", "Add Gift Certificate", 0, QApplication::UnicodeUTF8));
    invoiceButton->setText(QApplication::translate("Checkout_Confirm_Ui", "View/Print Invoice", 0, QApplication::UnicodeUTF8));
    chargeButton->setText(QApplication::translate("Checkout_Confirm_Ui", "Charge Payment", 0, QApplication::UnicodeUTF8));
    confirmCheckout->setText(QApplication::translate("Checkout_Confirm_Ui", "Confirm Check-Out", 0, QApplication::UnicodeUTF8));
    cancelCheckout->setText(QApplication::translate("Checkout_Confirm_Ui", "Cancel Check-Out", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Checkout_Confirm_Ui);
    } // retranslateUi

};

namespace Ui {
    class Checkout_Confirm_Ui: public Ui_Checkout_Confirm_Ui {};
} // namespace Ui

#endif // UI_CHECKOUT_CONFIRM_H
