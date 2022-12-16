#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum;

    number=1;
    sum=0;

    for(number;number<=50;number++)
    {
        sum+=number;
    }

    printf("TOTAL SUM : %d",sum);

    return 0;
}