#include <stdio.h>

int main() {
    int choice;
    float area, perimeter;

    printf("Choose a shape to calculate area and perimeter:\n");
    printf("1. Triangle\n2. Rectangle\n3. Square\n4. Circle\n5. Hexagon\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: { // Triangle
            float a, b, c, height, base;
            printf("Enter base of triangle: ");
            scanf("%f", &base);
            printf("Enter height of triangle: ");
            scanf("%f", &height);
            printf("Enter the three sides of triangle (a b c): ");
            scanf("%f %f %f", &a, &b, &c);
            area = 0.5 * base * height;
            perimeter = a + b + c;
            break;
        }
        case 2: { // Rectangle
            float length, width;
            printf("Enter length and width of rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            perimeter = 2 * (length + width);
            break;
        }
        case 3: { // Square
            float side;
            printf("Enter side of square: ");
            scanf("%f", &side);
            area = side * side;
            perimeter = 4 * side;
            break;
        }
        case 4: { // Circle
            float radius;
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = 3.1416 * radius * radius;        // Pi approx
            perimeter = 2 * 3.1416 * radius;
            break;
        }
        case 5: { // Hexagon
            float side;
            printf("Enter side of hexagon: ");
            scanf("%f", &side);
            area = (3 * 1.732 * side * side) / 2;  // sqrt(3) approx = 1.732
            perimeter = 6 * side;
            break;
        }
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
