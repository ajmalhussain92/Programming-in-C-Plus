#include <iostream>
#include <fstream>
using namespace std;



int main () {
	
	// Create and open a text file		(If already, only opens)
  	ofstream MyFile ("filename.txt");
  	
  	MyFile << "MyFile is a user-defined variable name.";
  	
  	ofstream File ("abc.txt");
  	

	return 0;
}

/* Notes:

The 'fstream' library allows us to work with files.

	fstream:	ofstream + ifstream
	
	ofstream:	Creates and writes to files
	
	ifstream:	Reads from files







*/