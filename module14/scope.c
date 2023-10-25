#include<stdio.h>
//global
int x=500;
void fun(void)
{
    // int s=100;
    // printf("Main er s er address - %p\n",&s);
    printf("Main er s er address - %p\n",&x);
}
    
    
int main()
{
    // int s=200;
    // printf("Main er s er address - %p\n",&s);
    // printf("Main er s er address - %p\n",&x);
    // fun();
    int y=100;
    for(int i=0;i<5;i++)
    {
        int z=100;
    }
    // printf("%d",z);
    return 0;
}