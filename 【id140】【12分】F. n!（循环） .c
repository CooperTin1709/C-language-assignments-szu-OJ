#include<stdio.h>
int main() {
	int n,w=1;
	scanf("%d", &n);
	if (n == 0)
		w = 1;
	else
		for (int i = 1; i <= n; i++)
			w *= i;
	printf("%d!=%d", n, w);
	return 0;
}