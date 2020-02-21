//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int selection;
	string loop_selection = "";
	string dna = "";
	do {
		cout << "Please enter a string of DNA:";
		cin >> dna;
		cout << "\n" << "Enter 1 to get the GC content of a DNA string." << "\n" << "Enter 2 to get the reverse complement of a DNA string." << "\n" << "Please enter your selection:";
		cin >> selection;
		if (selection == 1) {
			double gc_content = get_gc_content(dna);
			cout << gc_content;
		}
		else if (selection == 2) {
			string dna_complement = get_dna_complement(dna);
			cout << dna_complement;
		}
		cout << "\n" << "If you would like to do this again, please hit the y key. Otherwise, hit any other key: ";
		cin >> loop_selection;
	} while (loop_selection == "y" || loop_selection == "Y");
		return 0;
}