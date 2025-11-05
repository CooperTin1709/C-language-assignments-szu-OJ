#include<stdio.h>
#include<math.h>
int main() {
	int t,n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int w=0;
		scanf("%d", &n);
		for (int k = 1; k <= n; k++) {
			int a = 0;
			if ((k % 3 != 0) && (k % 4 != 0))
				a = 1;//不三不四判断
			if ((k % 7 == 0) && (a == 1))
				w += 1;

		}
		printf("%d\n", w);

	}
	return 0;
}