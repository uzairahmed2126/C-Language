#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a and b");
    scanf("%d%d", &a,&b);
    printf("value of a is %d and value of b is %d \n",a,b);
    c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    printf("your value is %d",c);
}