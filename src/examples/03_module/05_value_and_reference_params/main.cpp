#include<iostream>

using std::cout;

int main() 
{
	int num = 5;
	cout << "Value of num :" << num << " Address os " << &num;

	int &num_ref = num;
	num_ref = 10;
	cout << "Value of num is: " << num << "Address is" << &num_ref;

	return 0;
}