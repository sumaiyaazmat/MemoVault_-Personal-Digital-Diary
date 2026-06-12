/********************************************************************************
** Form generated from reading UI file 'login_diaryy.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIARYY_H
#define UI_LOGIN_DIARYY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_diaryy
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionNew_2;
    QAction *actionSave_As;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont_Style;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *welcome;
    QLabel *write_diary;
    QTextEdit *textEdit;
    QPushButton *save_btn;
    QMenuBar *menubar;
    QMenu *menuEdit;
    QMenu *menuRead;
    QMenu *menuNew;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login_diaryy)
    {
        if (login_diaryy->objectName().isEmpty())
            login_diaryy->setObjectName("login_diaryy");
        login_diaryy->resize(800, 600);
        login_diaryy->setStyleSheet(QString::fromUtf8("/* \342\225\220\342\225\220\342\225\220 MAIN WINDOW BACKGROUND \342\200\224 Linear Gradient \342\225\220\342\225\220\342\225\220 */\n"
"QMainWindow {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #1a3a2e,\n"
"        stop:0.4 #2d6b4f,\n"
"        stop:1 #0f2419\n"
"    );\n"
"}\n"
"\n"
"QWidget#centralwidget {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #1a3a2e,\n"
"        stop:0.35 #2d6b4f,\n"
"        stop:0.7 #3a8a60,\n"
"        stop:1 #0f2419\n"
"    );\n"
"}\n"
"\n"
"/* \342\225\220\342\225\220\342\225\220 WELCOME LABEL \342\225\220\342\225\220\342\225\220 */\n"
"QLabel#welcome {\n"
"    color: #AAFFC7;\n"
"    font-size: 30px;\n"
"    font-weight: bold;\n"
"    font-family: \"Georgia\";\n"
"    letter-spacing: 1px;\n"
"    background: transparent;\n"
"}\n"
"\n"
"/* \342\225\220\342\225\220\342\225\220 WRITE DIARY LABEL \342\225\220\342\225\220\342\225\220 */\n"
"QLabel#write_diary{\n"
"    color: #AAFFC7;\n"
""
                        "    font-size: 20px;\n"
"    font-family: \"Palatino Linotype\";\n"
"    font-style: italic;\n"
"    letter-spacing: 0.5px;\n"
"    background: transparent;\n"
"}\n"
"\n"
"/* \342\225\220\342\225\220\342\225\220 TEXT EDIT \342\225\220\342\225\220\342\225\220 */\n"
"QTextEdit#textEdit {\n"
"    background-color: rgba(255, 255, 255, 0.92);\n"
"    border: 2px solid #AAFFC7;\n"
"    border-radius: 12px;\n"
"    padding: 14px;\n"
"    font-size: 13px;\n"
"  font-weight: bold;\n"
"    font-family: \"Segoe UI\";\n"
"    color: #1a3a2a;\n"
"    selection-background-color: #AAFFC7;\n"
"}\n"
"\n"
"QTextEdit#textEdit:focus {\n"
"    border: 4px solid #ffffff;\n"
"    background-color: rgba(255, 255, 255, 0.97);\n"
"}\n"
"\n"
"/* \342\225\220\342\225\220\342\225\220 SAVE BUTTON \342\225\220\342\225\220\342\225\220 */\n"
"QPushButton#save_btn {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #AAFFC7,\n"
"        stop:1 #5ecb8a\n"
"    );\n"
"    color: #0f2419;\n"
"    border: n"
                        "one;\n"
"    border-radius: 8px;\n"
"    font-size: 14px;\n"
"    font-family: \"Segoe UI\";\n"
"    font-weight: bold;\n"
"    letter-spacing: 1px;\n"
"    min-width: 150px;\n"
"    max-width: 150px;\n"
"    min-height: 38px;\n"
"}\n"
"\n"
"QPushButton#save_btn:hover {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #c5ffe0,\n"
"        stop:1 #AAFFC7\n"
"    );\n"
"    color: #0a1f12;\n"
"}\n"
"\n"
"QPushButton#save_btn:pressed {\n"
"    background-color: #7ad4a8;\n"
"    color: #0f2419;\n"
"}\n"
"\n"
"/* \342\225\220\342\225\220\342\225\220 MENU BAR \342\225\220\342\225\220\342\225\220 */\n"
"QMenuBar {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #0f2419,\n"
"        stop:1 #1a3a2e\n"
"    );\n"
"    color: #AAFFC7;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"    padding: 4px 6px;\n"
"    border-bottom: 1px solid #AAFFC7;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 5"
                        "px 14px;\n"
