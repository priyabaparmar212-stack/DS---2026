include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter The A");
    scanf("%d",&a);

    printf("Enter The B");
    scanf("%d",&b);

    printf("Enter The C");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }

    else
    {
        if(b>c)
        {
            printf("%d",b);
        }
        else
        {
           printf("%d",c);
        }
}

//output
// Enter The A 10
// Enter The B 30
// Enter The C 50
// 50