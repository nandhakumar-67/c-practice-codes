#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter the arrya limit");
    scanf("%d",&n);
    int *a = (int *)malloc(n *sizeof(int));
    for(i=0;i<n;i++){
        a[i]=i+1;
    }
    a[2]=5;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    free(a);

}