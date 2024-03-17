#include <stdio.h>

// Function prototype
void calculateSum(int *numbers, int size, int *result);

int main() {
    int numbers[5];
    int sum;

    // Input: Get five numbers from the user
    printf("Enter any five numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Call the function to calculate the sum using pointers
    calculateSum(numbers, 5, &sum);

    // Display the result
    printf("Sum of all elements: %d\n", sum);

    return 0;
}

// Function definition to calculate the sum using pointers
void calculateSum(int *numbers, int size, int *result) {
    *result = 0;

    for (int i = 0; i < size; i++) {
        *result += numbers[i];
    }
}

