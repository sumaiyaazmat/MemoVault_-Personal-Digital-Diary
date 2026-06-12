#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login_diaryy.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_login_btn_clicked()
{
    QString username = ui->lineEdit_name->text();
    QString password = ui->lineedit_password->text();

    if(username == "sumaiya" && password == "12345")
    {
        login = new login_diaryy(this);
        login->show();
        this->hide();
    }
    else
    {
        QMessageBox::critical(this, "Login Failed", "Invalid input");
    }
}