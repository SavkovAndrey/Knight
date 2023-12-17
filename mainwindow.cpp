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
    QTableWidgetItem *item;

    item = ui->tableWidget->item(0, 0);      //указываем с какой клеткой работаем
    if(item)                                 // если она существует
    {
    temp = item->text();                     // сохраняем ее данные во вр. переменную
    }

    item = ui->tableWidget->item(2, 0);      // указываем с какой работаем дальше
    if(item)                                 // если она существует
    {
        item->setText(temp);                 // устанавливаем в нее текст
    }
    else                                     // если ее не существует
    {
         ui->tableWidget->setItem(2, 0, new QTableWidgetItem(temp));  // создаем новые item для нее
    }                                                                 // и записываем в него текст
      ui->label_7->setText(temp);

}

