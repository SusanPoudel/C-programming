#include <stdio.h>

// Function prototypes
void incrementByValue(int num);
void incrementByReference(int *num);

int main() {
    int number = 5;

    // Call by value
    printf("Before call by value - Value: %d\n", number);
    incrementByValue(number);
    printf("After call by value - Value: %d\n\n", number);

    // Call by reference
    printf("Before call by reference - Value: %d\n", number);
    incrementByReference(&number);
    printf("After call by reference - Value: %d\n", number);

    return 0;
}

// Function definition for call by value
void incrementByValue(int num) {
    num = num + 1;
    printf("Inside call by value - Value: %d\n", num);
}

// Function definition for call by reference
void incrementByReference(int *num) {
    (*num) = (*num) + 1;
    printf("Inside call by reference - Value: %d\n", *num);
}

