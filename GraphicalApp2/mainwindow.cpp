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

void MainWindow::on_btnLogin_clicked()
{
    objLogin=new Login(this);
    connect(objLogin, SIGNAL(nameSetted()), this, SLOT(getUsernameSlot()));
    objLogin->show();
}

void MainWindow::getUsernameSlot()
{
    username=objLogin->getName();
    ui ->labelUsername->setText(username);
}

void MainWindow::on_btnForm1_clicked()
{

}


void MainWindow::on_btnForm2_clicked()
{

}


void MainWindow::on_btnForm3_clicked()
{

}

