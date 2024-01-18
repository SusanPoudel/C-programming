//C program to enter a 3-digit number and display it in reverse order. 

#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Display the number in reverse order using a loop
    printf("Number in reverse order: ");
    while (num > 0) {
        int digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }
    
    printf("\n");

    return 0;
}

//OUTPUT
//--------
//Enter a 3-digit number: 56789
//Number in reverse order: 98765
//
//--------------------------------

