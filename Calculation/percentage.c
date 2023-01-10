#include<stdio.h>
void main(){
        int sub1,sub2,sub3,sub4,sub5,sum,total=500;
    float per;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    printf("sum is : %d \n",sum);
    per=(sum*100)/total;
    printf("percentage is : %f ",per);
    getchar();

}