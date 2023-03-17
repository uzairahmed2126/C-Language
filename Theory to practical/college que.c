#include <stdio.h>
void main() 
{
    int arr[10], max,i;

    for(i=0;i<10;i++)
   {
    printf("enter number %d : ",i+1);
    scanf("%d",&arr[i]);
   }
    max = arr[0];
    for(i=0;i<10;i++){
    if(arr[i]> max){
        max = arr[i];
    

    printf("\n the largest element is %d",max);
       
}
}
}