//C program to enter any two integers and find the greatest among them. (to illustrate relational operator).

#include <stdio.h>

int main() {
    int num1, num2;

    // take input from user 
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Check and display the greatest integer
    if (num1 > num2) {
        printf("The greatest integer is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The greatest integer is: %d\n", num2);
    } else {
        printf("Both integers are equal.\n");
    }

    return 0;
}

//OUTPUT
//--------
//Enter the first integer: 34
//Enter the second integer: 35
//The greatest integer is: 35
//
//--------------------------------

