#include<stdio.h>
void main ()
{
    int i,n;
    printf("Enter Number who's you want to convert in reverse form ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d\n",i*n);
    }
    
}