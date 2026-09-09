#include<stdio.h>
int main(){
    int r,c;
    printf("Enter maximum no. of rows and column:");
    scanf("%d%d",&r,&c);
    int ba;
    printf("Enter base address:");
    scanf("%d",&ba);
    int lr,lc;
    printf("Enter low row and column index:");
    scanf("%d%d",&lr,&lc);
    int w=4;
    int tr,tc;
    printf("Enter target row and column:");
    scanf("%d%d",&tr,&tc);
    printf("Row major formula:\n");{
    int a=ba+w*((tr-lr)*c+(tc-lc));{
        printf("Address of the element of a[%d][%d]=%d\n",tr,tc,a);
    }
    printf("Column major formula:\n");{
        int b=ba+w*((tc-lc)*r+(tr-lr));{
            printf("Address of the element of a[%d][%d]=%d",tr,tc,b);
        }
    }
}
    return 0;
}