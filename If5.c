//5.Find greatest of 3 numbers using only if:

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three num:");
  scanf("%d%d%d",&a,&b,&c);
  
  if(a>b)
    {  
       if(a>c)
       printf("a(%d) is greatest",a);
       
       if(a<c)
       printf("c(%d) is greatest",c);
       
     }
     
   if(a<b)
    {  
       if(b>c)
       printf("b(%d) is greatest",b);
       
       if(b<c)
       printf("c(%d) is greatest",c);
       
     }   
     
     return 0;
  }   
