	#include<stdio.h>
    int main(){

     int a;
    printf("the value of a=");
    scanf("%d",&a);
    if((a & 1) == 0)
        printf("Even");
    else
        printf("Odd");
    }