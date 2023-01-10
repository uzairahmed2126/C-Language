#include<stdio.h>
void  main()
{
float l,b,r,arect,acir,asq,atri;
printf("Enter Length and Breath \n");
scanf("%f%f",&l,&b);
printf("\n Enter Radius");
scanf("%f",&r);

arect = 1*b;
acir = 3.14*r*r;
asq = r*r;
asq = 0.5*1*b;

printf("\nArea of Reactangle is %f ",arect);
printf("\n Area of Circle is %f",acir);
printf("\n Area of Square is %f",asq);
printf("\n Area of Triangle is %f",atri);

getchar();
}