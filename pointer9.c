#include<stdio.h>
int main()
{
    int a=20;
    int *p;
    p=&a;
    printf("Address = %d, Value =%d", p,*p);
    void *po;
    po =p;
    printf("Address = %d", po);
}