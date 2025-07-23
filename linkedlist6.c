#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *head =NULL;
void insert(int value){
    struct node *newnode =malloc(sizeof(struct node));
    newnode->data=value;
    newnode->link=NULL;
    if(head == NULL){
        head = newnode;
    }
    else {
    struct node *temp;
    temp=head;
    while(temp->temp!=NULL){
        temp = temp->link;

    }
 }
}
void displys(int display){
struct node *temp;
if(head ==NULL){
    printf("lsit is empty");
    return;
}
head = temp;
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->data;
}
}
int main(){
    int value,position,data,display,choice;
    printf("enter the choic");
    scanf("%d",&choice);
    while(1){
        switch(choice){
            case 1:
            printf("enter the insert data");
            scanf("%d",&value);
            insert(value);
            break;
            case 2:
            printf("enter the display option");
            scanf("%d",display);
            displys(display);
            break;
            default:
            printf("invlaide input");

        }
    }

}