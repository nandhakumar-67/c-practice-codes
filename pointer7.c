#include<stdio.h>
int main()
{
    int a=10;
    int *p= &a;
    printf("the address fo the %d",p);
    printf("ths size of the int : %d\n",sizeof(int));
    printf("the add of the p+1:%d\n", p+1);
    printf("the add fo the value p+2:%d\n", *p+1);
    return 0;
}