#include <stdio.h>
float calculateAnnualTax(float income, char gender) {
    float tax = 0;

    // Apply tax rules
    if (income <= 350000) {
        tax = income * 0.01;
    } else if (income <= 450000) {
        tax = 3500 + (income - 350000) * 0.1;
    } else if (income <= 650000) {
        tax = 3500 + 10000 + (income - 450000) * 0.2;
    } else if (income <= 2000000) {
        tax = 3500 + 10000 + 40000 + (income - 650000) * 0.3;
    } else {
        tax = 3500 + 10000 + 40000 + 405000 + (income - 2000000) * 0.36;
    }

    if (gender == 'F' || gender == 'f') {
        tax -= tax * 0.1;
    }

    return tax;
}

int main() {
    float income;
    char gender;

    printf("Enter annual income: ");
    scanf("%f", &income);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    float annualTax = calculateAnnualTax(income, gender);
    printf("Annual tax: %.2f\n", annualTax);

    return 0;
}



//public class SquarePyramid {
//    private double sideLength;
//    private double height;
//
//    public SquarePyramid(double sideLength, double height) {
//        this.sideLength = sideLength;
//        this.height = height;
//    }
//
//    public double calculateVolume() {
//        // Formula for the volume of a square pyramid: V = (1/3) * baseArea * height
//        double baseArea = Math.pow(sideLength, 2);
//        double volume = (1.0 / 3.0) * baseArea * height;
//        return volume;
//    }
//
//    public double calculateSideArea() {
//        // Formula for the area of each side face: A = 0.5 * perimeter * slantHeight
//        double slantHeight = Math.sqrt(Math.pow(sideLength, 2) + Math.pow(height, 2));
//        double perimeter = 4 * sideLength;
//        double sideArea = 0.5 * perimeter * slantHeight;
//        return sideArea;
//    }
//
//    public static void main(String[] args) {
//        // Example usage
//        double sideLength = 5.0;
//        double height = 7.0;
//        SquarePyramid pyramid = new SquarePyramid(sideLength, height);
//
//        double volume = pyramid.calculateVolume();
//        double sideArea = pyramid.calculateSideArea();
//
//        System.out.printf("Volume of the pyramid: %.2f cubic units\n", volume);
//        System.out.printf("Area of each side face: %.2f square units\n", sideArea);
//    }
//}

