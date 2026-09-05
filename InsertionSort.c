#include<stdio.h>
int insertion (int arr[],int n, int value, int pos){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
    
}
int main(){
    int arr[6]={10,20,40,50};
    int n=4;
    int pos=2;
    int value=30;
    int result=insertion(arr,n,value,pos);
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
