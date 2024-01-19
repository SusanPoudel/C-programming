//C program to enter a number and find the sum of each digits in it

#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    // Display the sum of digits
    printf("Sum of each digits: %d\n", sum);

    return 0;
}

//OUTPUT
//------------
//Enter a number: 456
//Sum of each digits: 15
//
//--------------------------------





