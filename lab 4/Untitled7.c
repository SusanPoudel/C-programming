#include <stdio.h>

int main() {
    // Declare a 2x3 matrix
    int matrix[2][3];

    // Input: Get elements for the 2x3 matrix and calculate sum of even elements
    int sumEven = 0;
    printf("Enter elements for a 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);

            // Display the entered element
            printf("Element at index (%d, %d): %d\n", i, j, matrix[i][j]);

            // Calculate sum of even elements
            if (matrix[i][j] % 2 == 0) {
                sumEven += matrix[i][j];
            }
        }
    }

    // Display the sum of even elements
    printf("\nSum of even elements: %d\n", sumEven);

    return 0;
}

