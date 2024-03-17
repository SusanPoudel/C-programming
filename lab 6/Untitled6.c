#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3];  // Pointer to a row of 3 elements

    printf("Matrix elements and their addresses:\n");

    // Use a pointer to iterate through the matrix
    for (ptr = matrix; ptr < matrix + 2; ptr++) {
        for (int *elem = *ptr; elem < *ptr + 3; elem++) {
            printf("Value: %d\tAddress: %p\n", *elem, (void*)elem);
        }
    }

    // Display the address of the element at index [1][1]
    printf("\nAddress of element at index [1][1]: %p\n", (void*)&matrix[1][1]);

    return 0;
}

