#include<stdio.h>
void main(){
    int s,m,h;
    int rem;

    printf("Enter The Second:");
    scanf("%d",&s);

    

    h = (s/3600);
    rem = (s%3600);
    m = rem/60;
    s = rem%60;


    printf("\nHours   = %d", h);
    printf("\nMinutes = %d", m);
    printf("\nSeconds = %d", s);


    printf("%d%d%d",h,m,s);

    //sec =  1 min = 60 sceond 
    //sec = 1 h = 3600 second 
    

}
//output
// Enter The Second:10000

// Hours   = 2
// Minutes = 46
// Seconds = 4024640
