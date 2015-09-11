#ifndef UI_SECURITY_H
#define UI_SECURITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

class Ui_security
{
public:
    QTabWidget *security1;
    QWidget *Employee_Details;
    QLabel *labelEmp;
    QLineEdit *lineEditEmp;
    QLabel *labelLname;
    QLineEdit *lineEditLname;
    QLabel *labelFname;
    QLineEdit *lineEditFname;
    QLabel *labelSex;
    QLineEdit *lineEditSex;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QLabel *labelDpt;
    QLabel *labelDsg;
    QLabel *labelPword;
    QLineEdit *lineEditAcc;
    QLabel *labelAcc;
    QTabWidget *tabWidgetCinfo;
    QWidget *tab;
    QLabel *labelAdd;
    QLineEdit *lineEditAdd;
    QLabel *labelCity;
    QLineEdit *lineEditCity;
    QLabel *labelState;
    QLineEdit *lineEditState;
    QLabel *labelZip;
    QLineEdit *lineEditZip;
    QLabel *labelCntry;
    QLineEdit *lineEditCntry;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonCncl;
    QLineEdit *lineEditPword;
    QLineEdit *lineEdit;
    QLineEdit *lineEditDpt;
    QWidget *Search;
    QLineEdit *lineEditUinfo;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonClose;
    QLabel *labelDptFind;
    QLineEdit *lineEditDptFind;
    QTableWidget *tableWidgetUinfo;
    QLineEdit *lineEdit_22;
    QLabel *labelEmpFind;
    QPushButton *pushButtonFind;

