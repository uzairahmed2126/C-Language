#include<stdio.h>
void main()
{
    char a;
    int i;
    printf("Enter char \n");
    scanf("%c",&a);
    printf("Your ASCII code is %d",a);
    for ( i=1; i<=26; i++)
    {
        printf("%d \n ",i);
    }
    

    getchar();
}
