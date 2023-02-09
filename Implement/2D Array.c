#include<stdio.h>
int main(){
int sum=0,arr[3][3]={{6,5,4},{1,2,5},{7,9,7}};
//   lower triangle array
for (int i = 0; i < 3; i++)
{
    // printf("\n");
    for (int j = 0; j<=i ; j++)
    {
    printf("%d",arr[i][j]);
    sum=sum+arr[i][j];
    }
    printf("\n");



}
    printf("\nTotal of matrix is : %d\n",sum);

// upper triangle array
int sum2=0;
for (int a = 0; a <3 ; a++)
{
    for (int b =3-1; b >=a ; b--)
    {
    // printf("\n");
  
    sum2=sum2+arr[a][b];
    printf("%d",arr[a][b]);
    }
    printf("\n");


}
    printf("\nTotal of matrix is : %d\n",sum2);

return 0;
}