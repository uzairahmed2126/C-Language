#include<stdio.h>

int main(){
    // 1d Array
    int marks[4]={28,63,30,2};
    for (int i = 0; i < 4; i++)
    {
    
    
    printf("enter no. 0-4 for see number of exam");
    scanf("%d",&marks[i]);
    
    printf("uzair's marks is %d\n",marks[0]);
    printf("adnan's marks is %d\n",marks[1]);
    printf("rehan's marks is %d\n",marks[2]);
    printf("ali's   marks is %d\n",marks[3]);

    }
    int diclaration_with_initiasation[4],sum=0;
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d element  : ",i);
        scanf("%d",&diclaration_with_initiasation[i]);
        sum=sum+diclaration_with_initiasation[i];


    }
        printf("Total is : %d\n",sum);

        int markss[3];
        printf("enter phy : ");
        scanf("%d",&markss[0]);

        printf("enter chem : ");
        scanf("%d",&markss[1]);

        printf("Enter eng : ");
        scanf("%d",&markss[2]);


        printf("phy is : %d\n",markss[0]);
        printf("chem is : %d\n",markss[1]);
        printf("eng is : %d\n",markss[2]);

        float price[3];
        for(int i=0;i < 3;i++){
        printf("Enter the value of price : ");
        scanf("%f",&price[i]);
        }

        printf("your first  price is : %f\n",price[0]+(0.18*price[0]));
        printf("your sec price is : %f\n",price[1]+(0.18*price[1]));
        printf("your third price is : %f\n",price[2]+(0.18*price[2]));

        int age = 22; 
        int *pointer = &age;
        printf("pointer is = %u\n",pointer);
        pointer++;
        printf("pointer is = %u\n",pointer);
        pointer--;

    return 0;

    
}