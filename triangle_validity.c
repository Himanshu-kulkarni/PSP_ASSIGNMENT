#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input angles
    printf("Enter the three angles of the triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check validity
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is invalid.\n");
    }

    return 0;
}

/*
output:
Enter the three angles of the triangle:
60
60
60
The triangle is valid.
*/