#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}

double vfact(double v, int n)
{
    if (n == 1)
        return v;
    else
    {
        return (v + (n - 1)) * vfact(v, (n - 1));
    }
}

int main()
{
    double arr[50][50];
    int i, j, n;
    /*Number of terms*/
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    /*user input*/
    printf("Enter the value of X and Y:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf", &arr[i][0], &arr[i][1]);
    }

    /*Print*/
    printf("Print the value of X and Y:\n");
    printf("\tX\tY\n");
    for (i = 0; i < n; i++)
    {
        printf("   %lf %lf", arr[i][0], arr[i][1]);
        printf("\n");
    }

    /*create difference table*/
    int g = 0;
    for (int j = 2; j < n + 1; j++)
    {
        for (i = (n - 1); i > g; i--)
        {
            arr[i][j] = arr[i][j - 1] - arr[i - 1][j - 1];
        }
        g++;
    }

    /*print the Difference table*/
    printf("The backword  Difference Table:\n ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf(" %.2lf ", arr[i][j]);
        }

        printf("\n");
    }

    double x, v, h, x_n, backin;

    // find H
    h = abs(arr[1][0] - arr[0][0]);
    // find x_n
    x_n = arr[n - 1][0];

    while (true)
    {
        /* code */

        printf("\nEnter the value of X: ");
        scanf("%lf", &x);

        v = (x - x_n) / h;

        double res = arr[n - 1][1];

        for (int j = 1; j < n; j++)
        {
            backin = (vfact(v, j) * arr[n - 1][j + 1] / fact(j));
            res = res + backin;
        }
        printf("The backword interpolation is: %lf \n", res);
    }
}