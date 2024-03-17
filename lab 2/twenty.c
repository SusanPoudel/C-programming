//C program to enter an number and observe the result with prefix and postfix increment.

#include <stdio.h>

int main() {
    int num;

    // take input from user 
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using prefix increment
    printf("Using prefix increment:\n");
    printf("Original value: %d\n", num);
    printf("After prefix increment: %d\n", ++num);  // Increment before using the value
    printf("Value after increment: %d\n", num);      // Display the updated value

    // Reset the value for the next example
    num = 5;

    // Using postfix increment
    printf("\nUsing postfix increment:\n");
    printf("Original value: %d\n", num);
    printf("After postfix increment: %d\n", num++);  // Increment after using the value
    printf("Value after increment: %d\n", num);      // Display the updated value

    return 0;
}

//OUTPUT
//--------
//Enter a number: 8
//Using prefix increment:
//Original value: 8
//After prefix increment: 9
//Value after increment: 9
//
//Using postfix increment:
//Original value: 5
//After postfix increment: 5
//Value after increment: 6
//
//--------------------------------

