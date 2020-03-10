#include "checking_account.h"
#include <iostream>
using std::cout; using std::cin;

int main()
{
	CheckingAccount checking;
	CheckingAccount checking1(90);

	BankAccount a;
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
	}
	return 0;
}