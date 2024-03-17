//C program to create and make use of user defined datatype, and display the sum of two entered number using this user-defined datatype.

#include <stdio.h>

// Define a user-defined datatype (using typedef)
typedef float UserNumber;

int main() {
    // Declare variables of the user-defined datatype
    UserNumber num1, num2;

    // take input from user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the sum of the two numbers
    double sum = num1 + num2;

    // Display the result
    printf("Sum of numbers: %.2f\n", sum);

    return 0;
}

//OUTPUT
//--------
//Enter the first number: 7.8
//Enter the second number: 6.7
//Sum of numbers: 14.50
//
//--------------------------------

