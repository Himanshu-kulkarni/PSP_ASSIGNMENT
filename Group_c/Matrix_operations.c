#include <stdio.h>

int main() {
    int r, c, i, j, k;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], Add[r][c], Mul[r][c], T[r][c];

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    // Matrix Addition
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            Add[i][j] = A[i][j] + B[i][j];

    // Matrix Multiplication
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            Mul[i][j] = 0;
            for(k = 0; k < c; k++)
                Mul[i][j] += A[i][k] * B[k][j];
        }
    }

    // Transpose of Matrix A
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            T[j][i] = A[i][j];

    // Print Results
    printf("\nAddition of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", Add[i][j]);
        printf("\n");
    }

    printf("\nMultiplication of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", Mul[i][j]);
        printf("\n");
    }

    printf("\nTranspose of Matrix A:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }

    return 0;
}
