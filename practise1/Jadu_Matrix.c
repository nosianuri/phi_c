#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isJaduMatrix = 1; 
    for (int i = 0; i < N; i++) {
        if (matrix[i][i] != 1) {
            isJaduMatrix = 0; 
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        if (matrix[i][N - 1 - i] != 1) {
            isJaduMatrix = 0;
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i != j && i != (N - 1 - j) && matrix[i][j] != 0) {
                isJaduMatrix = 0; 
                break;
            }
        }
    }

    if (isJaduMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
  
    return 0;
}
