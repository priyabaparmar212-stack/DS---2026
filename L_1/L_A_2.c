#include<stdio.h>
void main(){
    int n;

    printf("Enter The Number:");
    scanf("%d",&n);

    if(n % 2 != 0)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even Number");
    }
}
//if(n % 2 == 0)
// {
//     printf("even number");
// }
//output
// Enter The Number:2
// Even Number

// Enter The Number:5
// Odd Number