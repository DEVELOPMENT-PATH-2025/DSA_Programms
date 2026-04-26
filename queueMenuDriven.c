    #include <stdio.h>
#include <stdlib.h>
#define Max_size 5

int front = -1,rear = -1;
int queue[Max_size];

void enqueue(){
    if(rear==Max_size-1){
        printf("\nQUEUE IS FULL");
        return;
    }
    else if (front==-1)
    {
        front++;
    }
    rear++;
    int Element;
    printf("\nEnter an element to push: ");
    scanf("%d",&Element);
    queue[rear] = Element;
}

void dequeue(){
    if(front==-1){
        printf("\nUNDERFLOW");
    }

    front++;
    int temp = queue[front];
    queue[front] = 0;
}
void show(){
    printf("\n[");
    for(int i=0; i<Max_size; i++){
        if(i==Max_size-1){
            printf("%d",queue[i]);
        }else{
            printf("%d, ",queue[i]);
        }
    }
    printf("]");
}

int main(){
    int choice;
    char loop = 'y';
    while ((loop == 'y' || loop == 'Y') && (loop != 'n' || loop != 'N'))
    {
        printf("\n\t\tSTACK\n==================================");
        printf("\n1. ENQUEUE : Insert an element into queue");
        printf("\n2. DEQUEUE : Delete an element from queue");
        printf("\n3. DISPLAY : Element in queue");
        printf("\n4. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

         if(choice==1){
            enqueue();
        }else if(choice==2){
            dequeue();
        }else if (choice==3){
            show();
        }else if(choice==4){
            exit(0);
        }else{
            printf("\nWrong input!! Try Again");
        }
        
        printf("\nDo you want to continue? [y/N]:");
        scanf(" %c",&loop);
    }
    return 0;
}