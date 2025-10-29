#include <stdio.h>

int main() {
    int age_sachin, age_ramesh, age_rahul;

    // Input ages
    printf("Enter age of Sachin: ");
    scanf("%d", &age_sachin);
    printf("Enter age of Ramesh: ");
    scanf("%d", &age_ramesh);
    printf("Enter age of Rahul: ");
    scanf("%d", &age_rahul);

    // Find oldest
    if (age_sachin >= age_ramesh && age_sachin >= age_rahul)
        printf("Oldest: Sachin (%d years)\n", age_sachin);
    else if (age_ramesh >= age_sachin && age_ramesh >= age_rahul)
        printf("Oldest: Ramesh (%d years)\n", age_ramesh);
    else
        printf("Oldest: Rahul (%d years)\n", age_rahul);

    // Find youngest
    if (age_sachin <= age_ramesh && age_sachin <= age_rahul)
        printf("Youngest: Sachin (%d years)\n", age_sachin);
    else if (age_ramesh <= age_sachin && age_ramesh <= age_rahul)
        printf("Youngest: Ramesh (%d years)\n", age_ramesh);
    else
        printf("Youngest: Rahul (%d years)\n", age_rahul);

    return 0;
}