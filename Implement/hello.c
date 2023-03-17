#include <stdio.h>
void main()
{
   int age;
   char gen;
   printf("Enter the gender and age");
   scanf("%c%d" ,&gen, &age);
   if (gen == 'm' || age == 'm')
   {
      if (age >= 21)
      {
         printf("you are aligible for marriage");
      }
      else
      {
         printf("you are not aligible for marriage");
      }
   }
    if (gen == 'f' || age == 'f')
   {
      if (age >= 21)
      {
         printf("you are aligible for marriage");
      }

      else
      {
         printf("you are not aligible for marriage");
      }
   } 
      else

      {
         printf("invalid input");
      }
      getchar();
   }


   {
      int per;
      printf("Enter the percentage");
      scanf("%d",&per);
      if (per == 100)
      {
         printf("Topper");
      }
      else if(per>=80){
         printf("First Division");
      }
      else if (per >=60)
      {
         printf("Second Division");
      }
      else if(per>=35){
         printf("Third Division");
      }
      else{
         printf("I can't say, but you are fail");
      }
   
   
   }
