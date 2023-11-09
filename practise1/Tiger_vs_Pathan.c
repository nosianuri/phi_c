#include <stdio.h>


char game_winner(int n, char s[]) {
    int tiger_sallu = 0, pathan_srk = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') {
            tiger_sallu++;
        } else if (s[i] == 'P') {
            pathan_srk++;
        }
    }

    if (tiger_sallu > pathan_srk) {
        return 'T';
    } else if (pathan_srk > tiger_sallu) {
        return 'P';
    } else {
        return 'D';
    }
}

int main() {
    int T;
    scanf("%d", &T);

    if (T >= 1 && T <= 100) {
        while (T--) {
            int n;
            scanf("%d", &n);

            if (n >= 1 && n <= 100000) {
                char s[100001];
                scanf("%s", s);

                char winner = game_winner(n, s);

                if (winner == 'T') {
                    printf("Tiger\n");
                } else if (winner == 'P') {
                    printf("Pathaan\n");
                } else {
                    printf("Draw\n");
                }
            }
        }
    }

    return 0;
}
