#include <stdio.h>
#include <math.h>

int main ()
{
    int row,a,i,space,collection;

    printf("Enter the count of rows");
    scanf("%d",&row);

    collection=1;

    for(i=0 ; i<row ; i++)
    {
        for(space=1 ; space<=row-i ; space++)
        {
            printf("  ");
        }
        for(a=0 ; a<=i ; a++)
        {
            if(a==0 || i==0)
            {
                collection=1;
            }
            else
            {
                collection=collection*(i-a+1)/a;
            }
            printf("%4d",collection);
        }
        printf("\n");
    }

    return 0;
}