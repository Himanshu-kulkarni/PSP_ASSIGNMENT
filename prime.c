#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, i;
    int is_prime;

    // Input range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the range
    for(num = start; num <= end; num++) {
        if(num > 1) {
            is_prime = 1; // Assume number is prime

            // Check for divisibility
            for(i = 2; i <= sqrt(num); i++) {
                if(num % i == 0) {
                    is_prime = 0; // Not prime
                    break;
                }
            }

            if(is_prime)
                printf("%d ", num);
        }
    }

    return 0;
}

/*
input:
Enter the starting number: 10
Enter the ending number: 50

output:
Prime numbers between 10 and 50 are:
11 13 17 19 23 29 31 37 41 43 47
*/