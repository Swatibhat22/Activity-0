#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;
struct Node *head=NULL;

void insertBegin(){
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data:");
    scanf("%d",&newNode->data);
    newNode->next=head;
    head=newNode;
}
void insertEnd(){
    struct Node *newNode;
    struct Node *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
            if (head == NULL){
                head = newNode;
            }
            else{
                temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newNode;
    }
}
void insertAtPosition(){
    int position;
    struct Node *newNode;
    struct Node *temp=head;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the position:");
    scanf("%d",&position);
    printf("Enter the data:");
    scanf("%d",&newNode->data);
    if(position==1){
        newNode->next=head;
        head=newNode;
    }
    else{
        for(int i=1;i<position-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            printf("Position out of bounds\n");
            free(newNode);
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
}
void display(){
    struct Node *temp=head;
    if(head==NULL){
        printf("Linked list is empty\n");
        return;
    }
    printf("Linked List:");
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    int choice;
    while(1){
    printf("\n1.insertBegin");
    printf("\n2.insertEnd");
    printf("\n3.insertAtPosition");
    printf("\n4.Display ");
    printf("\n5.Exit");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        insertBegin();
        break;
        case 2:
        insertEnd();
        break;
        case 3:
        insertAtPosition();
        break;
        case 4:
        display();
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("Invalid choice\n");
        }
    }
    return 0;
}