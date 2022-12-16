#include <stdio.h>
#include <math.h>

int main ()
{
    int number,sum,i,result,totalSum,temp;

    printf("Enter a number");
    scanf("%d",&number);

    totalSum=0;
    
    for(temp==1;temp<=number;temp++)
    {
        sum=0;

        for(i=1;i<=temp/2;i++)
        {
            result=temp%i;

            if(result==0)
            {
                sum+=i;
            }
        }

        if(sum==temp)
        {
            
            totalSum+=temp;
        }

    }

    printf("Total Sum = %d",totalSum);

    return 0;   
}