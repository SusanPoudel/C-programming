//C program to enter a number and display if positive, negative or zero using ternary operator.

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero using the ternary operator
    (num > 0) ? printf("%d is positive.\n", num) : (num < 0) ? printf("%d is negative.\n", num) : printf("The number is zero.\n");

    return 0;
}

//OUTPUT
//--------
//Enter a number: -2
//-2 is negative.
//
//--------------------------------

