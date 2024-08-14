#include <stdio.h>
int main()
{
    double arr[50][50];

    // terms
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    // input the table
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &arr[i][0], &arr[i][1]);
    }
    // output the table
    for (int i = 0; i < n; i++)
    {
        printf("%lf %lf\n", arr[i][0], arr[i][1]);
    }

    while (1)
    {
        double x;
        printf("Enter the value of X: ");
        scanf("%lf", &x);

        // find x-x_n
        for (int i = 0; i < n; i++)
        {
            arr[i][2] = x - arr[i][0];
        }

        // find w'(x_n)
        for (int i = 0; i < n; i++)
        {
            double product = 1;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    product *= arr[i][0] - arr[j][0];
                }
            }
            arr[i][3] = product;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%lf ", arr[i][j]);
            }
            printf("\n");
        }

        // find D_r
        double D_r;
        for (int i = 0; i < n; i++)
        {
            D_r = arr[i][2] * arr[i][3];
            arr[i][4] = D_r;
        }

        // // find y_r;
        // double Y_r;
        // for(int i=0;i<n;i++){
        //     Y_r= arr[i][1];
        //     arr
        // }

        // find Y_r/D_r

        for (int i = 0; i < n; i++)
        {
            arr[i][5] = (arr[i][1] / arr[i][4]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf("%lf ", arr[i][j]);
            }
            printf("\n");
        }

        double multiple = 1;
        for (int i = 0; i < n; i++)
        {
            multiple *= arr[i][2];
        }

        double addition = 0;
        for (int i = 0; i < n; i++)
        {
            addition += arr[i][5];
        }

        double res = multiple * addition;
        printf("The Result is:%lf\n", res);
    }
}