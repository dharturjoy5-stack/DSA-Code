#include <stdio.h>

int main() {
    int num;

    // Ask the user for an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the remainder is 0 when divided by 2
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}