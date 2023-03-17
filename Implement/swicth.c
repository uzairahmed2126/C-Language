#include <stdio.h>
void main()
{
    // int class;
    // printf("Enter class");
    // scanf("%d", &class);
    // switch (class)
    // {
    // case 1:
    //     printf("`C` Language");
    //     break;
    // case 2:
    //     printf("I.T");
    //     break;
    // case 3:
    //     printf("f.o.c");
    //     break;
    // case 4:
    //     printf("D.L");
    //     break;
    // case 5:
    //     printf("maths");
    //     break;
    // default:
    //     printf("Enter number up to 5");
    // }


    int day;
    printf("Enter value up to 7 : \t");
    scanf("%d",&day);
    switch (day)
    {
    case 1 : printf("Monday");
             break;
    case 2 : printf("Tuesday");
             break;             
    case 3 : printf("Wednesday");
             break;
    case 4 : printf("Thursday");
             break;
    case 5 : printf("Friday");
             break;                              
    case 6 : printf("Saturday");
             break;            
    case 7 : printf("Sunday");
             break;              
    default: printf("Enter value up to 7");
        
    }

}