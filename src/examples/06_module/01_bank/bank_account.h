//bank_account.h
#include <stdlib.h>     /* srand, rand */
#include<iostream>


//Header Guards
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
friend void friend_display_balance(const BankAccount& account);
friend std::ostream& operator<<(std::ostream& out, const BankAccount &);
friend std::istream& operator>>(std::istream& in, BankAccount& account);

public:
    BankAccount(){ balance = get_balance_from_db();}//Default synthesized constructor -- creates it by default ONLY IF WE DON'T HAVE ANY OTHER CONSTRUCTORS!!
    BankAccount(int b) : balance(b){/*empty function code*/}
    virtual int get_balance() const;//telling C++ we will provide function code later
    virtual void deposit(int amount) final;
    virtual void withdraw(int amount) final;
    ~BankAccount(){code}

private: 
    int balance;
    int get_balance_from_db();
};

#endif

//Free function
void display_balance(const BankAccount& account);//by value/copy
BankAccount get_account();