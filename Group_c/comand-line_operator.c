#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float num1, num2, result;
    char op;

    // check number of command line inputs
    if (argc != 4) {
        printf("Error: Please enter 2 numbers and an operator.\n");
        printf("Example: ./a.out 10 20 +\n");
        return 1;
    }

    // convert strings to numbers
    num1 = atof(argv[1]);
    num2 = atof(argv[2]);
    op = argv[3][0];

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            printf("Use only +  -  *  /\n");
    }

    return 0;
}