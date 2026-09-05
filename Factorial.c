#include<stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main(){
    int a;
    printf("Enter a positive integer:");
    scanf("%d",&a);
    if(a<0)
        printf("Factorial of negative number doesn't exist.");
    else
        printf("Factorial of %d = %d\n",a,factorial(a));
    return 0;
}