#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct ndoe *next;

};
void add(struct node *head,int value){
    struct node *new=mallco(sizeof(struct node));
    new->data=value;
    new->prev=NULL;
    new->next=NULL;
    head = new;
    return head;
}
int main()
{
    struct node *head =NULL;
    head= add(head,45);
    printf("%d",head->data);
    return 0;
}