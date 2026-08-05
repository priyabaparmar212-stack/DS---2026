#include<stdio.h>
void main(){
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);

    for(int i = 1; i <=n; i++)
    {
     int sum=0; 
      for ( int j = 1; j <=i; j++)
      {
        sum = sum + j;
      }
      printf("%d\n",sum);
    }
}
//output
// Enter The Number:5
// 1
// 3
// 6
// 10
// 15