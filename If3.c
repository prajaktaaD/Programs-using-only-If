//3.Menu driven program to claculate area of circle,square,rectangle::

#include<stdio.h>
int main()
{
  int choice;
  float r,s,a,b;
  printf("\nMenu \n1.Circle \n2.Square \n3.Rectangle");
  printf("\nEnter the choices:");
  
   if(choice==1)
    {
      printf("Enter radius of circle:);
      scanf("%f",&r);
      printf("\nArea of circle:%f",3.14*r*r);
    } 
      
  if(choice==2)
    {
      printf("Enter side of square:);
      scanf("%f",&s);
      printf("\nArea of square:%f",s*s);
    } 
    
    if(choice==3)
    {
      printf("Enter radius of rectangle:);
      scanf("%f%f",&a,&b);
      printf("\nArea of rectangle:%f",a*b);
    } 
    
    return 0;
 }  
