#include <stdio.h>

int main() {
    char s[10001];
    scanf("%s", s);
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            count[c - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
