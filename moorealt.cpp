#include<unordered_map>
#include<iostream>
using namespace std;
bool check(int arr[],int n){
    unordered_map<int,int>x;
    for(int i=0;i<n;i++){
        x[arr[i]]++;
    }
    for(auto itr=x.begin();itr!=x.end();itr++){
        if(itr->second>=n/2) return true;
    }
    return false;
}
int main(){
    int arr[]={5,1,4,1,1};
    cout<<check(arr,sizeof(arr)/sizeof(arr[0]));
}