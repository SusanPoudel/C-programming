#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value;     // Pointer to an integer
    int **ptr_to_ptr = &ptr;  // Pointer to a pointer to an integer

    // Display the value and address using double indirection
    printf("Value using double indirection: %d\n", **ptr_to_ptr);
    printf("Address using double indirection: %p\n", (void *)*ptr_to_ptr);

    return 0;
}

