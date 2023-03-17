#include <stdio.h>
void main()
{
    int age;
    printf("Enter the Age :");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote \n");
        printf("you can marrige after few year's \n");
        printf("you can find job \n");
        printf("you can earn money \n");
        printf("you can read above after crack age 18 guidelines \n");
    }
    else if (age < 13 ? age >18 : printf("hello you are teenager"));
    else{
        printf("Wait bro you are little, but i want to gives you advise : focuse on your study and gain knowladge");
    }
    
}