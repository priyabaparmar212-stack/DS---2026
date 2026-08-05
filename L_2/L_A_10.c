#include<stdio.h>
void main(){
    int rem,digit=0,num;

    printf("Enter The Number:");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        digit=digit*10+rem;
        num=num/10;
    }
printf("%d\n",digit);
}
//output
//Enter The Number:12345
//54321