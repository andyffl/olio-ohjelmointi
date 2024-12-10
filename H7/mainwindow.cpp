#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::updateUI() {
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText(QString("Painiketta Count painettu %1 kertaa").arg(counter));
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    updateUI();
    qDebug()<<"Klikkasin Count";
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    updateUI();
    qDebug()<<"Klikkasin Reset";
}

