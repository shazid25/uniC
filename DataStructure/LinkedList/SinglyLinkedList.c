//Implementation and Traversal of Singly Linked List in C

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next; 
};

int main() {
    struct Node *head = NULL, *newnode, *temp;
    int choice = 1;

    while (choice) {
        newnode = (struct Node*) malloc(sizeof(struct Node));
        if (newnode == NULL) {
            printf("Memory not allocated.\n");
            break;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (1 for Yes / 0 for No)? ");
        scanf("%d", &choice);
    }

    printf("\nLinked List Elements: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
    return 0;
}