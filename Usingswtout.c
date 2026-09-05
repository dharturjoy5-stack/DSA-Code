#include<stdio.h>
int main(){
    int ch;
    printf("Data structure classifier\n");
    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Tree\n");
    printf("4. Graph\n");
    printf("Select a data structure (1-4): ");
    scanf("%d", &ch);
    printf("\n Classification:\n");
    switch(ch){
        case 1:
        printf("\n Type: Array\n");
        printf("Result= Non-premitive, Linear and Static\n");
        break;
        case 2:
        printf("\n Type: Linked List\n");
        printf("Result= Non-premitive, Linear and Dynamic\n");
        break;
        case 3:
        printf("\n Type: Tree\n");
        printf("Result= Non-premitive, Non-linear \n");
        break;
        case 4:
        printf("\n Type: Graph\n");
        printf("Result= Non-premitive, Non-linear \n");
        break;
        default:
        printf("\n Invalid choice\n");
    }
    return 0;

}