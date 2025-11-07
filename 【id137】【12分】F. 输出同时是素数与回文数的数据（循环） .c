#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int a, b,notfind=0;//notfind记录不满足的数数量
        scanf("%d %d", &a, &b);
        for (int x = a; x <= b; x++) {//搞出[a,b]中所有的数x，依次判断
            int isPrime = 1;//默认一个数是素数

            for (int y = 2; y * y <= x; y++) {
                if (x % y == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                int test10=x,test,reverse=0;//test10用来判定while循环，test发生转变；reverse是回文之后的数
                while(test10!=0){
                    test=test10%10;
                    reverse=reverse*10+test;
                    test10/=10;
                }
                if((x==reverse)&&(x>1)){
                    printf("%d\n",x);
                }
                else{
                    notfind+=1;
                }
            }
            else{
                notfind+=1;
            }
            if(notfind==(b-a+1)){
                printf("Not found\n");
            }
        }

    }
    return 0;
}