#include <stdio.h>

int main() {

    int T;
    scanf("%d", &T);

    if (T < 1 || T > 100000) {
        printf("T should be 1 to 100000.\n");
        return 1;
    }

    while (T--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        if (M < 0 || M > 1000000000000000000LL) {
            printf("M should be 0 to 10^18.\n");
            continue;
        }

        if (A < 1 || A > 1000000 || B < 1 || B > 1000000 || C < 1 || C > 1000000) {
            printf("A, B, and C should be 1 to 10^6.\n");
            continue; 
        }

        long long missing = M / (A * B * C);

        if (A * B * C * missing == M) {
            printf("%lld\n", missing);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}