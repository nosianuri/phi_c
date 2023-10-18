#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 100000)
    {
        int v;
        int pos = 0, neg = 0;
        for (int i = 1; i <= n; i = i + 1)
        {
            scanf("%d", &v);
            if (v >= -1000 && v <= 1000)
            {
                if (v > 0)
                {
                    // positive
                    pos += v;
                }
                else if (v < 0)
                {
                    // negative
                    neg += v;
                }
            }
            else
            {
                printf("V should be -1000 <= V <= 1000.\n");
                return 1;
            }
        }
        printf("%d %d ", pos, neg);
    }
    else
    {
        printf("N should be 1 <= N <= 10^5.\n");
    }
    return 0;
}