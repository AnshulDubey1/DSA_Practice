#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr=arr;
    printf("%d\t",ptr);
    printf("%d\t",*ptr);
    printf("%d\t",&ptr);
}