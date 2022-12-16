#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,c,delta,x1,x2;
    double deltaSqrt;

    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("Enter the value of c");
    scanf("%d",&c);

    delta=pow(b,2)-4*(a*c);

    if(delta>0)
    {
        printf("Equation has 2 real roots \n");

        deltaSqrt=sqrt(delta);

        x1=((-b)+deltaSqrt)/2*a;
        x2=((-b)-deltaSqrt)/2*a;

        printf("First root = %d\n",x1);
        printf("Second root = %d",x2);
    }
    else if(delta==0)
    {
        printf("Equation has 1 real roots x1=x2 \n");

        x1=(-b)/2*a;

        printf("x1= %d",x1);
    }

    else
    {
        printf("Equation has no real roots");
    }

    return 0;

}
