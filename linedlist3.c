#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode;
    int choice = 1;

    while (choice) {
        newnode = malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter the number for the list: ");
        scanf("%d", &newnode->data);
        newnode->link = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;  // Initialize temp for first node
        } else {
            temp->link = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
    }

    // Displaying the list
    temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

    return 0;
}