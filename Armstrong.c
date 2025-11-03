#include <stdio.h>

int main() {
    int n, temp, digit, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for(n = 1; n <= 500; n++) {
        temp = n;
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if(sum == n)
            printf("%d\n", n);
    }

    return 0;
}

/*
output:

Armstrong numbers between 1 and 500 are:
1
153
370
371
407
*/