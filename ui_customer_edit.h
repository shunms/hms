#ifndef UI_CUSTOMER_EDIT_H
#define UI_CUSTOMER_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Customer_Edit_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *contact;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLineEdit *contactState;
    QLabel *label_9;
    QLineEdit *contactCity;
    QTextEdit *contactAddress;
    QLabel *label_10;
    QLabel *label_7;
    QLineEdit *contactCountry;
    QLabel *label_8;
    QLineEdit *contactZip;
    QLabel *label_17;
    QWidget *billing;
    QGridLayout *gridLayout2;
    QLabel *label_16;
    QComboBox *billingPreference;
    QCheckBox *sameBillingToggle;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_14;
    QLineEdit *ccNumber;
    QTextEdit *billingAddress;
    QLineEdit *billingCountry;
    QLineEdit *billingCity;
    QLineEdit *billingState;
    QLabel *label_12;
    QLineEdit *billingZip;
    QLabel *label_18;
    QCheckBox *autoGuestToggle;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QComboBox *contactTitle;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *customerName;
    QLineEdit *contactEmail;
    QLineEdit *contactLastName;
    QLineEdit *contactFirstName;
    QLabel *label_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *saveCustomer;
    QPushButton *closeCustomer;

    void setupUi(QWidget *Customer_Edit_Ui)
    {
    Customer_Edit_Ui->setObjectName(QString::fromUtf8("Customer_Edit_Ui"));
    Customer_Edit_Ui->resize(QSize(895, 692).expandedTo(Customer_Edit_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Customer_Edit_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox = new QGroupBox(Customer_Edit_Ui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout = new QGridLayout(groupBox);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(groupBox);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    contact = new QWidget();
    contact->setObjectName(QString::fromUtf8("contact"));
    gridLayout1 = new QGridLayout(contact);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 5, 1, 1, 1);

    contactState = new QLineEdit(contact);
    contactState->setObjectName(QString::fromUtf8("contactState"));

    gridLayout1->addWidget(contactState, 2, 1, 1, 1);

    label_9 = new QLabel(contact);
    label_9->setObjectName(QString::fromUtf8("label_9"));

    gridLayout1->addWidget(label_9, 2, 0, 1, 1);

    contactCity = new QLineEdit(contact);
    contactCity->setObjectName(QString::fromUtf8("contactCity"));

    gridLayout1->addWidget(contactCity, 1, 1, 1, 1);

    contactAddress = new QTextEdit(contact);
    contactAddress->setObjectName(QString::fromUtf8("contactAddress"));

    gridLayout1->addWidget(contactAddress, 0, 1, 1, 1);

    label_10 = new QLabel(contact);
    label_10->setObjectName(QString::fromUtf8("label_10"));

    gridLayout1->addWidget(label_10, 4, 0, 1, 1);

    label_7 = new QLabel(contact);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout1->addWidget(label_7, 0, 0, 1, 1);

    contactCountry = new QLineEdit(contact);
    contactCountry->setObjectName(QString::fromUtf8("contactCountry"));

    gridLayout1->addWidget(contactCountry, 4, 1, 1, 1);

    label_8 = new QLabel(contact);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    gridLayout1->addWidget(label_8, 1, 0, 1, 1);

    contactZip = new QLineEdit(contact);
    contactZip->setObjectName(QString::fromUtf8("contactZip"));

    gridLayout1->addWidget(contactZip, 3, 1, 1, 1);

    label_17 = new QLabel(contact);
    label_17->setObjectName(QString::fromUtf8("label_17"));

    gridLayout1->addWidget(label_17, 3, 0, 1, 1);

    tabWidget->addTab(contact, QApplication::translate("Customer_Edit_Ui", "Contact &Address", 0, QApplication::UnicodeUTF8));
    billing = new QWidget();
    billing->setObjectName(QString::fromUtf8("billing"));
    gridLayout2 = new QGridLayout(billing);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label_16 = new QLabel(billing);
    label_16->setObjectName(QString::fromUtf8("label_16"));

    gridLayout2->addWidget(label_16, 7, 0, 1, 1);

    billingPreference = new QComboBox(billing);
    billingPreference->setObjectName(QString::fromUtf8("billingPreference"));
    billingPreference->setEditable(true);

    gridLayout2->addWidget(billingPreference, 7, 1, 1, 1);

    sameBillingToggle = new QCheckBox(billing);
    sameBillingToggle->setObjectName(QString::fromUtf8("sameBillingToggle"));
    sameBillingToggle->setChecked(true);

    gridLayout2->addWidget(sameBillingToggle, 0, 0, 1, 2);

    label_13 = new QLabel(billing);
    label_13->setObjectName(QString::fromUtf8("label_13"));

    gridLayout2->addWidget(label_13, 2, 0, 1, 1);

    label_11 = new QLabel(billing);
    label_11->setObjectName(QString::fromUtf8("label_11"));

    gridLayout2->addWidget(label_11, 3, 0, 1, 1);

    label_15 = new QLabel(billing);
    label_15->setObjectName(QString::fromUtf8("label_15"));

    gridLayout2->addWidget(label_15, 6, 0, 1, 1);

    label_14 = new QLabel(billing);
    label_14->setObjectName(QString::fromUtf8("label_14"));

    gridLayout2->addWidget(label_14, 1, 0, 1, 1);

    ccNumber = new QLineEdit(billing);
    ccNumber->setObjectName(QString::fromUtf8("ccNumber"));

    gridLayout2->addWidget(ccNumber, 6, 1, 1, 1);

    billingAddress = new QTextEdit(billing);
    billingAddress->setObjectName(QString::fromUtf8("billingAddress"));
    billingAddress->setEnabled(false);

    gridLayout2->addWidget(billingAddress, 1, 1, 1, 1);

    billingCountry = new QLineEdit(billing);
    billingCountry->setObjectName(QString::fromUtf8("billingCountry"));
    billingCountry->setEnabled(false);

    gridLayout2->addWidget(billingCountry, 5, 1, 1, 1);

    billingCity = new QLineEdit(billing);
    billingCity->setObjectName(QString::fromUtf8("billingCity"));
    billingCity->setEnabled(false);

    gridLayout2->addWidget(billingCity, 2, 1, 1, 1);

    billingState = new QLineEdit(billing);
    billingState->setObjectName(QString::fromUtf8("billingState"));
    billingState->setEnabled(false);

    gridLayout2->addWidget(billingState, 3, 1, 1, 1);

    label_12 = new QLabel(billing);
    label_12->setObjectName(QString::fromUtf8("label_12"));

    gridLayout2->addWidget(label_12, 5, 0, 1, 1);

    billingZip = new QLineEdit(billing);
    billingZip->setObjectName(QString::fromUtf8("billingZip"));

    gridLayout2->addWidget(billingZip, 4, 1, 1, 1);

    label_18 = new QLabel(billing);
    label_18->setObjectName(QString::fromUtf8("label_18"));

    gridLayout2->addWidget(label_18, 4, 0, 1, 1);

    tabWidget->addTab(billing, QApplication::translate("Customer_Edit_Ui", "&Billing Information", 0, QApplication::UnicodeUTF8));

    gridLayout->addWidget(tabWidget, 5, 0, 1, 3);

    autoGuestToggle = new QCheckBox(groupBox);
    autoGuestToggle->setObjectName(QString::fromUtf8("autoGuestToggle"));

    gridLayout->addWidget(autoGuestToggle, 6, 0, 1, 3);

    label_6 = new QLabel(groupBox);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout->addWidget(label_6, 0, 2, 2, 1);

    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout->addWidget(label_5, 4, 0, 1, 1);

    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 3, 0, 1, 1);

    contactTitle = new QComboBox(groupBox);
    contactTitle->setObjectName(QString::fromUtf8("contactTitle"));

    gridLayout->addWidget(contactTitle, 1, 1, 1, 1);

    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 1, 0, 1, 1);

    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    customerName = new QLineEdit(groupBox);
    customerName->setObjectName(QString::fromUtf8("customerName"));

    gridLayout->addWidget(customerName, 0, 1, 1, 1);

    contactEmail = new QLineEdit(groupBox);
    contactEmail->setObjectName(QString::fromUtf8("contactEmail"));

    gridLayout->addWidget(contactEmail, 4, 1, 1, 1);

    contactLastName = new QLineEdit(groupBox);
    contactLastName->setObjectName(QString::fromUtf8("contactLastName"));

    gridLayout->addWidget(contactLastName, 3, 1, 1, 1);

    contactFirstName = new QLineEdit(groupBox);
    contactFirstName->setObjectName(QString::fromUtf8("contactFirstName"));

    gridLayout->addWidget(contactFirstName, 2, 1, 1, 1);

    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 2, 0, 1, 1);


    vboxLayout->addWidget(groupBox);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    saveCustomer = new QPushButton(Customer_Edit_Ui);
    saveCustomer->setObjectName(QString::fromUtf8("saveCustomer"));

    hboxLayout->addWidget(saveCustomer);

    closeCustomer = new QPushButton(Customer_Edit_Ui);
    closeCustomer->setObjectName(QString::fromUtf8("closeCustomer"));

    hboxLayout->addWidget(closeCustomer);


    vboxLayout->addLayout(hboxLayout);

    label_9->setBuddy(contactState);
    label_10->setBuddy(contactCountry);
    label_7->setBuddy(contactAddress);
    label_8->setBuddy(contactCity);
    label_17->setBuddy(contactZip);
    label_16->setBuddy(billingPreference);
    label_13->setBuddy(billingCity);
    label_11->setBuddy(billingState);
    label_15->setBuddy(ccNumber);
    label_14->setBuddy(billingAddress);
    label_12->setBuddy(billingCountry);
    label_18->setBuddy(billingZip);
    label_5->setBuddy(contactEmail);
    label_3->setBuddy(contactLastName);
    label_4->setBuddy(contactTitle);
    label->setBuddy(customerName);
    label_2->setBuddy(contactFirstName);
    QWidget::setTabOrder(customerName, contactTitle);
    QWidget::setTabOrder(contactTitle, contactFirstName);
    QWidget::setTabOrder(contactFirstName, contactLastName);
    QWidget::setTabOrder(contactLastName, contactEmail);
    QWidget::setTabOrder(contactEmail, tabWidget);
    QWidget::setTabOrder(tabWidget, contactAddress);
    QWidget::setTabOrder(contactAddress, contactCity);
    QWidget::setTabOrder(contactCity, contactState);
    QWidget::setTabOrder(contactState, contactZip);
    QWidget::setTabOrder(contactZip, contactCountry);
    QWidget::setTabOrder(contactCountry, sameBillingToggle);
    QWidget::setTabOrder(sameBillingToggle, billingAddress);
    QWidget::setTabOrder(billingAddress, billingCity);
    QWidget::setTabOrder(billingCity, billingState);
    QWidget::setTabOrder(billingState, billingZip);
    QWidget::setTabOrder(billingZip, billingCountry);
    QWidget::setTabOrder(billingCountry, ccNumber);
    QWidget::setTabOrder(ccNumber, billingPreference);
    QWidget::setTabOrder(billingPreference, autoGuestToggle);
    QWidget::setTabOrder(autoGuestToggle, saveCustomer);
    QWidget::setTabOrder(saveCustomer, closeCustomer);
    retranslateUi(Customer_Edit_Ui);

    QMetaObject::connectSlotsByName(Customer_Edit_Ui);
    } // setupUi

    void retranslateUi(QWidget *Customer_Edit_Ui)
    {
    Customer_Edit_Ui->setWindowTitle(QApplication::translate("Customer_Edit_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Customer_Edit_Ui", "Customer Information", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("Customer_Edit_Ui", "State/Region", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("Customer_Edit_Ui", "Country", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Customer_Edit_Ui", "Address", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("Customer_Edit_Ui", "City", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("Customer_Edit_Ui", "Zip", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(contact), QApplication::translate("Customer_Edit_Ui", "Contact &Address", 0, QApplication::UnicodeUTF8));
    label_16->setText(QApplication::translate("Customer_Edit_Ui", "Billing Preference", 0, QApplication::UnicodeUTF8));
    billingPreference->clear();
    billingPreference->addItem(QApplication::translate("Customer_Edit_Ui", "Credit Card", 0, QApplication::UnicodeUTF8));
    billingPreference->addItem(QApplication::translate("Customer_Edit_Ui", "Postal Mail", 0, QApplication::UnicodeUTF8));
    billingPreference->addItem(QApplication::translate("Customer_Edit_Ui", "Electonic Mail", 0, QApplication::UnicodeUTF8));
    billingPreference->addItem(QApplication::translate("Customer_Edit_Ui", "Pay on Check-In", 0, QApplication::UnicodeUTF8));
    billingPreference->addItem(QApplication::translate("Customer_Edit_Ui", "Pay on Check-Out", 0, QApplication::UnicodeUTF8));
    sameBillingToggle->setText(QApplication::translate("Customer_Edit_Ui", "Billing Address same as Contact Address", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("Customer_Edit_Ui", "City", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("Customer_Edit_Ui", "State/Region", 0, QApplication::UnicodeUTF8));
    label_15->setText(QApplication::translate("Customer_Edit_Ui", "Credit Card #", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("Customer_Edit_Ui", "Address", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("Customer_Edit_Ui", "Country", 0, QApplication::UnicodeUTF8));
    label_18->setText(QApplication::translate("Customer_Edit_Ui", "Zip", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(billing), QApplication::translate("Customer_Edit_Ui", "&Billing Information", 0, QApplication::UnicodeUTF8));
    autoGuestToggle->setText(QApplication::translate("Customer_Edit_Ui", "Create New Guest with this Information", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Customer_Edit_Ui", "If blank, the Customer Name will be autmatically\n"
"set to \"Firstname Lastname\".", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Customer_Edit_Ui", "Email", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Customer_Edit_Ui", "Contact Last Name", 0, QApplication::UnicodeUTF8));
    contactTitle->clear();
    contactTitle->addItem(QApplication::translate("Customer_Edit_Ui", "Mr.", 0, QApplication::UnicodeUTF8));
    contactTitle->addItem(QApplication::translate("Customer_Edit_Ui", "Ms.", 0, QApplication::UnicodeUTF8));
    contactTitle->addItem(QApplication::translate("Customer_Edit_Ui", "Mrs.", 0, QApplication::UnicodeUTF8));
    contactTitle->addItem(QApplication::translate("Customer_Edit_Ui", "Miss", 0, QApplication::UnicodeUTF8));
    contactTitle->addItem(QApplication::translate("Customer_Edit_Ui", "Dr.", 0, QApplication::UnicodeUTF8));
    contactTitle->addItem(QApplication::translate("Customer_Edit_Ui", "Sir", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Customer_Edit_Ui", "Contact Title", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Customer_Edit_Ui", "Customer Name", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Customer_Edit_Ui", "Contact First Name", 0, QApplication::UnicodeUTF8));
    saveCustomer->setText(QApplication::translate("Customer_Edit_Ui", "&Save Customer", 0, QApplication::UnicodeUTF8));
    closeCustomer->setText(QApplication::translate("Customer_Edit_Ui", "&Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Customer_Edit_Ui);
    } // retranslateUi

};

namespace Ui {
    class Customer_Edit_Ui: public Ui_Customer_Edit_Ui {};
} // namespace Ui

#endif // UI_CUSTOMER_EDIT_H
