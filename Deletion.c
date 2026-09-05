#include<stdio.h>
int deletion(int arr[],int n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
  //return n-1;
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int pos=2;
    int result=deletion(arr,n,pos);
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}