//WAP to determine and print the sum of the following harmonic series for a given value of n: 1 + 1/2 + 2/3 + 1/4 +.........................+ 1/n

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // take input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the harmonic series
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    // Display the result
    printf("Sum of the harmonic series up to %d terms: %lf\n", n, sum);

    return 0;
}

//OUTPUT
//------------
//Enter the value of n: 10
//Sum of the harmonic series up to 10 terms: 2.928968
//
//--------------------------------

