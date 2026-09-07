#include<stdio.h>
int linearsearch(int *p, int n, int key){
    for(int i=0;i<n;i++){
        if(*(p+i)==key){
           return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,15,20,25,30,35};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key , result;
    printf("Enter the key to search: ");
    scanf("%d",&key);
    result=linearsearch(arr,n,key);
    if(result==-1){
        printf("Not found\n");
    }
    else{
        printf("Found at position %d\n", result);
    }
    return 0;
}