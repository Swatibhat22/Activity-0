#include <stdio.h>
#include <stdlib.h>
typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;
struct DNode *head= NULL;
void insertBegin(){
    struct DNode *newNode = (struct DNode*)malloc(sizeof(struct DNode));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertEnd(){
    struct DNode *newNode = (struct DNode*)malloc(sizeof(struct DNode));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    struct DNode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertBetween(){
    struct DNode *newNode = (struct DNode*)malloc(sizeof(struct DNode));
    int pos,i;
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos<1){
        printf("Invalid position\n");
        return;

    }
    if(pos==1){
        insertBegin();
        return;
    }
    struct DNode *temp = head;
    i=1;
    while(i<pos-1 && temp!=NULL){
        temp=temp->next;
        i++;
    }
    if(temp==NULL){
        printf("Position out of bounds\n");
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void display(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is empty\n");
        return;

    }
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    
}