//C program to enter two long decimal numbers and display the average.

#include <stdio.h>

int main() {
    long double number1, number2, average;

    // take input from user
    printf("Enter the first long decimal number: ");
    scanf("%Lf", &number1);

    printf("Enter the second long decimal number: ");
    scanf("%Lf", &number2);

    // Calculate the average of the long decimal numbers
    average = (number1 + number2) / 2;

    // Display the result
    printf("Average of numbers: %.2Lf\n", average);

    return 0;
}

//OUTPUT
//--------
//Enter the first long decimal number: 11.67
//Enter the second long decimal number: 57.99
//Average of numbers: 34.83
//--------------------------------

