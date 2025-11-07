#include<stdio.h>
#include<math.h>

double f(double x){
    return pow(x,3)-5*pow(x,2)+16*x-80;;
}

double xpoint(double x1,double x2){
    return (x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
} 

double root(double x1,double x2){
    double x;
    do{
        x=xpoint(x1,x2);
        if(f(x)*f(x1)>0){
            x1=x;
        }
        else{
            x2=x;
        }
    }while(fabs(f(x))>0.0001);
    return x;
}

int main(){

    double x1,x2,x;
    scanf("%lf %lf",&x1,&x2);
    while(f(x1)*f(x2)>0){
        printf("reinput:\n");
        scanf("%lf %lf",&x1,&x2);}
    
        x=root(x1,x2);
        printf("%.6lf\n",x);
    

    return 0;
}