#include<stdio.h>
 
int main()
{
   int a, b, c;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d",&a,&b);
 
   c = a + b;
   
 
   printf("Sum of entered numbers = %d\n",c);
   
   printf("Enter two numbers to multiply\n");
   scanf("%d%d",&a,&b);
   
   //multiplication function
   c = a * b;
  
 
   return 0;
}