#include <stdio.h>
int arr[50][50];
int brr[50][50];
int n;
int main()
{

    // take input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // print the equation matrix
    printf("The Equaction is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // rearrange
    for (int i = 0; i < n; i++)
    {
        double add = 0;
        double comp = arr[i][i];
        for (int m = 0; m < n; m++)
        {
            if (m != i)
            {
                add = add + arr[i][m];
            }
        }
        if (comp < add)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    double sum = 0;
                    for (int k = 0; k < n; k++)
                    {
                        if (k != j)
                        {
                            sum = sum + arr[i][k];
                        }
                    }
                    if (arr[i][j] >= sum)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            brr[i][j] = arr[i][j];
                        }   
                    }
                }
            }
        }
        else{
            for(int j = 0;j<n;j++){
                brr[i][j] = arr[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf ", brr[i][j]);
        }
        printf("\n");
    }
}
