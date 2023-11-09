#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    scanf("%s", s);
    int length = strlen(s);
    int cons = 0;
    for (int i = 0; i < length; i++) {
        char character = s[i];
        if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u') {
            cons++;
        }
    }
    printf("%d\n", cons);

    return 0;
}
