#include <stdio.h>
void main()
{
    // int i = 1;
    // do
    // {
    //     printf("%d\n", i);
    //     i++;

    // } while (i <= 100);

    // int n;
    // int i = 1;

    // printf("Enter the table value as you want");
    // scanf("%d", &n);
    // do
    // {
    //     printf("%d\n", n * i);
    //     i++;
    // } while (i <= 10);
    int odd_even;
    do
    {
        printf("Enter Number :");
        scanf("%d", &odd_even);
        printf("%d", odd_even);

    } while (odd_even % 2 == 0 ? printf("Even number ") && odd_even % 2 != 0 : printf(" Odd Number"));
}