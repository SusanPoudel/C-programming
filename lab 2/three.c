//C program to enter two marks (using memory conservation) and display the sum.

#include <stdio.h>

int main() {
    unsigned short int mark1, mark2, sum;

    // take input from user 
    printf("Enter the first mark: ");
    scanf("%hu", &mark1);

    printf("Enter the second mark: ");
    scanf("%hu", &mark2);

    // Calculate the sum of the marks
    sum = mark1 + mark2;

    // Display the result
    printf("Sum of marks: %hu\n", sum);

    return 0;
}

//OUTPUT
//--------
//Enter the first mark: 57
//Enter the second mark: 4
//Sum of marks: 61
//
//--------------------------------






