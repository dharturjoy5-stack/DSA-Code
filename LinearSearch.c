#include<stdio.h>
int linearsearch(int arr[], int key, int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Found at position %d\n",i);
            return i;
        }
    }
    printf("Not found\n");
    return -1;
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int key=40;
    int result=linearsearch(arr,key,n);
    return 0;
}