#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    long long int b;
    double d;
    char c;
    scanf("%d %lld %lf %c",&a,&b,&d,&c);
    printf("%d\n%lld\n%0.2lf\n%c",a,b,d,c);
    return 0;
}
