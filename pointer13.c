#include<stdio.h>
int nandhakumar(int a[], int size)
{
 int i,sum=0;
 for(i=0;i<size;i++){
    sum = sum + a[i];

 }
 return sum;
}
int main()
{
    int a[] = {10,10,10,10,10};
    int size =sizeof a/ sizeof a[0];
    int total = nandhakumar(a,size);
    printf("%d is :", total);
}