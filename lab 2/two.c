//C program to enter two very long distance (say distance between planets) and find the sum.

#include <stdio.h>

int main() {
    long int distance1, distance2, sum;

    // take input from user 
    printf("Enter the first distance: ");
    scanf("%ld", &distance1);

    printf("Enter the second distance: ");
    scanf("%ld", &distance2);

    // Calculate the sum of the distances
    sum = distance1 + distance2;

    // Display the result
    printf("Sum of distances: %ld\n", sum);

    return 0;
}

//OUTPUT
//--------
//Enter the first distance: 2345678
//Enter the second distance: 345667
//Sum of distances: 2691345
//
//--------------------------------





