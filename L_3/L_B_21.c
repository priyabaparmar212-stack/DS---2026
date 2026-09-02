#include <stdio.h>

void main()
{
    int n, n1, n2, i;

    printf("Enter The Number :");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter The %d element:", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter The Two Element:");
    scanf("%d %d", &n1, &n2);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == n1)
        {
            arr[i] = n2;
            printf("index: %d\n", i);
        }
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

//OUTPUT
// Enter The Number :5
// Enter The 0 element:10
// Enter The 1 element:20
// Enter The 2 element:30
// Enter The 3 element:20
// Enter The 4 element:40
// Enter The Two Element:20,50
// index: 1
// index: 3

// 10 -2 30 -2 40 