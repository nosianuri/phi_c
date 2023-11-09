#include <stdio.h>
#include <string.h>

int main() {
   int T;
    scanf("%d", &T);
    if (T < 1 || T > 1000) {
        printf("T should be 1 <= T <= 1000\n");
        return 1;
    }
    for (int t = 0; t < T; t++) {
        char s[10001];
        scanf("%s", s);
        int capital = 0;
        int small = 0;
        int digit = 0;
        int length = strlen(s);
        for (int i = 0; i < length; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                capital++;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                small++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}
