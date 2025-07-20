#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *head =NULL;
void insert(int data){
    struct node *head=malloc(sizeof(struct node));
    struct node *temp;
    head->data=value;
    head->link=NULL;
    head =temp;
    while(temp!=0){
        printf("%d",timp->data);
        temp =temp->data;
        
    }
    head->link=head;


}
int main()
{
    int choice,value,position;
    printf("1.insert\n2.delete\n.3.display.4.exit\nenter the choice");
    scanf("%d",&choice);
    switch(choice);
    case 1:
      printf("enter the insert value of the list");
      scanf("%d",&value);
      insert(value);
      break;
    case 2:
      printf("enter the delete the list value");
      scanf("%d",&position);
      delete(position);
      break;
    case 3:
       display();
       break;
    case 4:
        printf("program ended");
        return ;
    default:
        printf("invalide choic");
    
}
