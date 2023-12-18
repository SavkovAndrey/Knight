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

    Vassal poprosh(47,477,74,774,744);
    Vassal krest(1,1,1,1,1);
    Vassal shut(1,1,1,1,1);
    Vassal palach(1,1,1,1,1);
    Vassal monah(1,1,1,1,1);
    Vassal alhim(1,1,1,1,1);
    Vassal skvaer(1,1,1,1,1);
    Vassal torg(1,1,1,1,1);
    Vassal knight(1,1,1,1,1);
    Vassal episk(1,1,1,1,1);
    Vassal lord(1,1,1,1,1);
    Vassal kuznec(1,1,1,1,1);
    Vassal stroitel(10,10,10,10,10);
    Vassal straj(1,1,1,1,1);


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
    int sum_a = 0, sum_d = 0, sum_in = 0;     // переменные для общих сумм

    for(int i = 0; i < 14; i++)               // берем колличество с таблици и записываем в объекты
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
    }

ui->label_7->setText(QString::number(sum_a));
ui->label_8->setText(QString::number(sum_d));
ui->label_9->setText(QString::number(sum_in));



}

