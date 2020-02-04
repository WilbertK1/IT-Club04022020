#include <iostream> <string> // preprocessor

using namespace std; // standard character output

int main () { // initiates the declaration of function
	cout << "Hello World";
	cout << "My name is Budi";
	cout << "\n"; // newline
	cout << "Hello again";
	cout << endl << "Hi"; // another new line
	
	// declaration variable
	int a = 5;
	cout << a << endl;
	
	float b {3.5}; // float for decimal
	cout << b << endl;
	
	double d {9.6};
	cout << d << endl;
	
	int c;
	c = 7;
	cout << c << endl;
	
	cout <<" b - d : " << b - d << endl; // doing operation
	
	// include <string> first
	string mystring;
	mystring = "My first string\n";
	string mystring2;
	mystring2 = "My first string";
	cout << mystring << mystring2 << endl;
	
	// terminate my program
	return 0;
}
