#include<stdio.h>
int main()
{
    float x = 20.22;
    float y= 50.55;
    float *ptr =&x;
    float**dptr = &ptr;
    printf("the address fo the ptr is %f\n",x);
    printf("The address fo the ptr is %x\n",&ptr);
    printf("the address of the ptr is %x\n", *ptr);
    printf("the address of the ptr is %f\n", *dptr);
    ptr =&y;
    printf("%f\n",*dptr);
 return 0;
}