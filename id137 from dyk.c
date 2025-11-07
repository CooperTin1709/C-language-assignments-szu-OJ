#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool p(int n){
	if(n==0||n==1)return false;
	if(n==2)return true;
	if(n>2){
		for(int i=2;i<n;i++){
			if(n%i==0)return false;
		}
		return true;
	}
}
bool q(int n){
    int temp = n;
    int reverse = 0;
    while(temp>0){
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return n == reverse;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	int a,b,s=0;
    	scanf("%d %d",&a,&b);
    	for(int j=a;j<=b;j++){
    		if(p(j)&&q(j)){
    			printf("%d\n",j);
    			s++;
			}
		}
		if(s==0){
			printf("Not found\n");
		}
	}
	return 0;
}