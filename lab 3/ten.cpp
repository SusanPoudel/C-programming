//C program to enter a number and calculate its factorial.

#include <stdio.h>
#include <limits.h>
int main() {
    int number;
    int factorial = 1;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for non-negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Indicate an error
    }

    // Calculate factorial using a loop
    for (int i = 1; i <= number; ++i) {
        // Check for overflow before multiplying
        if (factorial > INT_MAX / i) {
            printf("Factorial result exceeds the limit for int data type.\n");
            return 1; // Indicate an error
        }

        factorial *= i;
    }

    // Display the result
    printf("Factorial of %d is: %d\n", number, factorial);

    return 0;
}

//OUTPUT
//------------
//Enter a number: 10
//Factorial of 10 is: 3628800
//
//--------------------------------

