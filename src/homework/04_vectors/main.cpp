#include "vectors.h"
#include <iostream>

using std::cout; using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	auto decision1 {0};
	auto decision2 = 'n';
	auto maximum{0};
	auto usernumber{0};
	vector<int> vectorset{ 0 };
	vector<int> vector1{ 8,4,20,88,66,99 };
	cout << "Input 1 to recieve the maximum number of a predetermined set." << "\n" << "Press 2 in order to get a list of all primes counting down from a given number." << "\n" << "Please make your selection now." << "\n";
	cin >> decision1;

	do{
		if (decision1 == 1){
			maximum = get_max_from_vector(vector1);
			cout << "The maximum number for the vector is: " << maximum << "\n";
		}
		else if (decision1 == 2){
			cout << "Please enter any whole number:" << "\n"; 
			cin >> usernumber;
			vectorset = vector_of_primes(usernumber);
			cout << "Every prime counting down from this number is: " << "\n";
			
			for (auto prime : vectorset) 
			{
				cout << prime << " ";
			}
		}
		cout << "Please press y to go through this process again, and any other key to exit: ";
		cin >> decision2;
	} while (decision2 == 'y');

	return 0;
}