#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum,result,a;

    printf("Enter a decimal number");
    scanf("%d",&number);

    sum=0;
    a=1;

    while(number>0)
    {
        result=number%2;
        sum=sum+(result*a);
        number/=2;
        a*=10;
    }

    printf("BINARY FORMAT = %d",sum);

    return 0;
}