#include<stdio.h>
void main ()
{
    int age ;
    float pi;
    char star;

    printf("Enter this words age pi and star");
     age = 19;
    scanf("%d",&age);
    // age = 19;
    printf("user age is %d\n",age);

    scanf("%f",&pi);
    pi = 3.14;
    printf("pi value is %f\n",pi);

    scanf("%c",&star);
    star = '*';
    printf("star is %c\n",star);



}