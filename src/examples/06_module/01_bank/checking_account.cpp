//checking_account.cpp
#include "checking_account.h"

int CheckingAccount::get_balance() const
{
    return BankAccount::get_balance() + 5;
}