# include<iostream><stdio.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		long long a, b, k;
		long long x = 0;
		cin >> a >> b >> k;
		//if (k%2 == 0){
		//	x += (k/2*(a-b)); // a - b + a - b
		//}else {
		//	x += (((k-1)/2)*(a-b) + a); // a - b = a - b + a
		//}
		//cout << x << endl;
		cout << a * ( k / 2 + k % 2) - b * (k / 2) << endl;	
	}
}
