#include <stdio.h>

int main() {
    int t,a;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d", &a); 

        if (a % 2 != 0) {
            printf("0 0\n");
        }
        else {
            int max = a / 2;

            int min;
            if (a % 4 == 0) {
                min= a / 4;
            }
            else {
                min= a / 4 + 1;
            }
            printf("%d %d\n",min,max);
        }
    }

    
    return 0;
}