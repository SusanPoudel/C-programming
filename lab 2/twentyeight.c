 // C program to display the address in RAM taken by declared variables.

#include <stdio.h>

int main() {
    // Declare variables of various types
    int num;
    long int longNum;
    float floatNum;
    double doubleNum;
    long double longDoubleNum;
    char character;

    // Display the addresses of the variables
    printf("Address of num: %p\n", &num);
    printf("Address of longNum: %p\n", &longNum);
    printf("Address of floatNum: %p\n", &floatNum);
    printf("Address of doubleNum: %p\n", &doubleNum);
    printf("Address of longDoubleNum: %p\n", &longDoubleNum);
    printf("Address of character: %p\n", &character);

    return 0;
}

//OUTPUT
//--------
//Address of num: 000000000062FE1C
//Address of longNum: 000000000062FE18
//Address of floatNum: 000000000062FE14
//Address of doubleNum: 000000000062FE08
//Address of longDoubleNum: 000000000062FDF0
//Address of character: 000000000062FDEF
//
//--------------------------------

