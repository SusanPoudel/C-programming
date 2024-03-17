//C program to display the memory consumed by different datatypes: int, long int, float, double,long double, char… and so on.

#include <stdio.h>

int main() {
    // display the memory consumed by different datatypes	
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    printf("Size of char: %lu bytes\n", sizeof(char));

    return 0;
}

//OUTPUT
//--------
//Size of int: 4 bytes
//Size of long int: 4 bytes
//Size of float: 4 bytes
//Size of double: 8 bytes
//Size of long double: 16 bytes
//Size of char: 1 bytes
//
//--------------------------------
