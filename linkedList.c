#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createNode(int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct node *insrtFrnt(struct node *start,int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    struct node *ptr = start;
    if (ptr==NULL){
        printf("\nOVERFLOW");
    }

    newNode->data = data;
    newNode->next = ptr->next;
    ptr->next = newNode;
}

struct node *insrtEnd(struct node *start, int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = start;
    
    while(temp->next!=NULL){
        temp = temp->next;
    }

    newNode->data = data;
    newNode->next = NULL;
    temp->next = newNode;
}

struct node *insrtAtPosition(struct node *start){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = start;

    int pos,data;
    printf("\n\nEnter the position where you want to insert: ");
    scanf("%d",&pos);
    printf("\nEnter the data you want to insert: ");
    scanf("%d",&data);

    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }

    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
}

struct node *delfrnt(struct node *start){
    struct node *temp = start;
    struct node *current = start;
    current = current->next;
    temp->next = current->next;
    free(current);
    current = NULL;     
}

struct node *delend(struct node *start){
    struct node *temp;
    struct node *current = start;
    while(current->next != NULL){
        temp = current;
        current = current->next;
    } 
    temp->next = NULL;
    free(current);
    current = NULL;
}

struct node *delAtPosition(struct node *start){
    struct node *temp;
    struct node *current = start;

    int pos;
    printf("\nEnter the position of element to be deleted: ");
    scanf("%d",&pos);

    for(int i=1; i<=pos-1; i++){
        temp = current;
        current = current->next;
    }  
    temp->next = current->next;
    free(current);
    current = NULL;
}

struct node *printList(struct node *start){
    while(start!=NULL){
        if(start->next==NULL){
            printf("%d",start->data);
        }else{
            printf("%d -->",start->data);
        }
        start = start->next;
    }
}

int main(){
    struct node *head = createNode(100);
    head->next = createNode(200);
    head->next->next = createNode(300);
    head->next->next->next = createNode(400);

    //Linked List Created
    printf("\nLinked List: ");
    printList(head);

    //Insertion at front
    insrtFrnt(head,500);
    printf("\nLinked List after insertion at front: ");
    printList(head);

    //Insertion at end
    insrtEnd(head,600);
    printf("\nLinked List after insertion at end: ");
    printList(head);

    //Insertion at specific postion
    insrtAtPosition(head);
    printf("\nLinked List after insertion at specific position: ");
    printList(head);

    //Deletion at front
    delfrnt(head);
    printf("\nLinked List after deletion at front: ");
    printList(head);

    //Deletion at end
    delend(head);
    printf("\nLinked List after deletion at end: ");
    printList(head);
    
    //Deletion at specific position
    delAtPosition(head);
    printf("\nLinked List after deletion at specific position: ");
    printList(head);
 
    return 0;
}