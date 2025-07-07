#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i;
    int *p =a;
    printf("the address of a is %d\n", a[1]);
    printf("the address of a is %d\n", a[i]);
    printf("the address of a si %d\n", &a[i]);
    printf("the address of a %d\n ", *p+1);
    printf("a+i = %d", a+1);
    

}