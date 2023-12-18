#ifndef VASSAL_H
#define VASSAL_H
#include <QtGlobal>

class Vassal
{
public:
    Vassal();
    Vassal(int, int, int, int, int);   // установка статики

    void setQuantity(qint64);
    int getAttack();
    int getDefense();
    int getIncome();

    int getSum_attack();
    int getSum_defense();
    qint64 getSum_income();

private:
    // статичные
    int attack;       // атака вассала
    int defense;      // защита вассала
    qint64 income;       // доход от вассала
    int st_price;     // стартовая цена
    int ch_price;     // изменение цены

    // динамичные

    qint64 quantity;     // колличество вассалов
    int cur_price;    // текущая цена

    int sum_attack;   // сумарная атака
    int sum_defense;  // сумарная защита
    qint64 sum_income;   // сумарный доход

};

#endif // VASSAL_H
