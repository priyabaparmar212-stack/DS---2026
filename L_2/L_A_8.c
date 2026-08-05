#include<stdio.h>
int recursion(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
       return  n * recursion(n-1);
    }
}
void main(){
int num;
printf("Enter The Number:");
scanf("%d",&num);
printf("factorial : %d",recursion(num));
}
//output
//Enter The Number:5
//factorial : 120