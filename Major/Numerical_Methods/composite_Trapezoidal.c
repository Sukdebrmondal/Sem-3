#include <stdio.h>
double function(double x)
{
    return 4 * x - 3 * x * x;
}

int main()
{
    double x, y, h;
    printf("Enter the Upper limit: ");
    scanf("%lf", &x);

    printf("Enter the Lower Limit: ");
    scanf("%lf", &y);

    int n;
    printf("Enter the intervals: ");
    scanf("%d", &n);

    h = (x - y) / n;

    double arr[n + 1][2];

    for (int i = 0; i <= n; i++)
    {
        arr[i][0] = y;
        arr[i][1] = function(y);
        y = y + h;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%lf %lf\n", arr[i][0], arr[i][1]);
    }
    double sum=0;
    for(int i=1;i<n;i++){
        sum+=arr[i][1];
    }
    double res= h/2*((arr[0][1]+arr[n][1])+ 2*(sum));
    printf(" The Result is: %lf",res);
    
}
