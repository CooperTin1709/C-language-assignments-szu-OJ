#include<stdio.h>
int main() {
	int cxj=0,ys,st=0,left;//每个月的整百储蓄金、预算、手头的钱、减去预算后剩的钱
	for (int i = 1; i <= 12; i++) {
		scanf("%d", &ys);
		left = 300 + st - ys;
		if (left<0) {
			printf("-%d", i);
			return 0;
		}
		else {
			if (left >= 100) {
				cxj += (left / 100)*100;
				st = left % 100;
			}
			else
				st = left;
		}	
	}
	printf("%.0f", st+1.2*cxj);
	return 0;
}