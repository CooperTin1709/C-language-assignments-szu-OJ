#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		double a, b, c;
		scanf("%lf %lf %lf", &a, &b, &c);
		//判断三角形存在
		if (((a + b > c) && (a + c > b)) && (b + c > a)) {
			//是否有直角
			int right = 0;
			if (fabs(a * a + b * b - c * c)<0.001 || fabs(a * a + c * c - b * b)<0.001 || fabs(b * b + c * c - a * a)<0.001)
				right = 1;
			//判断类型
			if (fabs(a - b)< 0.001 || fabs(b - c) < 0.001 || fabs(a - c) < 0.001) {
				if ((fabs(a - b) < 0.001) && (fabs(b - c) < 0.001))
					printf("equilateral triangle");
				else if (right == 1)
					printf("isosceles right triangle");
				else
					printf("isosceles triangle");
			}
			else if (right == 1)
				printf("right triangle");
			else
				printf("general triangle");
			//计算部分
			double A, s;
			s = (a + b + c) / 2;
			A = pow(fabsf(s * (s - a) * (s - b) * (s - c)), 0.5);
			printf(", %.1lf\n", A);
		}
		else {
			printf("no triangle\n");
		}


	}
	return 0;
}