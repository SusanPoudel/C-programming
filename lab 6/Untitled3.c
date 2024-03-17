#include <stdio.h>

// Function prototype with pointers as parameters for returning multiple values
void calculateValues(int a, int b, int *sum, int *product, int *difference) {
    // Directly initialize pointer values in the declaration section
    *sum = a + b;
    *product = a * b;
    *difference = a - b;
}

int main() {
    int num1, num2, sum, product, difference;

    // Input: Get two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to calculate values and store results in variables
    calculateValues(num1, num2, &sum, &product, &difference);

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);

    return 0;
}

