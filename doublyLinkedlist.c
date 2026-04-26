#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
};

struct Node *createNode(int newData){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL; 
    newNode->prev = NULL;
    return newNode;   
}

struct Node *insertNode(struct Node *head,int newData){
    struct Node *newNode = createNode(newData);

    if (head==NULL){
        return newNode;
    }

    struct Node *temp;
    temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    return temp; 
}

void listPrint(struct Node *Node){
    while(Node->next!= NULL){
        printf("%d",Node->data);
        printf(" --> ");
        Node = Node->next;

    }
}

int main(){
    struct Node *head = createNode(100);
    head->next = insertNode(head,200);
    listPrint(head);
    return 0;
}