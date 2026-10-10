#include <stdio.h>
#include <stdlib.h>

// Structure of a node
struct Node {
    int data;
    struct Node *next;
};

// Function to add a node at the end
void add(struct Node **head, int value) {
    struct Node *newNode;
    struct Node *temp;

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Go to last node
    temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to insert a node at a specific position
void insert(struct Node **head, int value, int position) {
    struct Node *newNode;
    struct Node *temp;
    int i;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    // Insert at first position
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    temp = *head;

    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to update a node
void update(struct Node *head, int oldValue, int newValue) {
    struct Node *temp = head;

    while (temp != NULL) {
        if (temp->data == oldValue) {
            temp->data = newValue;
            printf("Node updated successfully!\n");
            return;
        }

        temp = temp->next;
    }

    printf("Value not found!\n");
}

// Function to delete a node
void deleteNode(struct Node **head, int value) {
    struct Node *temp = *head;
    struct Node *prev = NULL;

    // If list is empty
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    // If first node has the value
    if (temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Node deleted successfully!\n");
        return;
    }

    // Search for the value
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // Value not found
    if (temp == NULL) {
        printf("Value not found!\n");
        return;
    }

    // Delete node
    prev->next = temp->next;
    free(temp);

    printf("Node deleted successfully!\n");
}

// Function to display the list
void display(struct Node *head) {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Main function
int main() {
    struct Node *head = NULL;

    int choice;
    int value;
    int position;
    int oldValue;
    int newValue;

    while (1) {
        printf("\n===== SINGLY LINKED LIST =====\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);

                add(&head, value);

                printf("Node added successfully!\n");
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);

                printf("Enter position: ");
                scanf("%d", &position);

                insert(&head, value, position);

                break;

            case 3:
                printf("Enter old value: ");
                scanf("%d", &oldValue);

                printf("Enter new value: ");
                scanf("%d", &newValue);

                update(head, oldValue, newValue);

                break;

            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);

                deleteNode(&head, value);

                break;

            case 5:
                display(head);
                break;

            case 6:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}