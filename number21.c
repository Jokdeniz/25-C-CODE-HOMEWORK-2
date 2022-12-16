#include <stdio.h>
#include <math.h>

int main ()
{
    int number,i,result,multipier,a,sum,totalSum;

    printf("Enter a number");
    scanf("%d",&number);

    totalSum=0;
    sum=0;
    
     for(i=0;i<number;i++){

            multipier=pow(10,i);
            result=1*multipier;
            sum+=result;
            totalSum+=sum;
        }

    printf("TOTAL SUM = %d",totalSum);

    return 0;
}