#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        // Print asterisks to form the triangle
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
