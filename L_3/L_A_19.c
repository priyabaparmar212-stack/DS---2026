#include <stdio.h>
void main()
{

    int n, i;

    printf("Enter The Number:");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter The Array Element:");
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    int lp, sp;

    for (i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
            lp = i;
        }
        if (smallest < arr[i])
        {
            smallest = arr[i];
            sp = i;
        }
    }

    printf("Largest : %d\n", largest);
    printf("Largest Position : %d\n", lp);

    printf("Smallest : %d\n", smallest);
    printf("Smallest Position : %d\n", sp);
}