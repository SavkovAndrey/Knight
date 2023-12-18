#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "vassal.h"
#include<QDebug>
#include <vector>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Рыцарская игра");

    Vassal poprosh(3, 3, 100, 1, 1);
    Vassal krest(6, 4, 1000, 1, 1);
    Vassal shut(9, 11, 5000, 1, 1);
    Vassal palach(16, 14, 25000, 1, 1);
    Vassal monah(25, 25, 100000, 1, 1);
    Vassal alhim(45, 42, 250000, 1, 1);
    Vassal skvaer(60, 66, 375000, 1, 1);
    Vassal torg(120, 110, 450000, 1, 1);
    Vassal knight(175, 180, 600000, 1, 1);
    Vassal episk(220, 235, 900000, 1, 1);
    Vassal lord(320, 310, 1500000, 1, 1);
    Vassal kuznec(600, 600, 1800000, 1, 1);
    Vassal stroitel(750, 750, 2300000, 1, 1);
    Vassal straj(2600, 2600, 35000, 1, 1);


    vassal.push_back(poprosh);    // 0
    vassal.push_back(krest);      // 1
    vassal.push_back(shut);       // 2
    vassal.push_back(palach);     // 3
    vassal.push_back(monah);      // 4
    vassal.push_back(alhim);      // 5
    vassal.push_back(skvaer);     // 6
    vassal.push_back(torg);       // 7
    vassal.push_back(knight);     // 8
    vassal.push_back(episk);      // 9
    vassal.push_back(lord);       // 10
    vassal.push_back(kuznec);     // 11
    vassal.push_back(stroitel);   // 12
    vassal.push_back(straj);      // 13

}

MainWindow::~MainWindow()
{
    delete ui;
}


//------------------------------ РАСЧИТАТЬ

void MainWindow::on_pushButton_clicked()
{

    QTableWidgetItem *item;
    QString temp;
     qint64 sum_a = 0, sum_d = 0, sum_in = 0, bonus = 0;     // переменные для общих сумм

    for(int i = 0; i < 14; i++)        // берем колличество с таблици и записываем в объекты
    {
    item = ui->tableWidget->item(i, 0);
    if(item)
       {
       temp = item->text();
       }
    vassal[i].setQuantity(temp.toInt());
    }

    for (int i = 0; i < 14 ; i++) {
        sum_a += vassal[i].getSum_attack();
        sum_d += vassal[i].getSum_defense();
        sum_in += vassal[i].getSum_income();

        // ОТЛАДКА
     //   item = ui->tableWidget_2->item(i, 0);            //для теста выводим в сосед. таблицу
       // item->setText(QString::number(vassal[i].getSum_income()));
        //ОТЛАДКА
    }

  //  qDebug() << sum_in;
    bonus = ui->lineEdit_2->text().toInt();
    sum_in = (sum_in * (100 + bonus)) / 100;

ui->label_7->setText(QString::number(sum_a));
ui->label_8->setText(QString::number(sum_d));
ui->label_9->setText(QString::number(sum_in));



}

