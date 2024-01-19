//C program to enter a number and check if it is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, numDigits, sum = 0, digit;

    // take input from user 
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits in the number
    numDigits = (int) log10(number) + 1;

    // Calculate the sum of digits each to the power of numDigits
    while (number != 0) {
        digit = number % 10;
        sum += pow(digit, numDigits);
        number = number / 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}

//OUTPUT
//------------
//Enter a number: 1634
//1634 is an Armstrong number.
//
//--------------------------------

