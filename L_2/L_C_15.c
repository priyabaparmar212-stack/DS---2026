#include <stdio.h>

int main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;                  
        sum = sum + (rem * rem * rem);    
        temp = temp / 10;                 
    }

    if(sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is Not an Armstrong Number", num);

    return 0;
}
//output
// Enter a number: 123
// 123 is Not an Armstrong Number


// Enter a number: 153
// 153 is an Armstrong Number