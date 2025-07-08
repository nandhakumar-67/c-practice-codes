#include<stdio.h>
#include<string.h>
int main()
{
    char c[9]={'j','h','o','n','\0'};
    printf("%s\n",c);
    int length =strlen(c);
    printf("Lenths = %d\n", length);
    return 0;
}