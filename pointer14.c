#include<stdio.h>
int nk(int *a,int size)
{
    int i,sum=0;
    for (i=0;i<size;i++){
        sum = sum + *a;
    }
    return sum;
}
int main()
{
    int a[10]={10,10,10,10,}
    int size = sizeof a / sizeof a[0];
    int toatal = nk(&a,size);
    printf("%d", toatal);

}