#include <stdio.h>

void odd_even() {
    int N;
    scanf("%d", &N);

    // Check the constraints for N
    if (N < 1 || N > 1000) {
        printf("N is out of bounds. N must be between 1 and 1000.\n");
        return; // Exit without an error code
    }

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);

        // Check the constraint for A[i]
        if (A[i] < 0 || A[i] > 1000000000) {
            printf("A[%d] is out of bounds. A[%d] must be between 0 and 10^9.\n", i, i);
            return; // Exit without an error code
        }
    }

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("%d %d\n", even_count, odd_count);
}

int main() {
    odd_even();
    return 0;
}
