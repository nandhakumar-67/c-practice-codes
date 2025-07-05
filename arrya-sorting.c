#include<stdio.h>
int main()
{
    int limit,i,j,sea[500],temp;
    printf("Enter the array limit:");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("Enter %d number is:",i+1);
        scanf("%d",&sea[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(sea[i] > sea[j]){
                temp=sea[i];
                sea[i]=sea[j];
                sea[j]=temp;
            }
        }
    }
        printf("The value are printed:");
        for(i=0;i<limit;i++){
        printf("%d\t",sea[i]);
        }
        return 0;
}
