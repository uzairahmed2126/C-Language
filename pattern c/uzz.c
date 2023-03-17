#include <stdio.h>

int main(void) {
    // int i, j, space, rows;

    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);

    // for (i = 1; i <= rows; i++) {
    //     for (space = rows - i; space >= 1; space--) {
    //         printf(" ");
    //     }
    //     for (j = 1; j <= (2 * i - 1); j++) {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    // return 0;

    int a,b,n;
    printf("Enter the value :");
    scanf("%d",&n);
    for (a = 0; a <n; a++)
    {
        for ( b = 0; b <n; b++)
        {       
        if(a==0||b==0||a==n-1||b==n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
