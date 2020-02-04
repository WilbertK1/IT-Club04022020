# include<stdio.h>
using namespace std;
int main()
{
		//int a, b;
		//scanf ("%d%d", &a, &b);
		//printf ("%d\n", a + b);
		//return 0;
		
		double sum = 0, buf;
		for(int i = 0; i < 12; i++) {
			scanf("%lf", &buf);
			sum += buf;
		}
		printf("$%.21f\n", sum / 12.0);
		return 0;

}
