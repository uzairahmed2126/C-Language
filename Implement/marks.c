#include <stdio.h>
void main()
{
    // int marks;
    // printf("Enter the value of marks about knowing your grades");
    // scanf("%d", &marks);
    // if (marks >= 90 == marks <= 100)
    // {
    //     printf("A+ ");
    // }
    // else if (marks > 70 == marks < 90)
    // {
    //     printf("A");
    // }
    // else if (marks >= 30 == marks <= 70)
    // {
    //     printf("B");
    // }
    // else if (marks < 30 == marks <=35)
    // {
    //     printf("C");
    // }
    // else
    // {
    //     printf("Enter valid value");
    // }
    float total,subject;
    printf("Enter your value to convert in percentages");
    scanf("%f%f",&total,&subject);
    printf("your percentage is :%f",subject*total/100);
}