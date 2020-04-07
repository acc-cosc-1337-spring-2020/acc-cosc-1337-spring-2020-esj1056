#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include <vector>
#include <memory>
using std::cout; using std::cin; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{    // c++ 11
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(90);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	
	vector <unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));
	for (auto &act : accounts) {
		cout << act->get_balance() << "\n";
	}

	BankAccount* act = new CheckingAccount(100);
	//use it

	delete act;
	act = nullptr;

	/*BankAccount a;
	cout << a.get_balance();

	BankAccount account(500);
	cin >> account;
	cout << account;
	display_balance(account);

	auto balance = account.get_balance();
	cout << "Balance is: " << balance << "\n";
	
	auto amount{ 0 };
	cout << "Enter deposit amount: ";
	cin >> amount;

	try {
		account.deposit(amount);
		cout << "Balance is: " << account.get_balance();
	}
	catch (Invalid e) {
		cout << e.get_error() << "\n";
	}*/
	return 0;
}