#include<stdio.h>
int main(){
    int arr1[100],arr2[100],i,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter Array elements :");
    for(i=0; i<n;i++){
    scanf("%d",&arr1[i]);

    }printf("First array element : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nCopy array :");
    for ( i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    printf("%d ",arr2[i]);
    }    
}