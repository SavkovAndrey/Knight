#include "mainwindow.h"
#include "ui_mainwindow.h"

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

    item = ui->tableWidget->item(1, 1);
    if(item != NULL){
    temp = item->text();
    }

     // temp = "aaaaaaa";
     // item->setText("aaaaaaa");
      ui->tableWidget->setItem(2, 1, item);
      ui->label_7->setText(temp);

}

