#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList{
    int data;
    struct linkedList *link;
}node;

char ch;
node *create(node *start){
    node *temp,*p;
    ch = 'y';
    if(start!=NULL){
        printf("\nLinked List already exists");
        return(start);
    }
    while ((ch == 'y' || ch == 'Y') && (ch != 'n' || ch != 'N'))
    {
        temp = (node*)malloc(sizeof(node));
        printf("\nEnter Data of node: ");
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(start==NULL){
            p=start=temp;
        }else{
            p->link=temp;
            p=temp;
        }
        fflush(stdin);
        printf("\nDo you want to create more nodes? (y/N):");
        ch = getchar();
    }
    return(start);
}

void print(node *start){
    node *temp;
    for(temp=start; temp!=NULL; temp=temp->link){
        if(temp->link!=NULL){
            printf("%d ->",temp->data);
        }else{
            printf("%d",temp->data);
        }
    }
}

void search(node *start){
    node *temp = start;
    int item,pos=1,count=0;
    printf("\nEnter item to search: ");
    scanf("%d",&item);
    while(temp!=NULL){
        if(temp->data==item){
            printf("\nFound at position[%d]",pos);
            count++;
        }
        temp=temp->link;
        pos++;
    }
    if(count==0)
    {
        printf("\nNot found");
    }else{
        printf("\nElement %d appeared %d times",item,count);
    }
}

int main(){
    node *start;
    start = NULL;
    start = create(start);
    print(start);
    search(start);
    return 0;
}