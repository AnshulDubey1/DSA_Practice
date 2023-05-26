#include<iostream>
using namespace std;
int k=1;
int main(){
    int i=1;
while(i<=4){
int j=k;
while(j<=k+2){
  cout<<j<<" ";
    j++;
}
k=j;
cout<<endl;
i++;
}
}