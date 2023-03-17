#include <stdio.h>
// function declaration /prototype
void first();
void sec();
void third();
void forth();
int main()
{
    // function call
    third();
    sec();
    first();
    return 0;
}
// function definitiossn
void first()
{
    printf("hellllo\n");
}

void sec()
{
    printf("heyyyyyyyyyy\n");
}
void third()
{
    printf("suiiiiiiiiiii ");
}
void forth()
{
    printf("crunch ");
}
