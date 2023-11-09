#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 100000) {
        printf("N must be 1 <= N <= 10^5\n");
        return 1; 
    }
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 0 || a[i] > 1000000000) {
            printf("Element must be 0 <= A[i] <= 10^9; here 0 <= i < N\n");
            return 1;
        }
    }

    int divided2 = 0;
    int divided3 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            divided2++;
        } else if (a[i] % 3 == 0) {
            divided3++;
        }
    }
    printf("%d %d\n", divided2, divided3);
    return 0;
}
