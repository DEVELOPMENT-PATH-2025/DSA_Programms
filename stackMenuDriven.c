#include <stdio.h>
#include <stdlib.h>
#define Max_size 5

int top = -1;
int stack[Max_size];

void push(){
    if(top==Max_size){
        printf("\nOVERFLOW");
        return;
    }
    top++;
    int Element;
    printf("\nEnter an element to push: ");
    scanf("%d",&Element);
    stack[top] =  Element;
    printf("\nElement [%d] pushed",stack[top]);
}

void pop(){
     if(stack[top]==-1){
        printf("\nUNDERFLOW");
    }
    int temp = stack[top];
    printf("\nElement [%d] popped",stack[top]);
    stack[top] = 0;
    top--;
}

void show(){
    printf("\n[");
    for(int i=0; i<Max_size; i++){
        if(i==Max_size-1){
            printf("%d",stack[i]);
        }else{
            printf("%d, ",stack[i]);
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
        printf("\n1. PUSH : Insert an element into stack");
        printf("\n2. POP : Delete an element from stack");
        printf("\n3. DISPLAY : Element in stack");
        printf("\n4. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        if(choice==1){
            push();
        }else if(choice==2){
            pop();
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