#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum,count,result,value,firstNumber;

    printf("Enter a number");
    scanf("%d",&number);

    sum=0;
    count=log10(number)+1;
    firstNumber=number;

    for(number;number>0;number/=10)
    {
        result=number%10;
        value=pow(result,count);
        sum+=value;
    }

    if(sum==firstNumber)
    {
        printf("This number is an ARMSTRONG Number");
    }
    else
    {
        printf("This number is not an ARMSTRONG Number");
    }

    
    return 0;
}