#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *p=arr;
    printf("Value at index 3=%d\n",*(arr+3));
    return 0;
}