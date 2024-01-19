//C program to enter a character and check if it is vowel or consonant.

#include <stdio.h>

int main() {
    char ch;

    // take input from user
    printf("Enter a character in small letter: ");
    scanf(" %c", &ch);

    // Check if the entered character is a vowel or consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }

    return 0;
}

//OUTPUT
//------------
//Enter a character in small letter: f
//f is a consonant.
//
//--------------------------------

