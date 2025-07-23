#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head =NULL;
void insert(int value){
    struct node *temp;
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
     if (head == NULL){
        head =newnode;
    }
    else {
        temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;


   }
}
int main(){
    int choice,value;
    while(1){
    printf("1.INSERT\n  3.EXIT\n Enter the choice:");
    scanf("%d",&choice);
    
        switch(choice){
        case 1:
        printf("Enter the INSERT LIST");
        scanf("%d",&value);
        insert(value);
        break;
        case 2:
        printf("Exit of the porgram");
        break;
        default:
        printf("INVALID CHOICE");
        }
    }
}