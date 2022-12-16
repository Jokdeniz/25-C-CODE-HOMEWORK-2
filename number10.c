#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum,count,result,value,firstNumber,totalSum,i,a;

    printf("Enter a number:");
    scanf("%d",&number);

    totalSum=0;
      
    for(i=1;i<=number;i++)
    {
        firstNumber=i;
        sum=0;
        count=log10(i)+1;

        for(a = i; a >0; a/=10)
        {
            result=a%10;
            value=pow(result,3);
            sum+=value;
        
        }

        if(sum==firstNumber)
        {
           
           totalSum+=firstNumber;
        }
        
    }

    printf("Total Sum = %d",totalSum);

   return 0;
}