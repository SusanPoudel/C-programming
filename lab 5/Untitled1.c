#include <stdio.h>

// Function with no arguments and no return value
void areaNoArgsNoReturn() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = 3.14159 * radius * radius;

    printf("Area of the circle: %f\n", area);
}

// Function with no arguments but return value
float areaNoArgsWithReturn() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    return 3.14159 * radius * radius;
}

// Function with arguments but no return value
void areaWithArgsNoReturn(float radius) {
    float area = 3.14159 * radius * radius;
    printf("Area of the circle: %f\n", area);
}

// Function with both arguments and return value
float areaWithArgsWithReturn(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    // a) Function with no arguments and no return value
    printf("a) Function with no arguments and no return value:\n");
    areaNoArgsNoReturn();
    printf("\n");

    // b) Function with no arguments but return value
    printf("b) Function with no arguments but return value:\n");
    float resultB = areaNoArgsWithReturn();
    printf("Area of the circle: %f\n\n", resultB);

    // c) Function with arguments but no return value
    printf("c) Function with arguments but no return value:\n");
    float radiusC;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radiusC);
    areaWithArgsNoReturn(radiusC);
    printf("\n");

    // d) Function with both arguments and return value
    printf("d) Function with both arguments and return value:\n");
    float radiusD;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radiusD);
    float resultD = areaWithArgsWithReturn(radiusD);
    printf("Area of the circle: %f\n", resultD);

    return 0;
}

