#include <stdio.h>

int main() {
    int numbers[5];

    // Input: Get five integers from the user
    printf("Enter five integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Assume the first number is both the largest and the smallest initially
    int largest = numbers[0];
    int smallest = numbers[0];

    // Find the largest and smallest numbers
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Calculate the difference between the largest and smallest integers
    int difference = largest - smallest;

    // Display results
    printf("\nLargest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Difference between largest and smallest: %d\n", difference);

    return 0;
}

