#include <stdio.h>
#include <math.h>
double function(double x)
{
    return 4 * x - 3 * x * x;
}
int main()
{
    double a, b, h, res;
    // define upper limit
    
    printf("Enter the upper limit: ");
    scanf("%lf", &b);
    // define Lower limit
    printf("Enter the Lower limit: ");
    scanf("%lf", &a);
    // difference betweem upper limit and Lower limit
    h = (b - a);
    res = (h / 2) * (function(a) + function(b));
    printf("The result is: %lf", res);
}