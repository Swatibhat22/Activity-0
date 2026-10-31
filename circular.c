#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertBegin() {
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }
}

void insertEnd() {
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = head;
    }
}

void insertPosition() {
    struct node *newnode, *temp;
    int pos, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1) {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1) {
        insertBegin();
        return;
    }

    if (head == NULL) {
        printf("Invalid position\n");
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    if (i != pos - 1) {
        printf("Invalid position\n");
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteBegin() {
    struct node *temp, *last;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;

    if (head->next == head) {
        printf("Deleted node: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    last = head;

    while (last->next != head) {
        last = last->next;
    }

    printf("Deleted node: %d\n", temp->data);
    head = head->next;
    last->next = head;
    free(temp);
}

void deleteEnd() {
    struct node *temp, *prev;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;

    if (head->next == head) {
        printf("Deleted node: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted node: %d\n", temp->data);
    prev->next = head;
    free(temp);
}

void deletePosition() {
    struct node *temp, *prev;
    int pos, i;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1) {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1) {
        deleteBegin();
        return;
    }

    temp = head;

    for (i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (i != pos) {
        printf("Invalid position\n");
        return;
    }

    printf("Deleted node: %d\n", temp->data);
    prev->next = temp->next;
    free(temp);
}

void deleteValue() {
    struct node *temp, *prev;
    int value;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    temp = head;

    if (head->data == value) {
        deleteBegin();
        return;
    }

    prev = head;
    temp = head->next;

    while (temp != head && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == head) {
        printf("Value not found\n");
        return;
    }

    printf("Deleted node: %d\n", temp->data);
    prev->next = temp->next;
    free(temp);
}

void display() {
    struct node *temp;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;

    printf("Circular Linked List: ");

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Circular Singly Linked List ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete by position\n");
        printf("7. Delete by value\n");
        printf("8. Display list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertBegin();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                insertPosition();
                break;

            case 4:
                deleteBegin();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                deletePosition();
                break;

            case 7:
                deleteValue();
                break;

            case 8:
                display();
                break;

            case 9:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 9);

    return 0;
}