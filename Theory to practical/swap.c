#include<stdio.h>
int main ()
{
    int a, b, swap_result;
    printf("Enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    printf("Before swapping \n a=%d \n b=%d \n",a,b);
    swap_result = a;
    a = b;
    b = swap_result;
    printf("After swapping \n a=%d \n b=%d \n ",a,b);
    getchar();


}