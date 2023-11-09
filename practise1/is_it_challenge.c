#include <stdio.h>
int main()
{
    int i;
    long long int n;
    scanf("%d", &n);
   
    if (n >= 1 && n <= 100000)
    {
        printf("%d", n);
    }
    else if (n >= -100000)
    {
        printf("%d", n);
    }
     
    return 0;
}