#ifndef LOGIN_DIARYY_H
#define LOGIN_DIARYY_H

#include <QMainWindow>

namespace Ui {
class login_diaryy;
}

class login_diaryy : public QMainWindow
{
    Q_OBJECT

public:
    explicit login_diaryy(QWidget *parent = nullptr);
    ~login_diaryy();

private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_As_triggered();
    void on_actionClose_triggered();

    void on_actionCopy_triggered();
    void on_actionCut_triggered();
    void on_actionPaste_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();

    void on_actionAbout_triggered();

    void on_textEdit_cursorPositionChanged();

    void on_save_btn_clicked();



private:
    Ui::login_diaryy *ui;
    QString currentFile;
};

#endif