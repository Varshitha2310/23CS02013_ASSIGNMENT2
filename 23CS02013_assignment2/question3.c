#include<stdio.h>
int main(){
    int days, years, weeks,months;

    
    printf("Enter days: ");
    scanf("%d", &days);

    
    years = (days / 365);
    months = (days % 365) / 30;
    weeks=((days % 365)%30)/7;
    days=(days-(years*365)+(months*30)+(weeks*7));


    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);
}