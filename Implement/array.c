#include<stdio.h>
void main(){
    int arr[3],n;
    int sum;
    int i;
    char ch = 'y';
    
    printf("Enter first cost :" );
    scanf("%d",&arr[0]);

    printf("Enter second cost :");
    scanf("%d",&arr[1]);

    printf("Enter third cost :");
    scanf("%d",&arr[2]);

    printf(" first price is : %d \n",arr[0]);
    printf(" second price is : %d \n",arr[1]);
    printf(" third price is : %d \n",arr[2]);

    printf(" Do you want to know your final price");
    scanf("%d",&n);
    
    if(n == 'y'){
        sum = arr[0]+arr[1]+arr[2];
        printf("your final price is : %d",sum);
    }else printf("Thanks for your feedback");
    for(i=0;i<=9;i++){
        if (i < 3)
        {

        printf("%d %lu %d \n",i,sizeof(arr),arr[i]);
            
        }
        
    }

}