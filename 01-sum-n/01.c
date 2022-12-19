#include <stdio.h>

int main(void) {
    int n = 10, i = 1, sum = 0;

    while (i <= n) {
    sum += i;
    i++;
    }

    printf("Sum = %d", sum);

    return 0;   
}
