#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum,result,factorial,i,firstNumber;

    printf("Enter a number");
    scanf("%d",&number);

    sum=0;
    firstNumber=number;

    for(number;number>0;number/=10)
    {
        factorial=1;
        result=number%10;

        for(i=1; i<=result; i++)
        {
            factorial*=i;
        }
        sum+=factorial;
    }

    if(sum==firstNumber)
    {
        printf("This number is a PERFECT NUMBER");
    }
    else
    {
        printf("This number is not a PERFECT NUMBER");
    }

    return 0;
}