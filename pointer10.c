#include<stdio.h>
int main()
{
    int a =10;
    int *p;
    p =&a;
    int **q;
    q=&p;
    int ***r;
    r=&q;
    printf("&a = %d\n", &a);
    printf("*p = %d\n", *p);
    printf("&p = %d\n", &p);
    printf("*q = %d\n", *q);
    printf("**q = %d\n", **q);
    printf("*r = %d\n", *r);
    printf("**r =%d\n", **r);
    printf("***r= %d\n", ***r);
    return 0;


}