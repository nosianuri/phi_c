#include<stdio.h>
int sum()
// int sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
// int sum()
// {
//     printf("input nisca");
//     return 0;
// }
int main()
{
    int s=sum(100);
    printf("%d",s);
    return 0;
}