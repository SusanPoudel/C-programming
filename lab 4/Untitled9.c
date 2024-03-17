#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], resultAddition[3][3], resultMultiplication[3][3];

    // Input for Matrix 1
    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i , j );
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for Matrix 2
    printf("\nEnter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix Addition
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultAddition[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMultiplication[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resultMultiplication[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display Matrices and Results
    printf("\nEntered matrices:\n");

    // Display Matrix 1
    printf("Matrix 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display Matrix 2
    printf("\nMatrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Display Matrix Addition
    printf("\nMatrix Addition:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultAddition[i][j]);
        }
        printf("\n");
    }

    // Display Matrix Multiplication
    printf("\nMatrix Multiplication:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultMultiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}


