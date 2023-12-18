#include "vassal.h"

#include <QtGlobal>

Vassal::Vassal()
{

}

Vassal::Vassal(int attack, int defense, int income, int st_price, int ch_price )
{
    this->attack = attack;
    this->defense = defense;
    this->income = income;
    this->st_price = st_price;
    this->ch_price = ch_price;
}

void Vassal::setQuantity(qint64 quantity)
{
    this->quantity = quantity;
    this->cur_price = st_price + (quantity - 1) * ch_price;  // выставляем текущую цену
    this->sum_attack = attack * quantity;                    // общая атакая
    this->sum_defense = defense * quantity;                  // общая защита
    this->sum_income = income * quantity;                    // общий доход
}

int Vassal::getAttack()
{
    return attack;
}

int Vassal::getDefense()
{
    return defense;
}

int Vassal::getIncome()
{
    return income;
}

int Vassal::getSum_attack()
{
    return sum_attack;
}

int Vassal::getSum_defense()
{
    return sum_defense;
}

qint64 Vassal::getSum_income()
{
    return sum_income;
}
