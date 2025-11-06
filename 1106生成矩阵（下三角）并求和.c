//原题：描述：在一个二维数组中形成以下形式的n阶矩阵并计算主对角线下元素的和
//1111
//2111
//3211
//4321

#include<stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);//
    for(int i=1;i<=n;i++){//循环打印i行
        int x=i;
        for(int k=1;k<=i;k++){//在第i行先打印i~1，再打印n-i个1
            printf("%d",x);
            sum+=x;
            x-=1;
        }
        for(int i1=i;i1<n;i1++){
            printf("1");
        }
        printf("\n");
    }
    printf("%d",sum-n);
    return 0;
}