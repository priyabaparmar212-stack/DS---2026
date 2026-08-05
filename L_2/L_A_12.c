#include <stdio.h>

int main(){
   
    int count=0,n;

    printf("Enter The Number:");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
           count++;
        }
    
    }
    if(count==2)
    {
        printf("%d is Prime Number",n);
    }
    else
    {
        printf("%d is Not Prime Number",n);
    }
}
//output
// Enter The Number:7
// 7 is Prime Number

//Enter The Number:12
//12 is Not Prime Number