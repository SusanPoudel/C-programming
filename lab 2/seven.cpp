//C program to swap the values of two variables using a temporary variable.

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // take input from user
    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    // Display the values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap values using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

//OUTPUT
//--------
//Enter the value of num1: 5
//Enter the value of num2: 6
//Before swapping: num1 = 5, num2 = 6
//After swapping: num1 = 6, num2 = 5
//
//--------------------------------

