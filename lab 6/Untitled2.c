#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;

    // Input: Get a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Input should be a positive integer.\n");
    } else {
        // Calculate factorial using a pointer
        long long *ptrFactorial = &factorial;

        for (int i = 1; i <= number; i++) {
            *ptrFactorial *= i;
        }

        // Display the result
        printf("Factorial of %d is %lld\n", number, factorial);
    }

    return 0;
}

