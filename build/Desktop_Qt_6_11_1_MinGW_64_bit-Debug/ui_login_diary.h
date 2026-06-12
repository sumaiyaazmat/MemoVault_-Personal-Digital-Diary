/********************************************************************************
** Form generated from reading UI file 'login_diary.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIARY_H
#define UI_LOGIN_DIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Login_diary
{
public:
    QLabel *label;

    void setupUi(QDialog *Login_diary)
    {
        if (Login_diary->objectName().isEmpty())
            Login_diary->setObjectName("Login_diary");
        Login_diary->resize(400, 300);
        label = new QLabel(Login_diary);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 90, 171, 16));

        retranslateUi(Login_diary);

        QMetaObject::connectSlotsByName(Login_diary);
    } // setupUi

    void retranslateUi(QDialog *Login_diary)
    {
        Login_diary->setWindowTitle(QCoreApplication::translate("Login_diary", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login_diary", "welcome to secure digital diary system", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_diary: public Ui_Login_diary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIARY_H
