#include <stdio.h>
#include <math.h>

int main ()
{
    int x;

    for(x=100;x<=200;x++)
    {
        if(x%9==0)
        {
            printf("%d\n",x);
        }
    }

    return 0;
}