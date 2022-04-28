//atm.h
#include "bank_account.h"

#ifndef ATM_H
#define ATM_H

enum class atm_menu{balance, deposit, withdraw};

class ATM
{
public:
    void display_balance()const;
    void make_deposit();
    void make_withdraw();
private:
    BankAccount account;

};

#endif