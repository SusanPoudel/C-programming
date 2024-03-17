#include <stdio.h>

int main() {
    int numbers[5];
    int *ptr;

    // Input: Get five numbers from the user
    printf("Enter any five numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Use a pointer to access the value stored in the fourth address
    ptr = &numbers[3];

    // Display the value and address
    printf("Value stored in the fourth address: %d\n", *ptr);
    printf("Address of the fourth element: %p\n", (void*)ptr);

    return 0;
}

