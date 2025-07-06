#include<stdio.h>
int main()
{
    int limit,i,arr[50];
    printf("enter the limit of the array:");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("the %d number :",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr =arr;
    printf("the elemand are is" );
    for(i=0;i<limit;i++)
    {

        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}