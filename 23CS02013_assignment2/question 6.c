#include<stdio.h>
int main(){
    int a;
    printf("enter number:");
    scanf("%d",&a);
    (a%2 ==0 && a>=100 &&a<=200)? printf("false"):printf("true");
    return 0;
}