#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Рыцарская игра");

}

MainWindow::~MainWindow()
{
    delete ui;
}

//------------------------------ РАСЧИТАТЬ

void MainWindow::on_pushButton_clicked()
{
    QString temp;
       QTableWidgetItem *item = new QTableWidgetItem();
      // QTableWidgetItem *item;
    item = ui->tableWidget->item(0, 0);

    if(item)
    {
    temp = item->text();
    }
/*
    item = ui->tableWidget->item(2, 0);
    if(item)
    {
        item->setText(temp);
    }
    else
    {
         ui->tableWidget->setItem(2, 0, new QTableWidgetItem(temp));
    }
*/
       ui->tableWidget->setItem(2, 0, item);
      ui->label_7->setText(temp);

}

