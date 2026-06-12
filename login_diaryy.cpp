#include "login_diaryy.h"
#include "ui_login_diaryy.h"

#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QFileInfo>
#include <QTextCursor>

login_diaryy::login_diaryy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login_diaryy)
{
    ui->setupUi(this);
}

login_diaryy::~login_diaryy()
{
    delete ui;
}

void login_diaryy::on_textEdit_cursorPositionChanged()
{
    QTextCursor cursor = ui->textEdit->textCursor();

    int Line = cursor.blockNumber() + 1;
    int Column = cursor.positionInBlock() + 1;
    int charCount = ui->textEdit->toPlainText().length();

    QString status = QString("Line:%1 | Column:%2 | %3 characters")
                         .arg(Line)
                         .arg(Column)
                         .arg(charCount);

    ui->statusbar->showMessage(status);
}

void login_diaryy::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->clear();
    setWindowTitle("MemoVault");
}

void login_diaryy::on_actionSave_triggered()
{
    if(currentFile.isEmpty())
    {
        on_actionSave_As_triggered();
        return;
    }

    QFile file(currentFile);

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << ui->textEdit->toPlainText();
        file.close();
        setWindowTitle(currentFile + " - MemoVault");
        ui->statusbar->showMessage("File Saved Successfully!", 3000);
    }
    else
    {
        QMessageBox::warning(this, "Error", "File not opened for writing");
    }
}

void login_diaryy::on_actionSave_As_triggered()
{
    QString filename = QFileDialog::getSaveFileName(
        this, "Save File As", "", "Text Files (*.txt);;All Files (*)");

    if(!filename.isEmpty())
    {
        currentFile = filename;
        on_actionSave_triggered();
    }
}

void login_diaryy::on_actionOpen_triggered()
{
    bool isModified = false;

    if(!currentFile.isEmpty())
    {
        QFile file(currentFile);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file);
            QString savedcontent = in.readAll();
            file.close();
            isModified = (savedcontent != ui->textEdit->toPlainText());
        }
    }
    else
    {
        isModified = !ui->textEdit->toPlainText().isEmpty();
    }

    if(isModified)
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            this, "Unsaved Changes",
            "You have unsaved changes.\nDo you want to save first?",
            QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);

        if(reply == QMessageBox::Cancel) return;
        if(reply == QMessageBox::Yes) on_actionSave_triggered();
    }

    QString filename = QFileDialog::getOpenFileName(
        this, "Open File", "", "Text Files (*.txt);;All Files (*)");

    if(!filename.isEmpty())
    {
        QFile file(filename);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file);
            QString content = in.readAll();
            ui->textEdit->setPlainText(content);
            file.close();
            currentFile = filename;
            setWindowTitle(currentFile + " - MemoVault");
            ui->statusbar->showMessage(QFileInfo(currentFile).fileName(), 3000);
        }
        else
        {
            QMessageBox::warning(this, "Error", "Could not open file");
        }
    }
}

void login_diaryy::on_actionClose_triggered()
{
    bool isModified = false;

    if(!currentFile.isEmpty())
    {
        QFile file(currentFile);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file);
            QString savedcontent = in.readAll();
            file.close();
            isModified = (savedcontent != ui->textEdit->toPlainText());
        }
    }
    else
    {
        isModified = !ui->textEdit->toPlainText().isEmpty();
    }

    if(isModified)
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            this, "Unsaved Changes",
            "You have unsaved changes.\nDo you want to save before closing?",
            QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);

        if(reply == QMessageBox::Cancel) return;
        if(reply == QMessageBox::Yes) on_actionSave_triggered();
        if(reply == QMessageBox::No) close();
    }

    if(isModified == false) close();
}

void login_diaryy::on_save_btn_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(
        this, "Save File As", "", "Text Files (*.txt);;All Files (*)");

    if(!fileName.isEmpty())
    {
        currentFile = fileName;
        on_actionSave_triggered();
    }
}

void login_diaryy::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void login_diaryy::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void login_diaryy::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void login_diaryy::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void login_diaryy::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void login_diaryy::on_actionAbout_triggered()
{
    QString about_txt;
    about_txt += "📝 MemoVault Diary Application\n\n";
    about_txt += "A simple and lightweight text editor designed for taking notes, ";
    about_txt += "writing diaries, and managing personal text files efficiently.\n\n";
    about_txt += "🔹 Features:\n";
    about_txt += "- Create, open, save and edit text files\n";
    about_txt += "- Cut, copy, paste, undo and redo support\n\n";
    about_txt += "📅 Built in: 2026\n";
    about_txt += "© MemoVault (All Rights Reserved)\n";

    QMessageBox::about(this, "About MemoVault", about_txt);
}