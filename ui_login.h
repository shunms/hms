#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Login_Ui
{
public:
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_8;
    QLabel *label_7;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *loginButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *Login_Ui)
    {
    Login_Ui->setObjectName(QString::fromUtf8("Login_Ui"));
    Login_Ui->resize(QSize(782, 546).expandedTo(Login_Ui->minimumSizeHint()));
    hboxLayout = new QHBoxLayout(Login_Ui);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(9);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem1);

    groupBox = new QGroupBox(Login_Ui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout = new QGridLayout(groupBox);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    username = new QLineEdit(groupBox);
    username->setObjectName(QString::fromUtf8("username"));

    gridLayout->addWidget(username, 0, 1, 1, 1);

    password = new QLineEdit(groupBox);
    password->setObjectName(QString::fromUtf8("password"));
    password->setEchoMode(QLineEdit::Password);

    gridLayout->addWidget(password, 1, 1, 1, 1);

    label_8 = new QLabel(groupBox);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    gridLayout->addWidget(label_8, 1, 0, 1, 1);

    label_7 = new QLabel(groupBox);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout->addWidget(label_7, 0, 0, 1, 1);


    vboxLayout->addWidget(groupBox);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    spacerItem2 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem2);

    loginButton = new QPushButton(Login_Ui);
    loginButton->setObjectName(QString::fromUtf8("loginButton"));

    hboxLayout1->addWidget(loginButton);

    cancelButton = new QPushButton(Login_Ui);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

    hboxLayout1->addWidget(cancelButton);


    vboxLayout->addLayout(hboxLayout1);

    spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem3);


    hboxLayout->addLayout(vboxLayout);

    spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem4);

    label_8->setBuddy(password);
    label_7->setBuddy(username);
    retranslateUi(Login_Ui);

    QMetaObject::connectSlotsByName(Login_Ui);
    } // setupUi

    void retranslateUi(QWidget *Login_Ui)
    {
    Login_Ui->setWindowTitle(QApplication::translate("Login_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Login_Ui", "User Login", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("Login_Ui", "Password\n"
"", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Login_Ui", "Username", 0, QApplication::UnicodeUTF8));
    loginButton->setText(QApplication::translate("Login_Ui", "&Login", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("Login_Ui", "&Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Login_Ui);
    } // retranslateUi

};

namespace Ui {
    class Login_Ui: public Ui_Login_Ui {};
} // namespace Ui

#endif // UI_LOGIN_H
