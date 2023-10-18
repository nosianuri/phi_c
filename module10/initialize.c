#include<stdio.h>
int main()
{
    // char a[5]={'R','a','h','a','t'};
    char a[6]="Rahat";
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    return 0;
}