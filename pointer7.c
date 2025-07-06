#include<stdio.h>
int main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("The address fo the %d\n", p);//addree fo the a;
    printf("the address fo the %d\n", &a); //addrees fo the a;
    printf("The address fo the  %d\n", *p); //value of p;
    printf("the address fo the %d\n", &p); //value of address in p;
    *p= 50;
    printf("the value fo the a is  %d\n ",*p);
    printf("the address fo the %d\n", p);
    int b =90;
    p=&b;
    printf("the value of b is: %d\n", *p);
    printf("the address fo the b is %d",&b);
}