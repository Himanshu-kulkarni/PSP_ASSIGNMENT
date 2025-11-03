#include <stdio.h>

int main() {
    float marks1, marks2, marks3, marks4, marks5;
    float totalmarks, percentage;

    // Input marks for 5 subjects
    printf("ENTER MARKS OUT OF 100.\n");
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &marks4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &marks5);

    // Calculate total marks
    totalmarks = marks1 + marks2 + marks3 + marks4 + marks5;

    // Calculate percentage (assuming each subject is out of 100)
    percentage = (totalmarks / 500) * 100;

    // Display results
    printf("Total Marks: %.2f\n", totalmarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

/*
output:
ENTER MARKS OUT OF 100.
Enter marks for subject 1: 80
Enter marks for subject 2: 90
Enter marks for subject 3: 89
Enter marks for subject 4: 98
Enter marks for subject 5: 80
Total Marks: 437.00
Percentage: 87.40%
*/