#include <stdio.h>
#include <math.h>

int main ()
{
    int x,y,small,result1,result2,counter;

    printf("Enter the first Number");
    scanf("%d",&x);
    printf("Enter the second Number");
    scanf("%d",&y);

    small=x;
    counter=0;

    if(small>y)
    {
        small=y;
    }

    while(counter==0)
    {
        result1=small%x;
        result2=small%y;

        if(result1==0 && result2==0)
        {
            counter=1;
        }

        else
        {
            small+=1;
        }
    }

    printf("LCM = %d",small);

    return 0;    
}