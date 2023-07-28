#include<stdio.h>
int stocks(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) profit+=(arr[i]-arr[i-1]);
    }
    return profit;
}
int main(){
int arr[]={5,2,7,3,6,1,2,4};
printf("%d",stocks(arr,sizeof(arr)/sizeof(arr[0])));
}