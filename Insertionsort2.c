#include<stdio.h>
void insertionsort(int arr[], int size){
    for(int step=1;step<size;step++){
        int key = arr[step];
        int j= step-1;
    while(j>=0 && key<arr[j]){
        arr[j+1]=arr[j];
        --j;

    }
    arr[j+1]=key;
}
    
}
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr, size);
    printf("Sorted array in ascending order:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
