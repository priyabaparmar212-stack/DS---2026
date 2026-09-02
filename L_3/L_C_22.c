#include <stdio.h>

void main()
{
    int i, j, k, n;

    printf("Enter The Number:");
    scanf("%d", &n);

    int arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }

            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}
//output
// Enter The Number:5
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 