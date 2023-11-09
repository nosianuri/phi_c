#include <stdio.h>

int count_before_one(int A[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 1) {
            break;
        }
        count++;
    }
    return count;
}
int main() {
    int N;
    scanf("%d", &N);
    if (N < 1 || N > 1000) {
        printf("N must be 1 <= N <= 1000\n");
        return 1; 
    }
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] < 0 || A[i] > 1000) {
            printf("A[i] must be 0 <= A[i] <= 1000; Here 0 <= i < N\n", i, i);
            return 1; 
        }
    }

    int result = count_before_one(A, N);
    printf("%d\n", result);

    return 0;
}
