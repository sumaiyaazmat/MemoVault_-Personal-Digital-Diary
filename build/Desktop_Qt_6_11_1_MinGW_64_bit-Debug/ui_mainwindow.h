/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QLabel *label_2;
    QLineEdit *lineedit_password;
    QPushButton *login_btn;
    QPushButton *showpass_btn;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(721, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("/* =========================\n"
"   MAIN WINDOW - DARK GREEN BACKGROUND\n"
"========================= */\n"
"QMainWindow {\n"
"    background-color: #1a4a2e;\n"
"}\n"
"\n"
"QWidget {\n"
"    background-color: #1a4a2e;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"/* =========================\n"
"   TITLE LABEL - MEMOVAULT\n"
"========================= */\n"
"QLabel#titleLabel {\n"
"    font-size: 42px;\n"
"\n"
"    font-weight: bold;\n"
"    color: #EFFFF6;\n"
"    padding: 8px 0px;\n"
"    background: transparent;\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"/* =========================\n"
"   FIELD LABELS - Username / Password\n"
"========================= */\n"
"QLabel#usernameLabel,\n"
"QLabel#passwordLabel {\n"
"    color: rgba(200, 240, 220, 0.85);\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"    background: transparent;\n"
"    padding-left: 2px;\n"
"}\n"
"\n"
"/* General label fallback */\n"
"QLabel {\n"
"    color: rgba(200, 240, 220, 0.85);\n"
"    font-size: 13p"
                        "x;\n"
"    background: transparent;\n"
"}\n"
"\n"
"/* =========================\n"
"   INPUT FIELDS - WHITE ROUNDED\n"
"========================= */\n"
"QLineEdit {\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 10px 14px;\n"
"    background-color: rgba(235, 250, 240, 0.95);\n"
"    color: #1b3b2a;\n"
"    font-size: 14px;\n"
"    selection-background-color: #6EE7A8;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #6EE7A8;\n"
"    background-color: #ffffff;\n"
"    outline: none;\n"
"}\n"
"\n"
"/* =========================\n"
"   LOGIN BUTTON - GREEN PILL\n"
"========================= */\n"
"QPushButton#login_btn {\n"
"    background-color: #5DD898;\n"
"    color: #0a1f12;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    min-height: 44px;\n"
"    letter-spacing: 0.5px;\n"
"}\n"
"\n"
"QPushButton#login_btn:hover {\n"
"    background-color: #7EEDB0;\n"
"}\n"
"\n"
"QPushButton#login_btn:pressed {\n"
"    background-color"
                        ": #3DC47E;\n"
"}\n"
"\n"
"/* =========================\n"
"   SHOW PASSWORD BUTTON - INSIDE FIELD\n"
"========================= */\n"
"QPushButton#showpass_btn {\n"
"    background-color: #3DC47E;\n"
"    color: #0a1f12;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 11px;\n"
"    font-weight: bold;\n"
"    padding: 4px 5px;\n"
"    min-height: 12px;\n"
"    max-height: 18px;\n"
"}\n"
"\n"
"QPushButton#showpass_btn:hover {\n"
"    background-color: #5DD898;\n"
"}\n"
"\n"
"QPushButton#showpass_btn:pressed {\n"
"    background-color: #2FAF6A;\n"
"}\n"
"\n"
"/* =========================\n"
"   STATUS BAR - BOTTOM DARK\n"
"========================= */\n"
"QStatusBar {\n"
"    background-color: #0d1f14;\n"
"    color: #7EEDB0;\n"
"    font-size: 12px;\n"
"    padding: 4px 8px;\n"
"    border-top: 1px solid #1e3d27;\n"
"}\n"
"\n"
"QStatusBar::item {\n"
"    border: none;\n"
"}s"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(490, 250, 300, 265));
        frame->setStyleSheet(QString::fromUtf8("/*QFrame{\n"
"background-color: #DDEEE5;\n"
"border: 2px solid white;\n"
"border-radius: 30px solid black;\n"
"}*/\n"
"QFrame#frame {\n"
"    background: rgba(26, 58, 46, 0.88);  /* \342\206\220 semi-transparent dark green */\n"
"    border-radius: 18px;\n"
"    border: 2px solid #AAFFC7;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 100, 28));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background: transparent;\n"
"color: #5E8B7E;\n"
"font-size: 18px;\n"
"font-weight: 600;\n"
"}\n"
""));
        lineEdit_name = new QLineEdit(frame);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(60, 70, 191, 34));
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit#lineEdit_name {\n"
"    background-color: rgba(255, 255, 255, 0.90);\n"
"    border: 2px solid #AAFFC7;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-size: 13px;\n"
"    font-family: \"Segoe UI\";\n"
"    color: #1a3a2a;\n"
"}\n"
"\n"
"QLineEdit#lineEdit_name:focus {\n"
"    border: 2px solid #ffffff;\n"
"    background-color: white;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 94, 28));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background: transparent;\n"
"color: #5E8B7E;\n"
"font-size: 18px;\n"
"font-weight: 600;\n"
"}"));
        lineedit_password = new QLineEdit(frame);
        lineedit_password->setObjectName("lineedit_password");
        lineedit_password->setGeometry(QRect(60, 140, 201, 34));
        lineedit_password->setStyleSheet(QString::fromUtf8("QLineEdit#lineedit_password {\n"
"    background-color: rgba(255, 255, 255, 0.90);\n"
"    border: 2px solid #AAFFC7;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-size: 13px;\n"
"    font-family: \"Segoe UI\";\n"
"    color: #1a3a2a;\n"
"}\n"
"\n"
"QLineEdit#lineedit_password:focus {\n"
"    border: 2px solid #ffffff;\n"
"    background-color: white;\n"
"}"));
        lineedit_password->setEchoMode(QLineEdit::EchoMode::Password);
        login_btn = new QPushButton(frame);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(100, 180, 130, 45));
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton#login_btn {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #AAFFC7,\n"
"        stop:1 #5ecb8a\n"
"    );\n"
"    color: #0f2419;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    font-size: 14px;\n"
"    font-family: \"Segoe UI\";\n"
"    font-weight: bold;\n"
"    min-width: 130px;\n"
"    min-height: 36px;\n"
"}\n"
"\n"
"QPushButton#login_btn:hover {\n"
"    background-color: #c5ffe0;\n"
"    color: #0a1f12;\n"
"}\n"
"\n"
"QPushButton#login_btn:pressed {\n"
"    background-color: #7ad4a8;\n"
"}"));
        showpass_btn = new QPushButton(frame);
        showpass_btn->setObjectName("showpass_btn");
        showpass_btn->setGeometry(QRect(180, 140, 80, 26));
        showpass_btn->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        showpass_btn->setCheckable(true);
        showpass_btn->setChecked(true);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 20, 81, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 721, 17));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        lineedit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter password", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        showpass_btn->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "MemoVault", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
