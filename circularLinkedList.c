#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
}

struct node* show(struct node* start){
    struct node* temp = start;
    do
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    } while (temp!=start);
    printf("HEAD\n");    
}


int main(){
    struct node* head;
    head->data = 100;
    head->next = createNode(200);
    head->next->next = createNode(300);
    head->next->next->next = head;

    show(head);
    return 0;
}