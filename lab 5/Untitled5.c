#include <stdio.h>

// Function to display numbers and their sum
void displayAndSum(int numbers[], int size) {
    int sum = 0;

    // Display numbers
    printf("Entered numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
        sum += numbers[i];
    }

    // Display sum
    printf("\nSum of the numbers: %d\n", sum);
}

int main() {
    // Declare an array to store five numbers
    int numbers[5];

    // Input: Get five numbers from the user
    printf("Enter any five numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Call the function to display numbers and their sum
    displayAndSum(numbers, 5);

    return 0;
}

