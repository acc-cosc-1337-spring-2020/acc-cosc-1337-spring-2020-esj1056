#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string & dna)
{
	double counter = 0;
	double GC = 0;
	for (auto i = 0; i < dna.length(); ++i) {
		if (dna[i] == 'G' ||dna[i] == 'g' ||dna[i] == 'C' ||dna[i] == 'c' ) {
			++counter;
		}
		GC = counter / dna.length();
	}

	return GC;
}




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string & dna)
{
	string new_dna = "";
	for (auto i = dna.length(); i != 0; --i) {
		new_dna.push_back ( dna[i-1]);
	}

	return new_dna;
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string & dna)
{
	string dna_complement;
	dna_complement = get_reverse_string(dna);
	for (int i = 0; i < dna_complement.length(); ++i) {
		if (dna_complement[i] == 'A') {
			dna_complement[i] = 'T';
		}
		else if (dna_complement[i] == 'T') {
			dna_complement[i] = 'A';
		}
		else if (dna_complement[i] == 'G') {
			dna_complement[i] = 'C';
		}
		else if (dna_complement[i] == 'C') {
			dna_complement[i] = 'G';
		}
	}

	return dna_complement;
}
