#include<stdio.h>
void main(){
    int fd,ld;

    printf("Enter The Fristdigit:");
    scanf("%d",&fd);

    printf("Enter The lastdigit:");
    scanf("%d",&ld);

    if(fd==1)
    {
        fd++;
    }

    for (int  i = fd; i <= ld; i++)
    {
        int count=0;
    for(int j = 2; j < i; j++)
    {
       if(i%j==0)
       {
        count++;
        break;
       }
    }
      if(count==0)
      {
        printf("%d\n",i);
      }  
    }
    
}
//output
// Enter The Lowerbound:1
// Enter The Upperbound:100
// 2
// 3
// 5
// 7
// 11
// 13
// 17
// 19
// 23
// 29
// 31
// 37
// 41
// 43
// 47
// 53
// 59
// 61
// 67
// 71
// 73
// 79
// 83
// 89
// 97