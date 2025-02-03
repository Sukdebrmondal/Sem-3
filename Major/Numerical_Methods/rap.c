#include <stdio.h>
#include <math.h>

double fx(double x)
{
    return pow(x,4) - x - 10;
}

double f_x(double x)
{
    return (4 * pow(x,3)) - 1;
}

double arr[100][6];

int main()
{
    double x, y, xn, xn_1;
    printf("Enter the lower limit: ");
    scanf("%lf", &x);

    printf("Enter the upper limit: ");
    scanf("%lf", &y);

    if (fabs(fx(x)) > (fabs(fx(y))))
    {
        xn = y;
    }
    else
    {
        xn = x;
    }

    int r = 0;

    xn_1 = xn - (fx(xn) / f_x(xn));

    while ((fabs(xn_1 - xn)) > 0.00005)
    {
        arr[r][0] = xn;
        arr[r][1] = fx(arr[r][0]);
        arr[r][2] = f_x(arr[r][0]);
        arr[r][3] = -(arr[r][1] / arr[r][2]); // h
        arr[r][4] = arr[r][0] + arr[r][3];

        xn = xn_1;
        xn_1 = xn - (fx(xn) / f_x(xn));
        r++;
    }
    printf("   xn       f(xn)     f'(xn)    h    f(xn+1)\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }

    printf("The root is:%lf", xn_1);
}