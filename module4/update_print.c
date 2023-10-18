#include <stdio.h>
int main() {
    int n, x, v;
    scanf("%d", &n);

    if (n >= 1 && n <= 100000) { // Check the constraint for N
        int A[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);

            if (A[i] < 1 || A[i] > 100) {
                printf("Array elements should be between 1 and 100.\n");
                return 1;
            }
        }

        scanf("%d %d", &x, &v);

        if (x >= 0 && x < n && v >= 1 && v <= 100) { // Check the constraint for X and V
            A[x] = v;

            for (int i = n - 1; i >= 0; i--) {
                printf("%d", A[i]);
                if (i > 0) {
                    printf(" ");
                }
            }
        } else {
            printf("X should be 0 <= X < N, and V should be between 1 and 100.\n");
        }
    } else {
        printf("N should be between 1 and 100000.\n");
    }

    return 0;
}