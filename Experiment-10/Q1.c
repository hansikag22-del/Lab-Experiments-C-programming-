#include <stdio.h>
#include <stdlib.h>

// Structure for each node of the linked list
struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *second = NULL, *third = NULL;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and link nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;  // Last node

    // Print the linked list
    struct Node* temp = head;
    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
