#include<stdio.h>
#include<stdlib.h>
struct head {
    int data;
    struct head *link;
};
struct head *add(struct head *ptr,int data){
    struct head *temp=malloc(sizeof(struct head));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}
int main()
{
    struct head *pt=malloc(sizeof(struct head));
    pt->data =45;
    pt->link=NULL;
    struct  head *ptr=pt;
    ptr = add(ptr,89);
    ptr = add(ptr,3);
    ptr = add(ptr,45);
    ptr =pt;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}