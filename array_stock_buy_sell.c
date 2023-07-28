#include<stdio.h>
int stock_buy_sell(int arr[],int n){
    int minsoFar=arr[0];
    int maxsoFar=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minsoFar) minsoFar=arr[i];
        if(arr[i]>maxsoFar) maxsoFar=arr[i];

    }
    return maxsoFar-minsoFar;

}
int main(){
    int arr[]={3,5,1,7,4,9,3};
    printf("%d",stock_buy_sell(arr,sizeof(arr)/sizeof(arr[0])));
}