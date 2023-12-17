#ifndef VASSAL_H
#define VASSAL_H


class Vassal
{
public:
    Vassal();
    Vassal(int, int, int, int, int);   // установка статики

    void setQuantity(int);
    int getAttack();
    int getDefense();
    int getIncome();

private:
    // статичные
    int attack;       // атака вассала
    int defense;      // защита вассала
    int income;       // доход от вассала
    int st_price;     // стартовая цена
    int ch_price;     // изменение цены
    // динамичные
    int quantity;     // колличество вассалов
    int cur_price;    // текущая цена

};

#endif // VASSAL_H
