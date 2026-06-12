#ifndef LOGIN_DIARY_H
#define LOGIN_DIARY_H

#include <QDialog>

namespace Ui {
class Login_diary;
}

class Login_diary : public QDialog
{
    Q_OBJECT

public:
    explicit Login_diary(QWidget *parent = nullptr);
    ~Login_diary();

private:
    Ui::Login_diary *ui;
};

#endif // LOGIN_DIARY_H
