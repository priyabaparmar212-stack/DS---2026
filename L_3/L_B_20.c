#include <stdio.h>

void main()
{

    int n;

    printf("Enter The Number:");
    scanf("%d", &n);

    int arr[n];
    int i, j, d;
    int count = 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter The N element:");
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < n; j++)
        d = arr[i];
    {
        for (i = 0; i < n; i++)
        {
            if (d == arr[i] && i != j)
            {
                count++;
            }
        }
    }

    if (count > 1)
    {
        printf("array contain has duplicate number");
    }
    else
    {
        printf("array contain has not duplicate number");
    }
}
// output

// Enter The Number:5
// Enter The N element:10
// Enter The N element:20
// Enter The N element:30
// Enter The N element:40
// Enter The N element:50
// array contain has not duplicate number

// Enter The Number:5
// Enter The N element:10
// Enter The N element:20
// Enter The N element:30
// Enter The N element:20
// Enter The N element:40
// array contain has duplicate number
