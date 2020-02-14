//write includes statements
#include "loops.h"
#include<iostream>
//write using statements for cin and cout
using std::cin; using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;

	do {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << factorial(num) << "\n\n";

		cout << "Enter 1 to continue, enter anything else to exit." <<"\n\n";
		cout << "Continue: ";
		cin >> choice;
	} while (choice == 1);


	return 0;
}