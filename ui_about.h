#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_About_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QLabel *aboutSoftware;
    QLabel *label_2;
    QLabel *aboutVersion;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *About_Ui)
    {
    About_Ui->setObjectName(QString::fromUtf8("About_Ui"));
    About_Ui->resize(QSize(400, 300).expandedTo(About_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(About_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(8);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);

    aboutSoftware = new QLabel(About_Ui);
    aboutSoftware->setObjectName(QString::fromUtf8("aboutSoftware"));

    vboxLayout->addWidget(aboutSoftware);

    label_2 = new QLabel(About_Ui);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    vboxLayout->addWidget(label_2);

    aboutVersion = new QLabel(About_Ui);
    aboutVersion->setObjectName(QString::fromUtf8("aboutVersion"));

    vboxLayout->addWidget(aboutVersion);

    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem1);

    retranslateUi(About_Ui);

    QMetaObject::connectSlotsByName(About_Ui);
    } // setupUi

    void retranslateUi(QWidget *About_Ui)
    {
    About_Ui->setWindowTitle(QApplication::translate("About_Ui", "Form", 0, QApplication::UnicodeUTF8));
    aboutSoftware->setText(QApplication::translate("About_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Hotel Management System</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("About_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">By Softlinks</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    aboutVersion->setText(QApplication::translate("About_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Version: 0.0.0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(About_Ui);
    } // retranslateUi

};

namespace Ui {
    class About_Ui: public Ui_About_Ui {};
} // namespace Ui

#endif // UI_ABOUT_H
