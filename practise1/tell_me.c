#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++) {
        int n;
        scanf("%d", &n);
        int a[10000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] < 0 || a[i] > 1000000000) {
                printf("A[i] should be 0 <= A[i] <= 10^9; 0 <= i < N\n");
                return 1;
            }
        }

        int x;
        scanf("%d", &x);
        if (x < 0 || x > 1000000000) {
            printf("X should be 0 <= X <= 10^9\n");
            return 1;
        }
        int search = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                search = 1;
                break;
            }
        }
        if (search) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
