#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;

};
struct node *head = NULL;
void insert(int value){
    struct node *newnode=malloc(sizeof(struct node));
    struct node *temp;
    newnode->data=value;
    newnode->next=NULL;
    if(head == NULL){
        head = newnode;
    }
    else
    {
        temp =head;
        while(temp!=NULL){
            temp=temp->next;
            
        }
        temp->next=newnode;

    }
}
void display()
{
    struct node *temp;
    if(head ==NULL){
        printf("LIST IS EMPTY");
        return;
    }
    temp=head;
    temp =head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int choice,value;
    while(1){
        printf("1.insert\n");
        printf("2.display\n");
        printf("3.exit\n");
        printf("enter the choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the list :");
            scanf("%d",&value);
            insert(value);
            break;
            case 2:
            printf("Display the list");
            display();
            break;
            case 3:
            printf("Exit of the program");
            break;
            default:
            printf("INVALID INPUT");
        }
    }
}