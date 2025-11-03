#include <stdio.h>
#define PI 3.1416

int main() {
    int choice;
    float a, l, b, h, r, s, tsa, volume;

    printf("Select the shape:\n");
    printf("1. Cube\n2. Cuboid\n3. Cylinder\n4. Cone\n5. Sphere\n6. Prism (rectangular)\n7. Pyramid (square base)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Cube
            printf("Enter side length: ");
            scanf("%f", &a);
            tsa = 6 * a * a;
            volume = a * a * a;
            break;

        case 2: // Cuboid
            printf("Enter length, breadth, height: ");
            scanf("%f %f %f", &l, &b, &h);
            tsa = 2 * (l*b + b*h + h*l);
            volume = l * b * h;
            break;

        case 3: // Cylinder
            printf("Enter radius and height: ");
            scanf("%f %f", &r, &h);
            tsa = 2 * PI * r * (r + h);
            volume = PI * r * r * h;
            break;

        case 4: // Cone
            printf("Enter radius and slant height: ");
            scanf("%f %f", &r, &s);
            printf("Enter height: ");
            scanf("%f", &h);
            tsa = PI * r * (r + s);
            volume = (PI * r * r * h) / 3;
            break;

        case 5: // Sphere
            printf("Enter radius: ");
            scanf("%f", &r);
            tsa = 4 * PI * r * r;
            volume = (4 * PI * r * r * r) / 3;
            break;

        case 6: // Prism (rectangular)
            printf("Enter base area, perimeter of base, and height: ");
            scanf("%f %f %f", &a, &l, &h);
            tsa = (2 * a) + (l * h);
            volume = a * h;
            break;

        case 7: // Pyramid (square base)
            printf("Enter base length, slant height, and height: ");
            scanf("%f %f %f", &a, &s, &h);
            tsa = (a * a) + (2 * a * s);
            volume = (a * a * h) / 3;
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("\nTotal Surface Area = %.2f", tsa);
    printf("\nVolume = %.2f\n", volume);

    return 0;
}

/*
output:

Select the shape:
1. Cube
2. Cuboid
3. Cylinder
4. Cone
5. Sphere
6. Prism
7. Pyramid
Enter your choice: 1
Enter side length: 5

Total Surface Area = 150.00
Volume = 125.00
*/