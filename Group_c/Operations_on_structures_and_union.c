#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[50];
    char gender;
    float marks;
};

int main() {
    struct student s[100], temp;
    int n, i, j, searchRoll, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // a. Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &s[i].gender);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display entered data
    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("%d  %s  %c  %.2f\n", s[i].roll_no, s[i].name, s[i].gender, s[i].marks);
    }

    // b. Sort data in descending order by marks
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents sorted in descending order based on marks:\n");
    for(i = 0; i < n; i++) {
        printf("%d  %s  %c  %.2f\n", s[i].roll_no, s[i].name, s[i].gender, s[i].marks);
    }

    // c. Search by roll number
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(s[i].roll_no == searchRoll) {
            found = 1;
            printf("\nStudent found:\n");
            printf("%d  %s  %c  %.2f\n", s[i].roll_no, s[i].name, s[i].gender, s[i].marks);
            break;
        }
    }

    if(!found) {
        printf("Student not found.\n");
    }

    return 0;
}