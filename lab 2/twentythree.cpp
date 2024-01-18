//C program to input a number from user and display if odd or even using conditional operator.

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is odd or even using the conditional operator
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}

//OUTPUT
//--------
//Enter a number: 6
//6 is even.
//
//--------------------------------