"    background: transparent;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: rgba(170, 255, 199, 0.2);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QMenu {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #1a3a2e,\n"
"        stop:1 #0f2419\n"
"    );\n"
"    border: 1px solid #AAFFC7;\n"
"    border-radius: 6px;\n"
"    color: #AAFFC7;\n"
"    font-family: \"Segoe UI\";\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 6px 20px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: rgba(170, 255, 199, 0.25);\n"
"    color: #ffffff;\n"
"}"));
        actionNew = new QAction(login_diaryy);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(login_diaryy);
        actionOpen->setObjectName("actionOpen");
        actionClose = new QAction(login_diaryy);
        actionClose->setObjectName("actionClose");
        actionSave = new QAction(login_diaryy);
        actionSave->setObjectName("actionSave");
        actionNew_2 = new QAction(login_diaryy);
        actionNew_2->setObjectName("actionNew_2");
        actionSave_As = new QAction(login_diaryy);
        actionSave_As->setObjectName("actionSave_As");
        actionCopy = new QAction(login_diaryy);
        actionCopy->setObjectName("actionCopy");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        actionCopy->setIcon(icon);
        actionCut = new QAction(login_diaryy);
        actionCut->setObjectName("actionCut");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        actionCut->setIcon(icon1);
        actionPaste = new QAction(login_diaryy);
        actionPaste->setObjectName("actionPaste");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        actionPaste->setIcon(icon2);
        actionUndo = new QAction(login_diaryy);
        actionUndo->setObjectName("actionUndo");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditUndo));
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(login_diaryy);
        actionRedo->setObjectName("actionRedo");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        actionRedo->setIcon(icon4);
        actionFont_Style = new QAction(login_diaryy);
        actionFont_Style->setObjectName("actionFont_Style");
        actionAbout = new QAction(login_diaryy);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(login_diaryy);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        welcome = new QLabel(centralwidget);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(250, 50, 661, 61));
        welcome->setStyleSheet(QString::fromUtf8(""));
        write_diary = new QLabel(centralwidget);
        write_diary->setObjectName("write_diary");
        write_diary->setGeometry(QRect(260, 150, 371, 31));
        write_diary->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(330, 190, 431, 192));
        textEdit->setStyleSheet(QString::fromUtf8(""));
        save_btn = new QPushButton(centralwidget);
        save_btn->setObjectName("save_btn");
        save_btn->setGeometry(QRect(580, 400, 150, 54));
        save_btn->setStyleSheet(QString::fromUtf8(""));
        login_diaryy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login_diaryy);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 34));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
"    background-color: #3a7030;\n"
"    color: white;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 13px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #5a9e4f;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QMenu {\n"
"    background-color: #f0f4f0;\n"
"    border: 1px solid #6aab5e;\n"
"    color: #1e3d1a;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #a8d5a2;\n"
"    color: #1e3d1a;\n"
"}"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuRead = new QMenu(menubar);
        menuRead->setObjectName("menuRead");
        menuNew = new QMenu(menubar);
        menuNew->setObjectName("menuNew");
        login_diaryy->setMenuBar(menubar);
        statusbar = new QStatusBar(login_diaryy);
        statusbar->setObjectName("statusbar");
        login_diaryy->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuRead->menuAction());
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuRead->addAction(actionAbout);
        menuNew->addAction(actionNew_2);
        menuNew->addAction(actionOpen);
        menuNew->addAction(actionClose);
        menuNew->addAction(actionSave);
        menuNew->addAction(actionSave_As);

        retranslateUi(login_diaryy);

        QMetaObject::connectSlotsByName(login_diaryy);
    } // setupUi

    void retranslateUi(QMainWindow *login_diaryy)
    {
        login_diaryy->setWindowTitle(QCoreApplication::translate("login_diaryy", "MemoVault", nullptr));
        actionNew->setText(QCoreApplication::translate("login_diaryy", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("login_diaryy", "Open", nullptr));
        actionClose->setText(QCoreApplication::translate("login_diaryy", "Close", nullptr));
        actionSave->setText(QCoreApplication::translate("login_diaryy", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_2->setText(QCoreApplication::translate("login_diaryy", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_2->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("login_diaryy", "Save As", nullptr));
        actionCopy->setText(QCoreApplication::translate("login_diaryy", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("login_diaryy", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("login_diaryy", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("login_diaryy", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("login_diaryy", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("login_diaryy", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont_Style->setText(QCoreApplication::translate("login_diaryy", "Font Style", nullptr));
        actionAbout->setText(QCoreApplication::translate("login_diaryy", "About", nullptr));
        welcome->setText(QCoreApplication::translate("login_diaryy", "Welcome to secure Digital Diary System", nullptr));
        write_diary->setText(QCoreApplication::translate("login_diaryy", "Write your personal diary here:", nullptr));
        save_btn->setText(QCoreApplication::translate("login_diaryy", "Save", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("login_diaryy", "Edit", nullptr));
        menuRead->setTitle(QCoreApplication::translate("login_diaryy", "View", nullptr));
        menuNew->setTitle(QCoreApplication::translate("login_diaryy", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_diaryy: public Ui_login_diaryy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIARYY_H
