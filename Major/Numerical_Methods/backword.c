#include <stdio.h>
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
    for (int j = 2; j < n+1; j++)
    {
    
        for(i=(n-1);i>g;i--){
            arr[i][j]=arr[i][j-1]-arr[i-1][j-1];
        }
        g++;
    }

    /*print the Difference table*/
    printf("The backword  Difference Table:\n ");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=n; j++)
        {
            printf(" %lf ", arr[i][j]);
        }
        
        printf("\n");
    }
}
  