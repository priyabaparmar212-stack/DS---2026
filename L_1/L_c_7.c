#include <stdio.h>

int main() {
    
    int year,week,days,rem;

    printf("Enter The days:");
    scanf("%d",&days);

    //days=365

    year = days/365;
    rem = days % 365;
    week = rem/7;
    days = rem%7;

    printf("year = %d\n", year);
    printf("week = %d\n", week);
    printf("days = %d\n", days);


    printf("%d%d%d",year,week,days);
}
//output
// Enter The days:375
// year = 1
// week = 1
// days = 3
