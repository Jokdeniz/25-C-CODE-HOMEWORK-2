#include <stdio.h>
#include <math.h>

int main ()
{
    int number,i;
    double result,sum;

    printf("Enter a number");
    scanf("%d",&number);
    
    sum=0;
    

    for(i=1;i<=number;i++)
    {
        result=pow(i,-1);
        sum+=result;
        
    }

    printf("TOTAL SUM = %lf",sum);

    return 0;
}