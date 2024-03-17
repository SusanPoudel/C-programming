#include <stdio.h>

// Function to check if a number is odd or even
void checkOddEven(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}

int main() {
    int number;

    // Input: Get a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to check if the number is odd or even
    checkOddEven(number);

    return 0;
}

