#include <stdio.h>
#include <math.h>

int main ()
{
    int number,decimal,count,result,value,a;

    printf("Enter a binary number");
    scanf("%d",&number);

    count=log10(number);
    decimal=0;

    for(a=0 ; a<=count ; a++ )
    {
        result=number%10;
        value=result*pow(2,a);
        decimal+=value;
        number/=10;
    } 
    
    printf("DECIMAL FORMAT = %d",decimal);

    return 0;
}