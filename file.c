#include <stdio.h>

void main()
{
    int a, b, c;
    printf("enter the value of a and b");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition of a and b : %d\n", c);
    getchar();

    int i, n;
    printf("Enter any number for wants to see even number:");
    scanf("%d", &n);

    printf("\nNatural numbers till %d are : \n",n);
    for (i = 1;i <= n;i++)
    {
        if (i % 2==0)
        {
            printf("%d\n", i);
        }
        
    }
            getchar();
}