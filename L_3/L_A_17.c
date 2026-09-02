#include <stdio.h>
void main()
{

    int m, n, size, temp, i;

    printf("Enter The M:");
    scanf("%d", &m);

    printf("Enter The N:");
    scanf("%d", &n);

    if (m > n)
    {
        size = m - n + 1;
        temp = n;
    }
    else
    {
        size = n - m + 1;
        temp = m;
    }

    int arr[size];
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        arr[i] = temp;
        temp++;
        sum = sum + arr[i];
    }

    printf("Enter The Sum Of:%d", sum);
}
//output
// Enter The M:5
// Enter The N:10
// Enter The Sum Of:45