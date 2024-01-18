//C program to enter a number and find the remainder when divided by 2, and when divided by 10.

#include <stdio.h>

int main() {
    int number;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find and display the remainder when divided by 2
    int remainderBy2 = number % 2;
    printf("Remainder when divided by 2: %d\n", remainderBy2);

    // Find and display the remainder when divided by 10
    int remainderBy10 = number % 10;
    printf("Remainder when divided by 10: %d\n", remainderBy10);

    return 0;
}

//OUTPUT
//--------
//Enter a number: 56
//Remainder when divided by 2: 0
//Remainder when divided by 10: 6
//
//--------------------------------

