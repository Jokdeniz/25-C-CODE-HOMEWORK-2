#include <stdio.h>
#include <math.h>

int main ()
{
    int number,i,a,result;

    printf("Enter a number");
    scanf("%d",&number);

    for(i=1 ; i<=number ; i++)
    {
        printf("\n");
        for(a=i ; a>0 ; a--)
        {
            result=a%2;

            if(result==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
    }

    return 0;
}