#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum,result,factorial,i,firstNumber,temp,totalSum,a;

    printf("Enter a number");
    scanf("%d",&number);

    totalSum=0;
   
    for(temp=1;temp<=number;temp++)
    {
        sum=0;
        firstNumber=temp;
        
        for(a=temp;a>0;a/=10)
        {
        factorial=1;
        result=a%10;

        for(i=1; i<=result; i++)
        {
            factorial*=i;
        }
        sum+=factorial;
        }

        if(sum==firstNumber)
        {
            
            totalSum+=firstNumber;
        }
        
    }

    printf("TOTAL SUM = %d",totalSum);

     return 0;
}