#include <stdio.h>

int main() {
    int m, n, p;

    // Input: Get dimensions for the first matrix (mxn)
    printf("Enter the dimensions of the first matrix (mxn):\n");
    scanf("%d %d", &m, &n);

    // Input: Get dimensions for the second matrix (nxp)
    printf("Enter the dimensions of the second matrix (nxp):\n");
    scanf("%d", &p);

    if (n != p) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 0;
    }

    // Declare matrices
    int matrix1[m][n], matrix2[n][p], result[m][p];

    // Input: Get elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input: Get elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform Matrix Multiplication and Display Result
    printf("\nMatrix Multiplication Result:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;

            // Perform Matrix Multiplication
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }

            // Display the result
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

