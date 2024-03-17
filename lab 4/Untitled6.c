#include <stdio.h>

int main() {
    // Initialize a 2-D array for a 2x2 matrix at compile time
    int matrix[2][2] = {{1, 2},
                        {3, 4}};

    // Display each element with its array index without using a loop
    printf("Element at index (0, 0): %d\n", matrix[0][0]);
    printf("Element at index (0, 1): %d\n", matrix[0][1]);
    printf("Element at index (1, 0): %d\n", matrix[1][0]);
    printf("Element at index (1, 1): %d\n", matrix[1][1]);

    return 0;
}

