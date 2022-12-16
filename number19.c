#include <stdio.h>
#include <math.h>

int main ()
{
    int number,x,factorial,i,a;
    float value,sum;

    printf("Enter the value of x :");
    scanf("%d",&x);
    printf("Enter a number :");
    scanf("%d",&number);

    sum=0;
    

    for(i=0 ; i<number ; i++)
    {
        factorial=1;
        for(a=1 ; a<=i ;a++)
        {
            factorial*=a;
        }
        
        value=pow(x,i)*pow(factorial,-1);
        sum+=value;
        
    }

    printf("TOTAL SUM = %.3f",sum);

    return 0;


        
    
}