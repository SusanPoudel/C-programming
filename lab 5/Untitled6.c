#include <stdio.h>

// Function to display the matrix and its sum
void displayAndSum(int matrix[2][3]) {
    int sum = 0;

    // Display matrix
    printf("Entered matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    // Display sum
    printf("Sum of the matrix elements: %d\n", sum);
}

int main() {
    // Declare a 2x3 matrix
    int matrix[2][3];

    // Input: Get elements for the matrix from the user
    printf("Enter elements for a 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the function to display the matrix and its sum
    displayAndSum(matrix);

    return 0;
}

