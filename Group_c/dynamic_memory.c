#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, newSize, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // allocate memory dynamically
    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // resize the array
    printf("\n\nEnter new size: ");
    scanf("%d", &newSize);

    arr = (int*)realloc(arr, newSize * sizeof(int));

    if(arr == NULL) {
        printf("Memory reallocation failed!");
        return 1;
    }

    printf("Enter %d new elements:\n", newSize);
    for(i = 0; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements after resizing:\n");
    for(i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // free memory
    free(arr);

    return 0;
}
