#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a,b,c,d;
        scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
        a+=5;
        if(a>=10){
            a=a%10;
        }
        b+=5;
        if(b>=10){
            b=b%10;
        }
        c+=5;
        if(c>=10){
            c=c%10;
        }
        d+=5;
        if(d>=10){
            d=d%10;
        }
        int a1=a,b1=b;
        a=d;
        d=a1;
        b=c;
        c=b1;
        printf("%d%d%d%d\n",a,b,c,d);
    }

    return 0;
}