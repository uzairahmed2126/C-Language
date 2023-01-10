#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter any natural Number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Your Natural Number is : %d\n", i);
    }
}