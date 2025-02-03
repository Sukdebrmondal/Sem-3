// tropizoidal
// #include <stdio.h>
// #include <math.h>

// double function(double x)
// {
//     double f = 4 * x - 3 * x * x;
//     return f;
// }

// int main()
// {
//     double b, a;
//     int n;

//     printf("Enter the Upperlimit: ");
//     scanf("%lf", &b);

//     printf("Enter the lowerlimit: ");
//     scanf("%lf", &a);

//     printf("Enter the intrevals: ");
//     scanf("%d", &n);

//     double h = (b - a) / n;
//     printf("%lf\n",h);
//     double arr[n + 1][2];
//     double current_value=a;
//     for (int i = 0; i <= n; i++)
//     {
//         arr[i][0] = current_value;
//         arr[i][1] = function(current_value);
//         current_value = current_value+ h;
//     }

//     for (int i = 0; i <= n; i++)
//     {
//         printf("%lf %lf\n", arr[i][0], arr[i][1]);
//     }
//     double sum=0;
//     for(int i=1;i<n;i++){
//         sum+=arr[i][1];
//     }
//     double res = h/2 * ((arr[0][1]+arr[n][1])+2*(sum));
//     printf("The Result is:%.8lf ",res);
// }

// simpsons 1/3
// #include<stdio.h>
// #include<math.h>

// double function(double x){
//     return 4 * x - 3 * x * x;
// }

// int main(){

//     double x,y;
//     printf("Entre the lower limit: ");
//     scanf("%lf",&x);

//     printf("Entre the upper limit: ");
//     scanf("%lf",&y);

//     int n;
//     printf("Entre the no of intrevals: ");
//     scanf("%d",&n);

//     double h = (y-x)/n;
//     printf("%lf\n",h);

//     double arr[n+1][2];

//     double current_value=x;

//     for(int i=0;i<=n;i++){
//         arr[i][0]=current_value;
//         arr[i][1]=function(current_value);
//         current_value = current_value+h;

//     }

//     printf("The Table is :\n");
//     for(int i=0;i<=n;i++){
//         printf("%lf %lf\n", arr[i][0],arr[i][1]);
//     }

//     double even_sum=0,odd_sum=0;

//     for(int i=1;i<n;i++){
//         if(i%2==0){
//             even_sum+=arr[i][1];
//         }
//         else{
//             odd_sum+=arr[i][1];
//         }
//     }

//     double res = h/3*(arr[0][1]+arr[n][1] + 4*(odd_sum) + 2*(even_sum));
//     printf("The result is: %lf",res);

// }

// lagrange

#include <stdio.h>

int main()
{
    double arr[50][50];

    // enter the terms
    int n;
    printf("Enter the terrms: ");
    scanf("%d", &n);

    // given the value of x and y
    printf("Enter the value of x and y:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &arr[i][0], &arr[i][1]);
    }

    // print the values
    printf("The value of x and y:\n");
    printf("  x\t   y\n");
    for (int i = 0; i < n; i++)
    {
        printf("%lf %lf \n", arr[i][0], arr[i][1]);
    }

    while (1)
    {
        double x;
        printf("\nEnter the value which you find: ");
        scanf("%lf", &x);

        // find x-xn
        for (int i = 0; i < n; i++)
        {
            arr[i][2] = x - arr[i][0];
        }

        // find w'(xn)
        for (int i = 0; i < n; i++)
        {
            int product = 1;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    product *= arr[i][0] - arr[j][0];
                }
            }
            arr[i][3] = product;
        }

        // find Dr=w'(xn)*(x-xn)
        for (int i = 0; i < n; i++)
        {
            arr[i][4] = arr[i][2] * arr[i][3];
        }

        // find yr
        for (int i = 0; i < n; i++)
        {
            arr[i][5] = arr[i][1];
        }
        // find Yr/Dr
        for (int i = 0; i < n; i++)
        {
            arr[i][6] = arr[i][5] / arr[i][4];
        }

        printf("updated table:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                printf("%lf ", arr[i][j]);
            }
            printf("\n");
        }

        // calculate result
        double multiple =1;
        for(int i=0;i<n;i++){
            multiple*=arr[i][2];
        }

        double addition =0;
        for(int i=0;i<n;i++){
            addition+=arr[i][6];
        }
        double res = multiple * addition;
        printf("\nThe Lagrange intrepolation result at x=%lf is : %lf",x,res);
    }
}

    // #include <stdio.h>
    // #include <math.h>

    // double function(double x) {
    //     double f = 4 * x - 3 * x * x;
    //     return f;
    // }

    // int main() {
    //     double b, a;
    //     int n;

    //     printf("Enter the Upperlimit: ");
    //     scanf("%lf", &b);

    //     printf("Enter the lowerlimit: ");
    //     scanf("%lf", &a);

    //     printf("Enter the intervals: ");
    //     scanf("%d", &n); // Use %d for integer input

    //     double h = (b - a) / n;
    //     printf("%lf\n", h);

    //     double arr[n + 1][2];
    //     double current_value = a; // Add a semicolon here

    //     for (int i = 0; i <= n; i++) {
    //         arr[i][0] = current_value;
    //         arr[i][1] = function(current_value);
    //         current_value += h;
    //     }

    //     for (int i = 0; i <= n; i++) {
    //         printf("%lf %lf\n", arr[i][0], arr[i][1]);
    //     }

    //     return 0; // Standard practice to include this
    // }
