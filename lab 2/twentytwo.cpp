//C program to enter a number and increase it by 5 using short hand += operator.

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Increase the number by 5 using the += operator
    num += 5;

    // Display the result
    printf("After increasing by 5: %d\n", num);

    return 0;
}

//OUTPUT
//--------
//Enter a number: 8
//After increasing by 5: 13
//
//--------------------------------

