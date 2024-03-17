#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input: Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of integers.\n");
        return 1;  // Exit with an error code
    }

    // Dynamically allocate memory for an array of integers
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    // Input: Get the list of integers from the user
    printf("Enter the list of integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest and smallest elements
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display the list of integers
    printf("List of integers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display the largest and smallest elements
    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

