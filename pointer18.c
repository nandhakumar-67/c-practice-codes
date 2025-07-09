#include<stdio.h>
#include<string.h>
int main()
{
    int a[]= {34,20,20};
    int *p;
    p=a;
    printf("p =%d\n", p);
    printf("$=%d\n", *p);
    printf("*(p+2) = %d\n", *p+2);
    printf("*p+3 = %d\n", *p+3);
    printf("a[0]=%d\n", a[2]+5);
}