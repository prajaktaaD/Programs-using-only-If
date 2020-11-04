/*4.Accept markes of three subjects and calculate percentage and display the class:
less than 50%=pass class
50% to 60% =second class
60% to 74%= first class
75%and above=distinction*/


#include<stdio.h>
int main()
{
  float m1,m2,m3,per;
  printf("Enter the markes of three subjects out of 100");
  scanf("%d%d%d",&m1,&m2,&m3);
  per=((m1+m2+m3)/300)*100;
  
  if(per<50)
   printf("\nPass Class);
  
  if((per>=50)&&(per<60))
    printf("\nSecond Class);
  
  if((per>=60)&&(per<75))
    printf("\nFirst Class);
  
  if(per>75)
   printf("\nDistinction);
   
   return 0;
   
 }  
