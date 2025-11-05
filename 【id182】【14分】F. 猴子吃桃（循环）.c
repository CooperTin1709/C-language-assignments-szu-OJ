#include <stdio.h>
#include <math.h>
int main() {
    int n,sum,x=0;
    scanf_s("%d",&n);
    sum = 1;
    for (int i = 0; i < n; i++) {
        x = sum + 1;
        sum = x + sum;

    }
    printf("%d",sum);

    return 0;
}