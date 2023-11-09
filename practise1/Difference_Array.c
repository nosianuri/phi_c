#include<stdio.h>
int main()
{
     int T;
    scanf("%d", &T);
    if (T < 1 || T > 100) {
        printf("T should be 1 <= T <= 100\n");
        return 1; 
    }
    while (T--) {
        int N;
        scanf("%d", &N);
        if (N < 1 || N > 1000) {
            printf("N should be 1 <= N <= 1000\n");
            return 1; 
        }
        int A[N], B[N], C[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            if (A[i] < 0 || A[i] > 1000) {
                printf("A[%d] should be 0 <= to <= 1000\n", i);
                return 1; 
            }
            B[i] = A[i];
        }
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    int asnd = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = asnd;
                }
            }
        }
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }
 
    return 0;
}