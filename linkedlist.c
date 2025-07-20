#include<stdio.h>
#include<stdlib.h>
struct head {
    int data;
    struct head *link;
};
int main()
{
    printf("First adding the data");
    struct head *choice=malloc(sizeof(struct head));
    choice->data=98;
    choice->link =NULL;
    printf("choice of the head is %d\n",choice->data);
    struct head *nk=malloc(sizeof(struct head));
    nk->data =90000;
    nk->link=NULL;
    printf("choice of the nk is %d\n",nk->data);
    struct head *nkt=malloc(sizeof(struct head));
    nkt->data =90;
    nkt->link=NULL;
    printf("choice of the nk is %d\n",nkt->data);
    choice->link =nk;
    nk->link=nkt;
    struct head  *temp =choice;
    while(temp!=NULL){
        printf("node data %d\n",temp->data);
        temp=temp->link;
    }
    return 0;
}