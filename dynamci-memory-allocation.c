#include<stdio.h>
int total;
int square(int x)
{
    return x*x;
}
int nandha(int a, int b)
{
    int z =square(a+b);
    return z;
}
int main()
{
    int a=20,b=20;
    total = nandha(a,b);
    printf(" a+b=%d\n ",total);
}