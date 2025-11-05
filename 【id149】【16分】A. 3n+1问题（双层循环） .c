#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int n,x=0;
        scanf("%d", &n);
        char c = getchar();//用来吸收空格
        while (n != 1) {
            if ((n % 2)== 0) {
                n = n / 2;
            }
            else {
                n = 3 * n + 1;
            }
            x += 1;
        }
        printf("%d ", x);
    }
    return 0;
}