//C program to enter a 3-digit number and display the first, second and last digit.

#include <stdio.h>

int main() {
    int num;

    //take input from user 
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extract and display the first, second, and last digits
    int firstDigit = num / 100;
    int secondDigit = (num / 10) % 10;
    int lastDigit = num % 10;

    printf("First digit: %d\n", firstDigit);
    printf("Second digit: %d\n", secondDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}

//OUTPUT
//--------
//Enter a 3-digit number: 486
//First digit: 4
//Second digit: 8
//Last digit: 6
//
//--------------------------------

