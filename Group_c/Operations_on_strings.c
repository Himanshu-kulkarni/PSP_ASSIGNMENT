#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Take number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 1) Search for a specific element
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element %d found at position %d.\n", key, i + 1);
    else
        printf("Element %d not found in the array.\n", key);

    // 2) Identify largest and smallest
    int max = arr[0], min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    // 3) Calculate sum and average
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    float avg = (float)sum / n;

    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", avg);

    return 0;
}
