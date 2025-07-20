#include<stdio.h>
#include<stdlib.h>

int *nk(int *a,int *b){
    int *c=(int *)malloc(sizeof(int));
    *c =*a+*b;
    return c;
}
int main()
{
    int a=20,b=4;
    int *c= nk(&a,&b);
    printf("%d\n",*c);
    free(c);
}