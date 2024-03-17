#include <stdio.h>

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Input: Get elements for the 3x3 matrix
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nEntered matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the diagonal matrix and calculate the sum of diagonal elements
    int sumDiagonal = 0;
    printf("\nDiagonal matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
                sumDiagonal += matrix[i][j];
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("Sum of diagonal elements: %d\n", sumDiagonal);

    // Display the upper triangular matrix
    printf("\nUpper triangular matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // Display the lower triangular matrix
    printf("\nLower triangular matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= j) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // Display the transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    // Display the sum of each row elements in a separate column
    printf("\nSum of each row elements in a separate column:\n");
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
            printf("%d ", matrix[i][j]);
        }
        printf("| %d\n", rowSum);
    }

    // Display the sum of each column elements in a separate row
    printf("\nSum of each column elements in a separate row:\n");
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        printf("%d ", colSum);
    }
    printf("\n");

    return 0;
}

