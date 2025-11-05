#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		double x,y;
		scanf("%lf", &x);
		if (x < 0)
			y = fabs(x);
		else if ((0 <= x) && (x < 1))
			y = sin(2 * x);
		else if ((1 <= x) && (x < 5))
			y = sqrt(x * x * x + x);
		else
			y = 2 * x + 10;
		printf("%.2lf\n", y);


	}
		
	return 0;
}