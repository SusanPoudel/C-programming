//C program to enter a number and check if it is exactly divisible by 5 or not.

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is exactly divisible by 5 using the ternary operator
    (num % 5 == 0) ? printf("%d is exactly divisible by 5.\n", num) : printf("%d is not exactly divisible by 5.\n", num);

    return 0;
}

//OUTPUT
//------------
//Enter a number: 25
//25 is exactly divisible by 5.
//
//--------------------------------
