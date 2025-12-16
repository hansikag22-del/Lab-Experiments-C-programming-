#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert in the middle
void insertMiddle(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1) {            // Insert at beginning
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Position out of range!\n");
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;     // Insert in middle
    temp->next = newNode;
}

int main() {
    // Creating a simple linked list: 10 -> 20 -> 30 -> NULL
    struct Node *head = NULL, *second = NULL, *third = NULL;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = NULL;

    printf("Original ");
    printList(head);

    int data, pos;
    printf("\nEnter value to insert: ");
    scanf("%d", &data);
    printf("Enter position to insert at: ");
    scanf("%d", &pos);

    insertMiddle(&head, data, pos);

    printf("\nUpdated ");
    printList(head);

    return 0;
}
