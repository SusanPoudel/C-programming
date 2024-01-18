//C program to enter an integer and find the quotient when divided by 10.

#include <stdio.h>

int main() {
    int number;

    // take input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Find and display the quotient when divided by 10
    int quotient = number / 10;
    printf("Quotient when divided by 10: %d\n", quotient);

    return 0;
}

//OUTPUT
//--------
//Enter an integer: 70
//Quotient when divided by 10: 7
//
//--------------------------------

