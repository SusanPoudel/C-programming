//C program to enter a character and check if it is vowel. Make use of OR (||) operator.

#include <stdio.h>

int main() {
    char ch;

    //take input from user
    printf("Enter a character in small letter: ");
    scanf(" %c", &ch);  

    // Check if the entered character is a vowel using the || operator
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The entered character '%c' is a vowel.\n", ch);
    } 
	else {
        printf("The entered character '%c' is not a vowel.\n", ch);
    }

    return 0;
}

//OUTPUT
//--------
//Enter a character in small letter: o
//The entered character 'o' is a vowel.
//
//--------------------------------

