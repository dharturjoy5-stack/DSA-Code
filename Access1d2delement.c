#include<stdio.h>
int main(){
    int arr1d[4]={10,20,30,40};
    int arrr2d[2][3]={{1,2,3},{4,5,6}};
    printf("Accessing element\n");
    printf("1D array element at index 2 = %d\n",arr1d[2]);
    printf("2D array element at index [1][2] = %d\n",arrr2d[1][2]);
    printf("\n All 1D array elements:\n");
    for(int i=0;i<4;i++){
        printf("Element at index %d = %d\n",i,arr1d[i]);
    }
    printf("\n All 2D array elements:\n");
    int row=0;
    while(row<2){
        int col=0;
        while(col<3){
            printf("Element at index [%d][%d] = %d\n",row,col,arrr2d[row][col]);
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
