#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include <memory>
#include <time.h> 
#include <vector>

using std::cout; using std::cin; using std::unique_ptr; using std::make_unique;
using std::vector;

int main()
{
	srand (time(NULL));

	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);
	cout<<account->get_balance()<<"\n";
	unique_ptr<BankAccount> savings = make_unique<SavingsAccount>(200);

	vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(account));
	accounts.push_back(std::move(savings));

	for(auto& account: accounts)
	{
		cout<<account->get_balance()<<"\n";
	}


/*
	BankAccount account;
	display_balance(account);
	friend_display_balance(account);
	cout<<account;

	cin>>account;
	cout<<account;
	

	int menu_option;
	char cont;

	ATM atm;

	do
	{
		std::cout<<"\nACC Bank\n";
		std::cout<<"1-Balance\n";
		std::cout<<"2-Deposit\n";
		std::cout<<"3-Withdraw\n";
		std::cin>>menu_option;

		switch(static_cast<atm_menu>(menu_option-1))
		{
			case atm_menu::balance:
				atm.display_balance();
				break;
			case atm_menu::deposit:
				atm.make_deposit();
				break;
			case atm_menu::withdraw:
				atm.make_withdraw();
				break;
			default:
				std::cout<<"Invalid selection";

	
		}
			std::cout<<"Continue type y \n";
			std::cin>>cont;
	}while(cont == 'y' || cont == 'Y');

	

	BankAccount account;
	cout<<"Account: "<<account.get_balance()<<"\n";

	BankAccount account1(100);
	cout<<"Account1: "<<account1.get_balance()<<"\n";

	display_balance(account);

	BankAccount account3 = get_account();
	display_balance(account3);*/

	return 0;
}