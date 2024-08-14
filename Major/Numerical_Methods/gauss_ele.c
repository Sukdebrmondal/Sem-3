#include <stdio.h>
int arr[50][50];
int store[50][50];
int n;
int main()
{
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the equaction-1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Equaction is:\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int m1,m2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            m1=-(arr[i+1][j]/arr[i][j]);
            
        }
    }
   

    return 0;
}