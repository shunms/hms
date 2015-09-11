#ifndef UI_GUEST_EDIT_H
#define UI_GUEST_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Guest_Edit_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextEdit *guestNotes;
    QLineEdit *customerHint;
    QLabel *label_8;
    QLabel *label_7;
    QDateEdit *dateOfBirth;
    QLabel *label_6;
    QComboBox *sex;
    QLabel *label_5;
    QComboBox *titleChooser;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lastName;
    QLineEdit *firstName;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *saveGuest;
    QPushButton *closeGuest;

    void setupUi(QWidget *Guest_Edit_Ui)
    {
    Guest_Edit_Ui->setObjectName(QString::fromUtf8("Guest_Edit_Ui"));
    Guest_Edit_Ui->resize(QSize(755, 570).expandedTo(Guest_Edit_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Guest_Edit_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox = new QGroupBox(Guest_Edit_Ui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout = new QGridLayout(groupBox);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    guestNotes = new QTextEdit(groupBox);
    guestNotes->setObjectName(QString::fromUtf8("guestNotes"));

    gridLayout->addWidget(guestNotes, 5, 1, 1, 2);

    customerHint = new QLineEdit(groupBox);
    customerHint->setObjectName(QString::fromUtf8("customerHint"));
    customerHint->setEnabled(false);
    customerHint->setReadOnly(true);

    gridLayout->addWidget(customerHint, 6, 1, 1, 2);

    label_8 = new QLabel(groupBox);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    gridLayout->addWidget(label_8, 6, 0, 1, 1);

    label_7 = new QLabel(groupBox);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout->addWidget(label_7, 5, 0, 1, 1);

    dateOfBirth = new QDateEdit(groupBox);
    dateOfBirth->setObjectName(QString::fromUtf8("dateOfBirth"));

    gridLayout->addWidget(dateOfBirth, 4, 1, 1, 1);

    label_6 = new QLabel(groupBox);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout->addWidget(label_6, 4, 0, 1, 1);

    sex = new QComboBox(groupBox);
    sex->setObjectName(QString::fromUtf8("sex"));

    gridLayout->addWidget(sex, 3, 1, 1, 1);

    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout->addWidget(label_5, 3, 0, 1, 1);

    titleChooser = new QComboBox(groupBox);
    titleChooser->setObjectName(QString::fromUtf8("titleChooser"));

    gridLayout->addWidget(titleChooser, 0, 1, 1, 1);

    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 1, 2, 1, 1);

    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 2, 0, 1, 1);

    lastName = new QLineEdit(groupBox);
    lastName->setObjectName(QString::fromUtf8("lastName"));

    gridLayout->addWidget(lastName, 2, 1, 1, 1);

    firstName = new QLineEdit(groupBox);
    firstName->setObjectName(QString::fromUtf8("firstName"));

    gridLayout->addWidget(firstName, 1, 1, 1, 1);

    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 1, 0, 1, 1);

    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 0, 0, 1, 1);


    vboxLayout->addWidget(groupBox);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    saveGuest = new QPushButton(Guest_Edit_Ui);
    saveGuest->setObjectName(QString::fromUtf8("saveGuest"));

    hboxLayout->addWidget(saveGuest);

    closeGuest = new QPushButton(Guest_Edit_Ui);
    closeGuest->setObjectName(QString::fromUtf8("closeGuest"));

    hboxLayout->addWidget(closeGuest);


    vboxLayout->addLayout(hboxLayout);

    label_8->setBuddy(customerHint);
    label_7->setBuddy(guestNotes);
    label_6->setBuddy(dateOfBirth);
    label_5->setBuddy(sex);
    label->setBuddy(lastName);
    label_2->setBuddy(firstName);
    label_3->setBuddy(titleChooser);
    QWidget::setTabOrder(titleChooser, firstName);
    QWidget::setTabOrder(firstName, lastName);
    QWidget::setTabOrder(lastName, sex);
    QWidget::setTabOrder(sex, dateOfBirth);
    QWidget::setTabOrder(dateOfBirth, guestNotes);
    QWidget::setTabOrder(guestNotes, saveGuest);
    QWidget::setTabOrder(saveGuest, closeGuest);
    QWidget::setTabOrder(closeGuest, customerHint);
    retranslateUi(Guest_Edit_Ui);

    QMetaObject::connectSlotsByName(Guest_Edit_Ui);
    } // setupUi

    void retranslateUi(QWidget *Guest_Edit_Ui)
    {
    Guest_Edit_Ui->setWindowTitle(QApplication::translate("Guest_Edit_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Guest_Edit_Ui", "Guest Information", 0, QApplication::UnicodeUTF8));
    customerHint->setText(QApplication::translate("Guest_Edit_Ui", "Robertson Surveying LLC", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("Guest_Edit_Ui", "Customer", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Guest_Edit_Ui", "Notes", 0, QApplication::UnicodeUTF8));
    dateOfBirth->setDisplayFormat(QApplication::translate("Guest_Edit_Ui", "MM/dd/yyyy", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Guest_Edit_Ui", "Date of Birth", 0, QApplication::UnicodeUTF8));
    sex->clear();
    sex->addItem(QApplication::translate("Guest_Edit_Ui", "Male", 0, QApplication::UnicodeUTF8));
    sex->addItem(QApplication::translate("Guest_Edit_Ui", "Female", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Guest_Edit_Ui", "Sex", 0, QApplication::UnicodeUTF8));
    titleChooser->clear();
    titleChooser->addItem(QApplication::translate("Guest_Edit_Ui", "Mr.", 0, QApplication::UnicodeUTF8));
    titleChooser->addItem(QApplication::translate("Guest_Edit_Ui", "Ms.", 0, QApplication::UnicodeUTF8));
    titleChooser->addItem(QApplication::translate("Guest_Edit_Ui", "Mrs.", 0, QApplication::UnicodeUTF8));
    titleChooser->addItem(QApplication::translate("Guest_Edit_Ui", "Miss", 0, QApplication::UnicodeUTF8));
    titleChooser->addItem(QApplication::translate("Guest_Edit_Ui", "Dr.", 0, QApplication::UnicodeUTF8));
    titleChooser->addItem(QApplication::translate("Guest_Edit_Ui", "Sir", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Guest_Edit_Ui", "Include name and any intials.", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Guest_Edit_Ui", "Last Name", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Guest_Edit_Ui", "First Name", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Guest_Edit_Ui", "Title", 0, QApplication::UnicodeUTF8));
    saveGuest->setText(QApplication::translate("Guest_Edit_Ui", "&Save Guest", 0, QApplication::UnicodeUTF8));
    closeGuest->setText(QApplication::translate("Guest_Edit_Ui", "&Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Guest_Edit_Ui);
    } // retranslateUi

};

namespace Ui {
    class Guest_Edit_Ui: public Ui_Guest_Edit_Ui {};
} // namespace Ui

#endif // UI_GUEST_EDIT_H
