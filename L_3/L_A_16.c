#include <stdio.h>
void main(){

    int n,i;

    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++){
        printf("Enter the %d element:",(i+1));
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
//output
// Enter the size of array:5
// Enter the 1 element:10
// Enter the 2 element:20
// Enter the 3 element:30
// Enter the 4 element:40 
// Enter the 5 element:50
// 10 20 30 40 50 