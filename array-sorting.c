#include<stdio.h>
int main()
{
    int limit,i,j,temp,sear[70];
    printf("enter the limit of the array:");
    scanf9("%d", &limit);
    for(i=0;i<limit;i++)
    {
        printf("enter the element %d:", i+1);
        scanf("%d", &limit[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(sear[i] > sear[j]) {
                temp = sear[i];
                sear[i] = sear[j];
                sear[j] = temp;
            }
        }
    }
}