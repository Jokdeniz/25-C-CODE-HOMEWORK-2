#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum,i,result;

    printf("Enter a number");
    scanf("%d",&number);

    sum=0;

    for(i=1;i<=number/2;i++)
    {
            result=number%i;

            if(result==0)
            {
                sum+=i;
            }
    }

    if(sum==number)
    {
        printf("This number is a PERFECT NUMBER");
    }

    else
    {
        printf("This number is not a PERFECT NUMBER");
    }

    return 0;   
}