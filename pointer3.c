#include<stdio.h>
int main()
{
int a =5;
int b= 10;
int *ptr =&a;
ptr--;
printf("%x",&ptr);
return 0;
}