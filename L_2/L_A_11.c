#include<stdio.h>
void main(){
    int n;

    printf("Enter The Number:");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}
//output
// Enter The Number:12
// 1
// 2
// 3
// 4
// 6
//12