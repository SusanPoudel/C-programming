//C program to input a character and convert it into its corresponding ASCII code

#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    // Convert character to ASCII code
    int asciiCode = (int)character;

    // Display the result
    printf("ASCII code for %c is %d\n", character, asciiCode);

    return 0;
}

//OUTPUT
//--------
//Enter a character: s
//ASCII code for s is 115
//
//--------------------------------

