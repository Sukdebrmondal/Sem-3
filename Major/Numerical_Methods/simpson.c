#include <stdio.h>
#include<math.h>
double function(double x)
{
    return sin(x*x)-4*cos(x*x);
}
int main()
{
    double x, y, h,res;

    printf("Enter the upper limit: ");
    scanf("%lf", &y);

    printf("Enter the Lower limit: ");
    scanf("%lf", &x);

    int n;
    printf("Enter the Invertals: ");
    scanf("%d", &n);

    h = (y - x) / n;

    double arr[n + 1][2];
    
    for (int i = 0; i <= n; i++)
    {
        arr[i][0] = x;
        arr[i][1] = function(x);
        x = x + h;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%lf %lf\n", arr[i][0], arr[i][1]);
    }
    double even_num=0,odd_num=0;
    for(int i=1;i<n;i++){
        if(i%2==0){
            even_num+=arr[i][1];
        }
        else{
            odd_num+=arr[i][1];
        }
    }

    res= h/3*((arr[0][1]+arr[n][1])+(4*(odd_num))+(2*(even_num)));
    printf("The Result is:%lf ",res);
}