#include<stdio.h>
int add(int a ,int b){
    printf("add %d\n",add);
    return a+b;
    
}
int main()
{
    int c;
    int(*p)(int , int);
    p=&add;
    printf("add address%d\n",add);
    c=(*p)(4,4);
    printf("%d\n",c);
    return 0;
    
}