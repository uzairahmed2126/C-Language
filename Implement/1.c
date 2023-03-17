#include <stdio.h>

// int main()
// {
//   int a, b;
//   a = 0;
//   b = 1;

//   while (a <= 30)
//   {
//     printf("%d \n", a);
//     a = a + b;
//     a = a - b;
//   }
// }
// int main()
// {
//   int i = 10;
//   while (i <= 1)
//   {
//     printf("%d\n", i);
//   }
// }

void main()
{
  int age, gender;
  printf("Enter the value of your age and gender ");
  scanf("%d%d", &age, &gender);

  if (age >= 18 || gender == 'f')
  {
      printf("You are female and you are aligible for marriage");

  }
  else if(age > 21 || gender == 'm')
    {
      printf("You are male and you are aligible for marriage");
    }
  else
  {
    printf("Bete mummy ko bolo complain pilaye");
  }
}
