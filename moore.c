#include<stdio.h>
/*The problem is to find a number which is repeating itself more than n/2 times .*/
int majorityElement(int arr[],int n){
int ansIndex=0;
int count=1;
for(int i=0;i<n;i++){
    if(arr[i]==arr[ansIndex]) count++;
    else count--;
    if(!count) {ansIndex=i;
    count=1;
    }
}
return count;
}
int check(int arr[],int n){

    if(majorityElement(arr,n)>=n/2) return 1;
    return 0;
}
int main(){
    int arr[]={5,1,4,1,1};
    printf("%d",check(arr,sizeof(arr)/sizeof(arr[0])));
}