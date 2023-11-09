#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char S[1001];
    scanf("%s", S);

    if (is_palindrome(S)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
