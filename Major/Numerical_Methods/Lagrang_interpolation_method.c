#include <stdio.h>

int main() {
    double arr[50][50];

    // Terms
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    // Input the table
    printf("Enter the x and y values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &arr[i][0], &arr[i][1]); // x and y values
    }

    // Output the table
    printf("\nInput Table:\n");
    for (int i = 0; i < n; i++) {
        printf("%lf %lf\n", arr[i][0], arr[i][1]);
    }

    while (1) {
        double x;
        printf("\nEnter the value of X: ");
        scanf("%lf", &x);


        // Calculate x - x_n
        for (int i = 0; i < n; i++) {
            arr[i][2] = x - arr[i][0];  // Store x - x_n in column 2
        }

        // Calculate w'(x_n)
        for (int i = 0; i < n; i++) {
            double product = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    product *= arr[i][0] - arr[j][0]; // Product of (x_n - x_j)
                }
            }
            arr[i][3] = product;  // Store w'(x_n) in column 3
        }

        // Calculate D_r
        for (int i = 0; i < n; i++) {
            arr[i][4] = arr[i][2] * arr[i][3];  // D_r = (x - x_n) * w'(x_n)
        }
        // calculate yr
        for(int i=0;i<n;i++){
            arr[i][5]=arr[i][1];
        }


        // Calculate Y_r / D_r
        for (int i = 0; i < n; i++) {
            arr[i][6] = arr[i][1] / arr[i][4];  // y_n / D_r
        }

        // Print the updated table with all calculations
        printf("\nUpdated Table with Calculations:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 7; j++) {
                printf("%lf  ", arr[i][j]);
            }
            printf("\n");
        }



        // Calculate the result
        double multiple = 1;
        for (int i = 0; i < n; i++) {
            multiple *= arr[i][2];  // Product of all (x - x_n)
        }

        double addition = 0;
        for (int i = 0; i < n; i++) {
            addition += arr[i][6];  // Sum of Y_r / D_r
        }

        double result = multiple * addition;
        printf("\nThe Lagrange interpolated result at x = %lf is: %lf\n", x, result);
    }

    return 0;
}
