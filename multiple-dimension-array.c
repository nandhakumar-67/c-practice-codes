#include<stdio.h>
int main()
{
    int a[3][3]={{2,4,0},{3,5,0},{6,8,0}};
    int (*b)[3]=a;
    printf("b %d",b);
    return 0;
}