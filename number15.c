#include <stdio.h>
#include <math.h>

int main ()
{
    int number,firstNumber,sum,result,value,count;

    printf("Enter a number");
    scanf("%d",&number);

    firstNumber=number;
    sum=0;
    count=log10(number);

    for(number;number>0;number/=10)
    {
        result=number%10;
        value=pow(10,count)*result;
        sum+=value;
        count-=1;

    }

    if(sum==firstNumber)
    {
        printf("This number is a PALINDROME NUMBER");
    }
    else
    {
        printf("This number is not a PALINDROME NUMBER");
    }
    return 0;

}