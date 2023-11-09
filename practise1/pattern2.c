#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N < 1 || N > 9) {
        printf("N must be 1 <= N <= 9\n");
        return 1;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
