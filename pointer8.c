#include<stdio.h>
int main()
{
    int a=1025;
    int *p;
    p=&a;
    printf("sizeof the inter is %d\n:", sizeof(int));
    printf("the addre of %d the value of p is %d\n",p,*p);
    printf("the p+1 is %d and *p(p+1): is %d\n", p+1,*(p+1));
    char *b;
    b=(char*)p;
    printf("size fo the char is%d\n:", sizeof(char));
    printf("the addre o f %d the valu e of b is %d\n:",b,*b);
    printf("the p+a is %d and %d is \n:",b+1,*(b+1));
}