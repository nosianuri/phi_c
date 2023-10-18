#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n >= 1 && n <= 100000)
    {
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
            if (ar[i] < 0 || ar[i] > 1000)
            {
                printf("Array elements should be 1 <= A[i] <= 1000.\n");
                return 1;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 != 0)
            {
                printf("%d ", ar[i]);
            }
        }
    }
    else
    {
        printf("N should be 1 <= N <= 10^5.\n");
    }
    return 0;
}