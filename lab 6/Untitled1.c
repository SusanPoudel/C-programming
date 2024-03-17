#include <stdio.h>

int main() {
    // Initialize a variable with an integer
    int myInteger = 42;

    // Use a pointer to display the address of the variable
    int *ptr = &myInteger;
    printf("Address of the variable: %p\n", (void *)ptr);

    // Display the value in the variable using the pointer
    printf("Value in the variable: %d\n", *ptr);

    return 0;
}

