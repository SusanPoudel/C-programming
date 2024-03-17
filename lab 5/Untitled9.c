#include <stdio.h>

// Function prototype
void displayFibonacci(int n);

int main() {
    int terms;

    // Input: Get the number of terms from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Number of terms should be greater than zero.\n");
    } else {
        // Call the recursive function to display the Fibonacci series
        printf("Fibonacci series up to %d terms:\n", terms);
        displayFibonacci(terms);
    }

    return 0;
}

// Recursive function to display Fibonacci series
void displayFibonacci(int n) {
    static int first = 0, second = 1, next;

    if (n > 0) {
        next = first + second;
        printf("%d, ", first);
        first = second;
        second = next;

        // Recursive call for the next term
        displayFibonacci(n - 1);
    }
}

