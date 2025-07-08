#include<stdio.h>
#include<string.h>
void print(char *ch)
{
    ch[6]= 's';
    ch[7]='u';
    ch[8]='p';
    ch[9]='e';
    ch[10]='r';
    
   while(*ch!='\0')
   {
    printf("%c",*ch);
    ch++;
    
   }
   printf("\n");

}
int main()
{
    char ch[]="nandhakumar";
    print(ch);
}