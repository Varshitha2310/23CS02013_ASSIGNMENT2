#include<stdio.h>
int main(){
    int a,b,c,greatest;

	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	greatest = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest number is: %d", greatest);
    return 0;


}