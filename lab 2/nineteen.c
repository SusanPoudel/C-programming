//C program to enter a number and check if it divisible by (5 and 8) or not.

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the entered number is divisible by 5 and 8 using the && operator
    if (num % 5 == 0 && num % 8 == 0) {
        printf("The entered number %d is divisible by both 5 and 8.\n", num);
    } 
	else {
        printf("The entered number %d is not divisible by both 5 and 8.\n", num);
    }

    return 0;
}

//OUTPUT
//--------
//Enter a number: 40
//The entered number 40 is divisible by both 5 and 8.
//
//--------------------------------

