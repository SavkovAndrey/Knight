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

    int getSum_attack();
    int getSum_defense();
    int getSum_income();

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

    int sum_attack;   // сумарная атака
    int sum_defense;  // сумарная защита
    int sum_income;   // сумарный доход

};

#endif // VASSAL_H
