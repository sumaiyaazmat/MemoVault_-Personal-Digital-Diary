#include "login_diary.h"
#include "ui_login_diary.h"

Login_diary::Login_diary(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login_diary)
{
    ui->setupUi(this);
}

Login_diary::~Login_diary()
{
    delete ui;
}
