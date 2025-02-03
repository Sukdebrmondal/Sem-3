#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double function(double x){
    double f = pow(10,x) + sin(x) + 2*x ;
    return f;
}

int main(){
    double x,y;
    printf("Enter the lower limit: ");
    scanf("%lf",&x);

    printf("Enter the upper limit: ");
    scanf("%lf",&y);

    if(function(x) * function(y) >0){
        printf("do not exits");
        exit(1);
    }
    else if(function(x) * function(y) == 0){
        if(function(x)==0){
            printf("%lf",x);
            exit(1);
        }
        else{
            printf("%lf",y);
            exit(1);
        }
    }
    double arr[100][6];
    int r=0;
    while(fabs(x-y) > 0.0001){
        arr[r][0] = x;

        arr[r][1] = y;

        arr[r][2] = function(arr[r][0]);

        arr[r][3] = function(arr[r][1]);

        arr[r][4] = (arr[r][0] +arr[r][1])/2 ;

        arr[r][5] = function(arr[r][4]);

        if(arr[r][2] * arr[r][5] >0 ){
            x = arr[r][4];
        }
        else if(arr[r][5] * arr[r][3] >0 ){
            y = arr[r][4];
        }
        
        r++;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<6;j++){
            printf("%lf ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The root is: %lf",arr[r-1][4]);

}