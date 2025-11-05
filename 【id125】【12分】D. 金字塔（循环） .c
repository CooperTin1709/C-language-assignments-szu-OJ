#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        char ch;
        int n;
        scanf("%d %c", &n, &ch,1);
        for (int k = 1; k <= n; k++) {//打印n行，从上到下分别是第k行
            //第k行由（n-k）*2个空格和2k-1个ch组成
            for (int i2 = 1; i2 <= (n - k) * 2; i2++) {
                printf(" ");
            }
            for (int i3 = 1; i3 <= 2 * k - 1; i3++) {
                printf("%c", ch);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}