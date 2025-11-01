#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // авто-заполнение фона уже включено через .ui
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_redButton_clicked()
{
    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, Qt::red);
    this->setPalette(pal);
}

void MainWindow::on_greenButton_clicked()
{
    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, Qt::green);
    this->setPalette(pal);
}

void MainWindow::on_blueButton_clicked()
{
    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, Qt::blue);
    this->setPalette(pal);
}

void MainWindow::on_yellowButton_clicked()
{
    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, Qt::yellow);
    this->setPalette(pal);
}
