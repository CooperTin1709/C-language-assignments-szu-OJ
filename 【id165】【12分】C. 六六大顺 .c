#include<stdio.h>
int main() {
	int t,n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int a = 0;//判断变量
		scanf("%d", &n);
		if (n % 6 == 0)
			a = 1;
		if ((n % 10) == 6)
			a = 1;
		int w = 0;//数位
		while (n != 0) {
			n /= 10;
			w++;
		}
		if (w == 6)
			a = 1;
		if (a == 1)
			printf("Yes\n");
		else
			printf("No\n");

	}
		
	return 0;
}