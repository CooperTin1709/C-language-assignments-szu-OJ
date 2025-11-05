#include <stdio.h>

int main() {
    int a,n,sum=0;
    scanf("%d", &a);
    scanf("%d", &n);
    int sum1 = a * 1, sum2 = a * 11, sum3 = a * 111, sum4 = a * 1111, sum5 = a * 11111;
    switch (n) {
    case 1:sum = sum1; break;
    case 2:sum = sum1+sum2; break;
    case 3:sum = sum1+sum2+sum3; break;
    case 4:sum = sum1+sum2+sum3+sum4; break;
    case 5:sum = sum1 + sum2 + sum3 + sum4+sum5; break;
    }
    printf("%d",sum);
    return 0;
}