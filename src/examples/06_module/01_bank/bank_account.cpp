//bank_account.cpp
#include "bank_account.h"

int BankAccount::get_balance() const
{  
    return balance;    
}

int BankAccount::get_balance_from_db()
{ 
    return rand() % 10000 + 1; //random number in range 1 to 10000
}

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;  
    }
}