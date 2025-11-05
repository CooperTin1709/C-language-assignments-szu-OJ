#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	float a1=0, b1=0, c1=0;
	scanf("%d %d %d", &a, &b, &c);
	for (int x = 1; x <= a; x++) {
		a1+=x;
	}
	for (int y = 1; y <= b; y++) {
		b1 += pow(y, 2);

	}
	for (int z = 1; z <= c; z++) {
		c1 += pow(z,-1);

	}
	printf("%.2f", a1+b1+c1);



	return 0;
}