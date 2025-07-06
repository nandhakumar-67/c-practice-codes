#include<stdio.h>
int main()
{
    int a =5;
    int *p = &a; // Pointer p points to the address of a
    printf("The address of the a is %d\n",p);
    printf("The sizeof the int is %d\n",sizeof(int));
    printf("add of p+1 is %d\n", p+1);
    printf("The value of a is %d\n",*p+1);
}