#include <stdio.h>
int main()
{
    int age = 1;
    while (age <= 100)
    {
        printf("%d Hello World \n", age * 2);
        age++;
    }
    int n;
    printf("Enter number of table");
    scanf("%d", &n);
    int i = 1;
    while (i <= n*10 )
    {
        printf("%d\n ",i *2);
        i++;
    }if(n<=0){
        printf("Enter number 1 to as you want");
    }
}