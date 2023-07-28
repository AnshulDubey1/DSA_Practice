#include<stdio.h>
int sum_subarray(int arr[],int n){
    int sum=-9839489;
   int  max_sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(max_sum<sum) max_sum=sum;
        if(sum<0) sum=0;

    }
    return max_sum;
}
int main(){
    int arr[]={-5,4,6,-3,4,-1};
    printf("%d",sum_subarray(arr,sizeof(arr)/sizeof(arr[0])));
}