#include<stdio.h>
#include <math.h>
 
 int main()
 {
   
   int i, temp, number, count;
   printf("Enter a number: ");
   scanf("%d", &number);
  
   
   for(temp = 1;temp<=number;temp++)
   {
      count = 0;

      for(i=2;i<=temp/2;i++)
      {
         if(temp%i==0)
         {
            count++;
         
         }
      }
   if(count==0 && temp!= 1)
   {
    printf("%d\n",temp);
   }
      
   }
 
  return 0;
 }