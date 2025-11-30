#include <stdio.h>

// Function prototypes
long long fact_iterative(int n);
long long fact_recursive(int n);

int main() {
    int n;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = fact_iterative(n);
    printf("Factorial using iterative function = %lld\n", result);

    result = fact_recursive(n);
    printf("Factorial using recursive function = %lld\n", result);

    return 0;
}

// Iterative function
long long fact_iterative(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

// Recursive function
long long fact_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact_recursive(n - 1);
}
