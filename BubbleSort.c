#include<stdio.h>
void display(int arr[],int size){
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
}
void bubblesort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int swap=0;
        for(int i=0;i<size-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swap++;
            }
        }
        printf("Internal sorting step %d: ",step+1);
        display(arr,size);
        printf("\n");
        if(swap==0){
            break;

        }
    }
}
int main(){
int arr[]={6,4,7,8,1,9,5};
int size=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,size);
printf("Sorted array in ascending order:\n");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
return 0;
}    