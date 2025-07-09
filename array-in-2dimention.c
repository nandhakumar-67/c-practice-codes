#include<stdio.h>
int main()
{
    int a[3][2] = {{12,12}, {23,43}, {45,43}};  // 3 rows, 2 columns
    int (*p)[2] = a;  // pointer to an array of 2 integers

    printf("p = %p\n", p);        // address of the first row
    printf("*p = %d\n", *p[0]);   // value of first element
    printf("a = %p\n", a);        // address of array
    printf("*a = %p\n", *a);  
    printf("a %d\n",*p[1]);
    printf("%d\n",*(a+1)+2);

    return 0;
}
