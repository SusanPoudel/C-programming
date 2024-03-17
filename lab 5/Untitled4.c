#include <stdio.h>

// Global variables
int globalVar1 = 10;
int globalVar2 = 5;

// Function to add two numbers (using global variables)
int add() {
    return globalVar1 + globalVar2;
}

// Function to subtract two numbers (using local variables)
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to multiply two numbers (using local variables)
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to divide two numbers (using local variables)
float divide(int num1, int num2) {
    if (num2 != 0) {
        return (float)num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    // Local variables
    int num1, num2;

    // Input: Get two numbers from the user
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Call the functions to perform operations
    int resultAdd = add();
    int resultSubtract = subtract(num1, num2);
    int resultMultiply = multiply(num1, num2);
    float resultDivide = divide(num1, num2);

    // Display the results
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", globalVar1, globalVar2, resultAdd);
    printf("Subtraction: %d - %d = %d\n", num1, num2, resultSubtract);
    printf("Multiplication: %d * %d = %d\n", num1, num2, resultMultiply);
    printf("Division: %d / %d = %f\n", num1, num2, resultDivide);

    return 0;
}

