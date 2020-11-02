//2.Accept two numbers and subtract smaller value from bigger:

#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter two numbers :");
  scanf("%d%d",&num1,&num2);
  
  if(num1>num2)
    printf("The Difference=%d",num1-num2);
  
  if(num1<num2)
    printf("The Difference=%d",num2-num1);
    
   return 0;
 } 
