#include <stdio.h>

int main() {
 int N, M;
    scanf("%d %d", &N, &M);
    if (N < 2 || N > 100 || M < 2 || M > 100) {
        printf("N,M should be 2 <= N,M <= 100.\n");
        return 1;  
    }

    int mtr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &mtr[i][j]);
            if (mtr[i][j] < 0 || mtr[i][j] > 100) {
                printf("matrix element should be 0 <= Element <= 100.\n");
                return 1;
            }
        }
    }
    for (int j = 0; j < M; j++) {
        printf("%d ", mtr[N - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", mtr[i][M - 1]);
    }
    return 0;
}
