#include <stdio.h>
void main()
{
    int wether;
    printf("Enter the nature of month");
    scanf("%d", &wether);
    if (wether == 1 || wether == 2)
    {
        printf("jan and fab is winter season");
    }
    else if (wether < 7)
    {
        printf("march to july is summer season");
    }
    else if (wether == 8 || wether == 9)
    {
        printf("aug and sept is rainy season");
    }
    else if (wether == 10)
    {
        printf("oct is season of spring");
    }
    else if (wether == 11 || wether == 12)
    {
        printf("nov to dec is winter season");
    }
    else
    {
        printf("Enter the valid value");
    }
}