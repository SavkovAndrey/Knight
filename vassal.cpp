#include "vassal.h"

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

void Vassal::setQuantity(int quantity)
{
    this->quantity = quantity;
    this->cur_price = st_price + (quantity - 1) * ch_price;  // выставляем текущую цену
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
