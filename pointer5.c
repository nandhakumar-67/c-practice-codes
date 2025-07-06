#include<stdio.h>
int main()
{
    float a = 15.44;
    float *ptr =&a;
    float **dptr =&ptr;
    printf("the address of the %x\n is:", &ptr);
    printf("the addrees of the %x\n is:", ptr);
    printf("the addrees of the %x\n is:", &a);
    printf("the addree fo the %x\n is:", dptr);
    return 0;
}