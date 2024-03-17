#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input: Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students.\n");
        return 1;  // Exit with an error code
    }

    // Dynamically allocate memory for an array of ages
    int *ages = (int *)malloc(n * sizeof(int));

    if (ages == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    // Input: Get the age of each student from the user
    printf("Enter the age of each student:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }

    // Calculate the average age using pointers
    int *ptr = ages;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    // Display the entered ages
    printf("Entered ages: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ages[i]);
    }

    // Display the average age
    printf("\nAverage age: %.2f\n", (float)sum / n);

    // Free the dynamically allocated memory
    free(ages);

    return 0;
}

