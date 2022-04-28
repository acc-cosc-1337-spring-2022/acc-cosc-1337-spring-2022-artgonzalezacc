//savings_account.cpp
#include "savings_account.h"

int SavingsAccount::get_balance()const
{
    return BankAccount::get_balance() + 10;
}