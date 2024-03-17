#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr = &matrix[0][0];  // Pointer to the first element of the matrix
    int sum = 0;

    // Calculate the sum of matrix elements using pointer-2D array relationship
    for (int i = 0; i < 2 * 3; i++) {
        sum += *(ptr + i);
    }

    // Display the matrix elements
    printf("Matrix elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the sum of matrix elements
    printf("\nSum of matrix elements: %d\n", sum);

    return 0;
}

