//C program to print Fibonacci series upto nth term.

#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    // take inpit from user 
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", firstTerm);

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}

//OUTPUT
//------------
//Enter the number of terms: 10
//Fibonacci series up to 10 terms:
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
//--------------------------------

