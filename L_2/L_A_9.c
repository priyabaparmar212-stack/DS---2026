#include<stdio.h>
void main(){
    int b,p,sum=1;

    printf("Enter The Base:");
    scanf("%d",&b);

    printf("Enter The Power:");
    scanf("%d",&p);

    for(int i = 1; i <= p; i++)
    {
        sum = sum * b;
    }
printf("%d",sum);
}
//output
//Enter The Base:2
//Enter The Power:3
//8