#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, nextTerm;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", a, b);

    for (i = 3; i <= n; i++) {
        nextTerm = a + b;
        printf("%d ", nextTerm);
        a = b;
        b = nextTerm;
    }

    return 0;
}
