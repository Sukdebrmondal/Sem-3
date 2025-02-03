#include <stdio.h>
#include <math.h>

double func(double x)
{
    double f = pow(x,3) - 8*x  - 4;
    return f;
}

int main()
{
    float x, y, xn, xn_1;
    printf("Enter the lowerlimit: ");
    scanf("%lf",&x);

    printf("Enter the upperlimit: ");
    scanf("%lf",&y);

    printf("%lf \n",func(x));
    printf("%lf \n",func(y));
}