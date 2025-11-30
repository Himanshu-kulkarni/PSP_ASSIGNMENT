#include <stdio.h>

// function prototypes
void fib_iterative(int n);
int fib_recursive(int n);

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series using iterative function:\n");
    fib_iterative(n);

    printf("\nFibonacci Series using recursive function:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", fib_recursive(i));
    }

    return 0;
}

// iterative function
void fib_iterative(int n) {
    int a = 0, b = 1, c, i;

    for(i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

// recursive function
int fib_recursive(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib_recursive(n-1) + fib_recursive(n-2);
}
