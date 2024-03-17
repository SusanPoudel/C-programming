#include <stdio.h>

// Function prototype
int sumOfDigits(int num);

int main() {
    int number;

    // Input: Get a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Input should be a positive integer.\n");
    } else {
        // Call the recursive function to find the sum of digits
        int sum = sumOfDigits(number);
        printf("Sum of digits in %d is %d\n", number, sum);
    }

    return 0;
}

// Recursive function to find the sum of digits in a number
int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num % 10 + sumOfDigits(num / 10);
    }
}

