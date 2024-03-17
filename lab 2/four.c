//C program to enter two decimal numbers and display the sum.

#include <stdio.h>

int main() {
    double number1, number2, sum;

    //take input from user 
    printf("Enter the first decimal number: ");
    scanf("%lf", &number1);

    printf("Enter the second decimal number: ");
    scanf("%lf", &number2);

    // Calculate the sum of the decimal numbers
    sum = number1 + number2;

    // Display the result
    printf("Sum of numbers: %.2lf\n", sum);

    return 0;
}

//OUTPUT
//--------
//Enter the first decimal number: 8.10
//Enter the second decimal number: 3.1
//Sum of numbers: 11.20
//--------------------------------

