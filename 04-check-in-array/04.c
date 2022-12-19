#include <stdio.h>

#define M 6
#define N 5

int main() {
    int x[M] = {1, 4, 5, 6, 2, 3};
    int y[N] = {2, 3, 4, 5, 1};

    int k = 5;

    int result = 0;
    for (int i = 0; i < M; i++) {
        if (x[i] == k) {
            result = 1;
            break;
        }
    }

    if (!result) {
        for (int i = 0; i < N; i++) {
            if (y[i] == k) {
                result = 1;
                break;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}
