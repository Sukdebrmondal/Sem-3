#include <stdio.h>
#include <math.h>

double f(double x)
{
    double func = pow(x,3) + (2*x) - 2;
    return func;
}

int main()
{
    double x, y, xn, xn_1;
    printf("Enter the lowerlimit: ");
    scanf("%lf",&x);

    printf("Enter the upperlimit: ");
    scanf("%lf",&y);

    if ((f(x) * f(y)) < 0)
    {
        xn = (x * f(y) - y * f(x)) / (f(y) - f(x));

        if (f(xn) * f(x) > 0)
        {
            x = xn;
        }
        else
        {
            y = xn;
        }

        xn_1 = (x * f(y) - y * f(x)) / (f(y) - f(x));
        

        while ((fabs(xn_1 - xn)) > 0.00005)
        {
            xn = xn_1;
            if (f(xn) * f(x) > 0)
            {
                x = xn;
            }
            else
            {
                y = xn;
            }

            xn_1 = (x * f(y) - y * f(x)) / (f(y) - f(x));

        }
        printf("The root is:%lf", xn_1);
    }
}