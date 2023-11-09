#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        // Calculate the difference in days
        int difference = D - (M1 * D) / (M1 + M2);
        // Output the result
        printf("%d\n", difference);
    }

    return 0;
}
