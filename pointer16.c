#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="hello";
    printf("c =%s\n",c);
    char *ch;
    ch =c;
    printf("ch = %s\n", ch);
    printf("c[0]= %c\n", c[1]);
    printf("ch[3]= %c\n", ch[3]);
    printf("ch[4]= %c\n", ch[4]);
    ch[4]='e';
    printf("ch[4]= %s\n", ch);


}