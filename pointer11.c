#include<stdio.h>
void increament(int *p)
{
    *p=*p +1;

}
int main()
{
    int  a =10;;
    increament(&a);
    printf("The Address of  a is: %d\n", a);
    return 0;
}