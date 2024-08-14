// #include<stdio.h>
// int main(){
//     int sum=0;
//     int arr[] = {{1,2,3,4,5,6,7};
//     for(int i=0;i<=6;i++){
//         if(i<1 || i>5)
//         sum+=arr[i];
//     }
//     printf("%d",sum);
    
// }



#include<stdio.h>
int main(){
    
    int brr[2][7] = {
        {1,2,3,4,5,6,7},
        {8,9,10,11,12,13,14}
        };
    int sum=0;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=6;j++){
            if((i==0 && j>3) ||  (i==1 && j<3)){
                sum=sum+brr[i][j];
            }
            
        }
        
    }
    printf("%d",sum);
    
    
}