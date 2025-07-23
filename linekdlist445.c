#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *head =NULL;
struct node *temp;
void insert(int value){
    struct node *newnode=malloc(sizeof(struct node));
    struct node *temp;
    newnode->data =value;
    newnode->link=NULL;
    if(head == NULL){
        head =newnode;
    }
    else{
        temp =head;
        while(temp!=NULL){
            temp=temp->link;
        }
        temp =temp->link;
    }
}
void display(){
    if(head == NULL){
        printf("LIST IS EMPTY");
        return;
    }
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->link;
    }
}
int main()
{
    printf("*****************************************SINGLE LINKED LIST IN C PROGRAM************************************");
    int choice,value;
    while(1){
        printf("1.Insert\n 2.Display\n 3. Exit \nEnter the choice of the list\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value of the list");
            scanf("%d",&value);
            insert(value);
            break;
            case 2:
            printf("Display the exit of the list");
            display();
            break;
            case 3:
            printf("Exit of the Program");
            break;
            default:
            printf("Invalid INPUT");
            break;
        }
    }
}