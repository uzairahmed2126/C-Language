#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter value of x and y ");
    scanf("%d%d", &x, &y);
    z = x + y;
    printf("Your Addition is : %d \n", z);
    z = x - y;
    printf("Your Subtraction is : %d \n", z);
    z = x * y;
    printf("Your Multiplication is : %d \n", z);
    z = x / y;
    printf("Your Division is : %d \n", z);
    z = x % y;
    printf("Your Remainder is : %d \n", z);


    int a, b, c;
    float c1;
    printf("\nplease enter the values of a and b ");
    scanf("%d%d", &a, &b);
    printf("value of A is %d and B is : %d \n", a, b);
    c = a + b;
    printf("Addition of two values is : %d \n", c);
    c = a - b;
    printf("Subtraction of two values is : %d \n", c);
    c = a / b;
    printf("Division of two values is : %f \n ", c1);
    c = a % b;
    printf("Remainder of two values is : %d \n", c);
    c = a * b;
    printf("Multiplication of two values is %d \n", c);
    c = a + b;
    printf("Addition of two values is %d \n ", c);


}

