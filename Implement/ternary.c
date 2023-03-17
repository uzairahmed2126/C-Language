#include<stdio.h>
void main()
{
    int binary;
    printf("Enter 0 or 1 :\t");
    scanf("%d",&binary);
    binary == 0 ? printf("false") : (binary == 1, printf("true"));
}