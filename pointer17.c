#include<stdio.h>
#include<string.h>
void print(char *ch)
{
   while(*ch!='\0')
   {
    printf("%c",*ch);
    ch++;
    
   }
   printf("\n");

}
int main()
{
    char c[]="nandhakumar";
    char *ch;
    ch = c;
    print(ch);
}