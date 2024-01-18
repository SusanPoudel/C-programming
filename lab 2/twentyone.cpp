//C program to enter an number and observe the result with prefix and postfix decrement.

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using prefix decrement
    printf("Using prefix decrement:\n");
    printf("Original value: %d\n", num);
    printf("After prefix decrement: %d\n", --num);  // Decrement before using the value
    printf("Value after decrement: %d\n", num);      // Display the updated value

    // Reset the value for the next example
    num = 5;

    // Using postfix decrement
    printf("\nUsing postfix decrement:\n");
    printf("Original value: %d\n", num);
    printf("After postfix decrement: %d\n", num--);  // Decrement after using the value
    printf("Value after decrement: %d\n", num);      // Display the updated value

    return 0;
}

//OUTPUT
//--------
//Enter a number: 7
//Using prefix decrement:
//Original value: 7
//After prefix decrement: 6
//Value after decrement: 6
//
//Using postfix decrement:
//Original value: 5
//After postfix decrement: 5
//Value after decrement: 4
//
//--------------------------------

