#include <stdio.h>
#include <math.h>

int main ()
{
    int number,i,result,value,sum,count,x,operator;

    printf("Enter the value of x :");
    scanf("%d",&x);
    printf("Enter the count number :");
    scanf("%d",&number);

    sum=0;
    count=1;
    number=number*2;

    for(i=1 ; i<=number ; i+=2)
    {
        operator=count%2;
        if(operator==1)
        {
            value=pow(x,i);
            sum+=value;  
        }
        else
        {
            result=pow(x,i);
            sum-=result;
        }
        count+=1;
    }

    printf("TOTAL SUM = %d",sum);

    return 0;
  
}