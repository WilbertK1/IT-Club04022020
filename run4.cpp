#include <iostream> <string> 

using namespace std;

int main () {
	//compound assignment operators
	// +=, -=, *=, /=, %=
	int a = 10, b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = a;
	cout << "b = " << a << endl;
	b += 2 ; // as same as b = b + 2
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}
