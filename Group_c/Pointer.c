#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;   // a. declare and initialize pointer

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", p);

    // b. Pointer arithmetic
    printf("\nPointer Arithmetic:\n");
    printf("Original pointer p      = %p\n", p);
    printf("p + 1 = %p\n", p + 1);
    printf("p - 1 = %p\n", p - 1);

    // increment and decrement
    p++;
    printf("After p++ : %p\n", p);

    p--;
    printf("After p-- : %p\n", p);

    // c. print the memory addresses of an array elements using pointer
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("\nMemory addresses of array elements:\n");

    for(int i = 0; i < 5; i++) {
        printf("Address of arr[%d] = %p\n", i, ptr + i);
    }

    return 0;
}
