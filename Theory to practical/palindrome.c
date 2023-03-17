#include<stdio.h>  
int main()    
{    
int n,reverse,sum=0,temporary;    
printf("enter the number=");    
scanf("%d",&n);    
temporary=n;  

while(n>0)    
{    
reverse=n%10;    
sum=(sum*10)+reverse;    
n=n/10;    
}    

if(temporary==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}  