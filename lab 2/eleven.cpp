//C program to enter a 3-digit number and find the sum of individual digits in it.

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a 3-digit num: ");
    scanf("%d", &num);

    // Extract individual digits and find their sum
    int firstDigit = num / 100;
    int secondDigit = (num / 10) % 10;
    int lastDigit = num % 10;

    int sum = firstDigit + secondDigit + lastDigit;

    // Display the sum of individual digits
    printf("Sum of individual digits: %d\n", sum);

    return 0;
}

//OUTPUT
//--------
//Enter a 3-digit num: 345
//Sum of individual digits: 12
//
//--------------------------------

