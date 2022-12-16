#include <stdio.h>
#include <math.h>

int main ()
{
    int x,y,area,perimeter;

    printf("Enter the first lenght");
    scanf("%d",&x);
    printf("Enter the second lenght");
    scanf("%d",&y);

    area=(x*y);
    perimeter=(x+y)*2;

    printf("AREA: %d\n",area);
    printf("PERIMETER: %d",perimeter);

    return 0;
}