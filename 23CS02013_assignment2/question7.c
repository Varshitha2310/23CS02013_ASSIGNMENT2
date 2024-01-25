#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    printf("enter cost of metal,tip percentage and tax percentage:");
    scanf("%f%f%f",&a,&b,&c);
    d=(a/100)*b;
    e=(a/100)*c;
    f=a+d+e;
    printf("total cost of meal=%f",f);
    return 0;
}