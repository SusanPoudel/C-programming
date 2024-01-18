//C program to enter three numbers and display the largest among them using AND (&&) operator.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // takke input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find and display the largest number using relational operators
    if (num1 > num2 && num1 > num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("The largest number is: %d\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("The largest number is: %d\n", num3);
    } else {
        printf("All three numbers are equal.\n");
    }

    return 0;
}

//OUTPUT
//--------
//Enter the first number: 45
//Enter the second number: 78
//Enter the third number: 9
//The largest number is: 78
//
//--------------------------------

