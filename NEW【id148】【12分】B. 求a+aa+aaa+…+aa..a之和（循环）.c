#include<stdio.h>
int main()
{

	double a,n;
	int total = 0;
	scanf("%lf\n%lf", &a, &n);

	for (int j = 1; j <= n; j++) {
		double b = a / 10;
		int c = 0;
		for (int i = 1; i <= j; i++) {
			b = b * 10;
			c += b;

		}
		total += c;

	}

	printf("%d", total);

	return 0;
}