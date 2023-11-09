#include <stdio.h>

int main() {
    int i;
    long long int n;
    scanf("%lld", &n);
    if (n < 1 || n > 100000) {
        printf("Input N value should be 1 <= N <= 10^5.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        printf("%d. I Want More Assignments\n", i);
    }
    return 0;
}
