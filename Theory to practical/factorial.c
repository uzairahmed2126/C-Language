#include <stdio.h>
void main()
{
    float factorial = 1,n,i;
    printf("Enter the factorial number");
    scanf("%f", &n);
    for (i = 1; i <=n; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial is :%f ", factorial);
//     {
//     int n;
//     printf("\nEnter any num :");
//     scanf("%d", &n);
//     for (int i = 10; i >= 1; i--)

//     {
//         printf("%d\n", i*n);
//     }
// }
}