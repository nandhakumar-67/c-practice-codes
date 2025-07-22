#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *head =NULL;
void insert(int value){
    struct node *temp;
    struct node *newnode =malloc(sizeof(struct node));
    newnode->data =value;
    newnode->link=NULL;
    if(head == NULL){
        printf("list is empty");
        head =newnode;
    }
    temp =head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->link;

    }


}
void display() {
    struct node *temps;
    temps=head;
    if(temps == NULL){
        printf("list is empty");
        return;
    }
    printf("lsit");
    while(temps!=NULL);
    {
        printf("%d",temps->data);
        temps=temps->link;
    }
    printf("NULL\n");
    
}
int main()
{
    int value ,choice;
    while(1){
    printf("enter the choice of the list");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("enter the valdue of insert");
        scanf("%d",&value);
        insert(value);
        break;
        case 2:
        printf("dispaly of the list");
        display();
        break;
    }
}
return 0;

}