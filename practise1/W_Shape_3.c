#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print asterisks to form the top half of the diamond
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
        // Print leading spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print asterisks to form the bottom half of the diamond
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
