#include <stdio.h>
#include <math.h>

int main ()
{
    int number,x,i,a,factorial,operator;
    float sum,result2,result4,value;

    printf("Enter the value of x");
    scanf("%d",&x);
    printf("Enter a number");
    scanf("%d",&number);
    
    result2=0;
    result4=0;
    number*=2;
    operator=1;

    for(i=2;i<=number;i+=2)
    {
        factorial=1;

        for(a=i;a>=1;a--)
        {
            factorial*=a;
        }
        
        value=pow(x,i)*pow(factorial,-1);
        
        if(operator%2==1)
        {
            result2+=value;
        }
        else
        {
            result4+=value;
        }

        operator+=1;
           
    }

    sum=1-result2+result4;

    printf("TOTAL SUM = %f",sum);

    return 0;


}