    void setupUi(QWidget *security)
    {
    security->setObjectName(QString::fromUtf8("security"));
    security->resize(QSize(676, 557).expandedTo(security->minimumSizeHint()));
    security1 = new QTabWidget(security);
    security1->setObjectName(QString::fromUtf8("security1"));
    security1->setGeometry(QRect(20, 20, 651, 521));
    Employee_Details = new QWidget();
    Employee_Details->setObjectName(QString::fromUtf8("Employee_Details"));
    labelEmp = new QLabel(Employee_Details);
    labelEmp->setObjectName(QString::fromUtf8("labelEmp"));
    labelEmp->setGeometry(QRect(60, 30, 68, 22));
    lineEditEmp = new QLineEdit(Employee_Details);
    lineEditEmp->setObjectName(QString::fromUtf8("lineEditEmp"));
    lineEditEmp->setGeometry(QRect(170, 30, 113, 20));
    labelLname = new QLabel(Employee_Details);
    labelLname->setObjectName(QString::fromUtf8("labelLname"));
    labelLname->setGeometry(QRect(60, 70, 59, 22));
    lineEditLname = new QLineEdit(Employee_Details);
    lineEditLname->setObjectName(QString::fromUtf8("lineEditLname"));
    lineEditLname->setGeometry(QRect(170, 70, 113, 20));
    labelFname = new QLabel(Employee_Details);
    labelFname->setObjectName(QString::fromUtf8("labelFname"));
    labelFname->setGeometry(QRect(60, 110, 58, 22));
    lineEditFname = new QLineEdit(Employee_Details);
    lineEditFname->setObjectName(QString::fromUtf8("lineEditFname"));
    lineEditFname->setGeometry(QRect(170, 110, 113, 20));
    labelSex = new QLabel(Employee_Details);
    labelSex->setObjectName(QString::fromUtf8("labelSex"));
    labelSex->setGeometry(QRect(60, 150, 47, 14));
    lineEditSex = new QLineEdit(Employee_Details);
    lineEditSex->setObjectName(QString::fromUtf8("lineEditSex"));
    lineEditSex->setGeometry(QRect(170, 150, 111, 22));
    labelEmail = new QLabel(Employee_Details);
    labelEmail->setObjectName(QString::fromUtf8("labelEmail"));
    labelEmail->setGeometry(QRect(60, 190, 47, 14));
    lineEditEmail = new QLineEdit(Employee_Details);
    lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
    lineEditEmail->setGeometry(QRect(170, 190, 113, 20));
    labelDpt = new QLabel(Employee_Details);
    labelDpt->setObjectName(QString::fromUtf8("labelDpt"));
    labelDpt->setGeometry(QRect(350, 30, 63, 22));
    labelDsg = new QLabel(Employee_Details);
    labelDsg->setObjectName(QString::fromUtf8("labelDsg"));
    labelDsg->setGeometry(QRect(350, 70, 64, 22));
    labelPword = new QLabel(Employee_Details);
    labelPword->setObjectName(QString::fromUtf8("labelPword"));
    labelPword->setGeometry(QRect(350, 110, 91, 22));
    lineEditAcc = new QLineEdit(Employee_Details);
    lineEditAcc->setObjectName(QString::fromUtf8("lineEditAcc"));
    lineEditAcc->setGeometry(QRect(460, 150, 111, 22));
    labelAcc = new QLabel(Employee_Details);
    labelAcc->setObjectName(QString::fromUtf8("labelAcc"));
    labelAcc->setGeometry(QRect(350, 150, 72, 22));
    tabWidgetCinfo = new QTabWidget(Employee_Details);
    tabWidgetCinfo->setObjectName(QString::fromUtf8("tabWidgetCinfo"));
    tabWidgetCinfo->setGeometry(QRect(20, 240, 401, 231));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    labelAdd = new QLabel(tab);
    labelAdd->setObjectName(QString::fromUtf8("labelAdd"));
    labelAdd->setGeometry(QRect(30, 20, 47, 14));
    lineEditAdd = new QLineEdit(tab);
    lineEditAdd->setObjectName(QString::fromUtf8("lineEditAdd"));
    lineEditAdd->setGeometry(QRect(100, 20, 291, 20));
    labelCity = new QLabel(tab);
    labelCity->setObjectName(QString::fromUtf8("labelCity"));
    labelCity->setGeometry(QRect(30, 60, 47, 14));
    lineEditCity = new QLineEdit(tab);
    lineEditCity->setObjectName(QString::fromUtf8("lineEditCity"));
    lineEditCity->setGeometry(QRect(100, 60, 113, 20));
    labelState = new QLabel(tab);
    labelState->setObjectName(QString::fromUtf8("labelState"));
    labelState->setGeometry(QRect(30, 100, 47, 14));
    lineEditState = new QLineEdit(tab);
    lineEditState->setObjectName(QString::fromUtf8("lineEditState"));
    lineEditState->setGeometry(QRect(100, 100, 111, 22));
    labelZip = new QLabel(tab);
    labelZip->setObjectName(QString::fromUtf8("labelZip"));
    labelZip->setGeometry(QRect(30, 140, 47, 14));
    lineEditZip = new QLineEdit(tab);
    lineEditZip->setObjectName(QString::fromUtf8("lineEditZip"));
    lineEditZip->setGeometry(QRect(100, 140, 113, 20));
    labelCntry = new QLabel(tab);
    labelCntry->setObjectName(QString::fromUtf8("labelCntry"));
    labelCntry->setGeometry(QRect(30, 180, 47, 14));
    lineEditCntry = new QLineEdit(tab);
    lineEditCntry->setObjectName(QString::fromUtf8("lineEditCntry"));
    lineEditCntry->setGeometry(QRect(100, 180, 113, 20));
    tabWidgetCinfo->addTab(tab, QApplication::translate("security", "Contact info", 0, QApplication::UnicodeUTF8));
    pushButtonAdd = new QPushButton(Employee_Details);
    pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
    pushButtonAdd->setGeometry(QRect(430, 460, 75, 23));
    pushButtonCncl = new QPushButton(Employee_Details);
    pushButtonCncl->setObjectName(QString::fromUtf8("pushButtonCncl"));
    pushButtonCncl->setGeometry(QRect(530, 460, 75, 23));
    lineEditPword = new QLineEdit(Employee_Details);
    lineEditPword->setObjectName(QString::fromUtf8("lineEditPword"));
    lineEditPword->setGeometry(QRect(460, 110, 113, 20));
    lineEdit = new QLineEdit(Employee_Details);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(460, 70, 113, 20));
    lineEditDpt = new QLineEdit(Employee_Details);
    lineEditDpt->setObjectName(QString::fromUtf8("lineEditDpt"));
    lineEditDpt->setGeometry(QRect(460, 30, 113, 20));
    security1->addTab(Employee_Details, QApplication::translate("security", "New", 0, QApplication::UnicodeUTF8));
    Search = new QWidget();
    Search->setObjectName(QString::fromUtf8("Search"));
    lineEditUinfo = new QLineEdit(Search);
    lineEditUinfo->setObjectName(QString::fromUtf8("lineEditUinfo"));
    lineEditUinfo->setGeometry(QRect(30, 180, 51, 20));
    pushButtonOk = new QPushButton(Search);
    pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
    pushButtonOk->setGeometry(QRect(390, 390, 75, 23));
    pushButtonClose = new QPushButton(Search);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(490, 390, 75, 23));
    labelDptFind = new QLabel(Search);
    labelDptFind->setObjectName(QString::fromUtf8("labelDptFind"));
    labelDptFind->setGeometry(QRect(80, 30, 63, 22));
    lineEditDptFind = new QLineEdit(Search);
    lineEditDptFind->setObjectName(QString::fromUtf8("lineEditDptFind"));
    lineEditDptFind->setGeometry(QRect(190, 30, 113, 20));
    tableWidgetUinfo = new QTableWidget(Search);
    tableWidgetUinfo->setObjectName(QString::fromUtf8("tableWidgetUinfo"));
    tableWidgetUinfo->setGeometry(QRect(30, 200, 581, 161));
    lineEdit_22 = new QLineEdit(Search);
    lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
    lineEdit_22->setGeometry(QRect(190, 80, 113, 20));
    labelEmpFind = new QLabel(Search);
    labelEmpFind->setObjectName(QString::fromUtf8("labelEmpFind"));
    labelEmpFind->setGeometry(QRect(80, 80, 68, 22));
    pushButtonFind = new QPushButton(Search);
    pushButtonFind->setObjectName(QString::fromUtf8("pushButtonFind"));
    pushButtonFind->setGeometry(QRect(410, 50, 75, 23));
    security1->addTab(Search, QApplication::translate("security", "Find", 0, QApplication::UnicodeUTF8));
    retranslateUi(security);

    QMetaObject::connectSlotsByName(security);
    } // setupUi

    void retranslateUi(QWidget *security)
    {
    security->setWindowTitle(QApplication::translate("security", "Security", 0, QApplication::UnicodeUTF8));
    labelEmp->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Employee ID</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelLname->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Last Name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelFname->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">First Name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelSex->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Sex</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelEmail->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Email </span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelDpt->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Department</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelDsg->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Designation</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelPword->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Default Password</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelAcc->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A<span style=\" font-size:8pt;\">ccess Level</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelAdd->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A<span style=\" font-size:8pt;\">ddress</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelCity->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">City</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelState->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">State</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelZip->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Zipcode</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    labelCntry->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Country</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    tabWidgetCinfo->setTabText(tabWidgetCinfo->indexOf(tab), QApplication::translate("security", "Contact info", 0, QApplication::UnicodeUTF8));
    pushButtonAdd->setText(QApplication::translate("security", "Add", 0, QApplication::UnicodeUTF8));
    pushButtonCncl->setText(QApplication::translate("security", "Cancel", 0, QApplication::UnicodeUTF8));
    lineEditDpt->setText(QApplication::translate("security", "", 0, QApplication::UnicodeUTF8));
    security1->setTabText(security1->indexOf(Employee_Details), QApplication::translate("security", "New", 0, QApplication::UnicodeUTF8));
    lineEditUinfo->setText(QApplication::translate("security", "User Info", 0, QApplication::UnicodeUTF8));
    pushButtonOk->setText(QApplication::translate("security", "OK", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("security", "Close", 0, QApplication::UnicodeUTF8));
    labelDptFind->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Department</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    tableWidgetUinfo->clear();
    tableWidgetUinfo->setColumnCount(5);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("security", "Last Name", 0, QApplication::UnicodeUTF8));
    tableWidgetUinfo->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("security", "First Name", 0, QApplication::UnicodeUTF8));
    tableWidgetUinfo->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("security", "Employee ID", 0, QApplication::UnicodeUTF8));
    tableWidgetUinfo->setHorizontalHeaderItem(2, __colItem2);

    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    __colItem3->setText(QApplication::translate("security", "Department", 0, QApplication::UnicodeUTF8));
    tableWidgetUinfo->setHorizontalHeaderItem(3, __colItem3);

    QTableWidgetItem *__colItem4 = new QTableWidgetItem();
    __colItem4->setText(QApplication::translate("security", "Password", 0, QApplication::UnicodeUTF8));
    tableWidgetUinfo->setHorizontalHeaderItem(4, __colItem4);
    tableWidgetUinfo->setRowCount(3);
    labelEmpFind->setText(QApplication::translate("security", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Employee ID</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    pushButtonFind->setText(QApplication::translate("security", "Find", 0, QApplication::UnicodeUTF8));
    security1->setTabText(security1->indexOf(Search), QApplication::translate("security", "Find", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(security);
    } // retranslateUi

};

namespace Ui {
    class security: public Ui_security {};
} // namespace Ui

#endif // UI_SECURITY_H
