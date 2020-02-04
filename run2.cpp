// constant
#include <iostream>
#include <string>

//preprocessor marcros definitions #define
#define PI 3.14

//typed constant value
const double pi = 3.142

using namespace std;

int main () {
	cout << PI << endl;
	cout << pi << endl;
	
	// \n means newline
	cout << "This continues to \n a new line " << endl;
	
	// \t means tab
	cout << "left \t right " << endl;
	
	// boolean
	bool foo = true;
	bool bar = false;
	
	cout << foo << endl; //output 1
	cout << bar << endl; //output 2
	
	int a, b ;
	a = 10;
	b = 12;
	cout << "a tambah b: " << a + b << endl;
	cout << "a kurang b: " << a - b << endl;
	cout << "a bagi b: " << a / b << endl;
	cout << "a kali b: " << a * b << endl:
	cout << "a mod b: " << a % b << endl;
	
	// input
	cout << "Old a: " << a << endl;
	cout << "NIlai a: ";
	cin >> a;
	cout << "New a: " << a << endl;
	
	return 0;
}
