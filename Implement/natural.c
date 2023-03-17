#include<stdio.h>
void main ()
{
    int natural;
    printf("Enter the natural number");
    scanf("%d",&natural);
    if(natural >1){
        printf("given number is natural");
    }else{
        printf("givne number is not natural number");
    }
    natural >=1 ? printf("it is natural number") : printf("not natural");
    
}