#include <stdio.h>

// Function to calculate the factorial of a number
long long calculateFactorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

int main() {
    int number;

    // Input: Get a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the entered number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the function to calculate the factorial
        long long factorial = calculateFactorial(number);
        printf("Factorial of %d is %lld\n", number, factorial);
    }

    return 0;
}

