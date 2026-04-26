#include <stdio.h>

int top = -1;
const int Max_size = 5;
int stack[5];

void push(){
    if(stack[top]==Max_size-1){
        printf("\nOVERFLOW");
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

int main(){
    push();
    push();
    push();
    push();
    push();
    printf("\n[");
    for(int i=0; i<Max_size; i++){
        if(i==Max_size-1){
            printf("%d",stack[i]);
        }else{
            printf("%d, ",stack[i]);
        }
    }
    printf("]");
    pop();
    pop();
    pop();
    pop();
    pop();
    printf("\n[");
    for(int i=0; i<Max_size; i++){
        if(i==Max_size-1){
            printf("%d",stack[i]);
        }else{
            printf("%d, ",stack[i]);
        }
    }
    printf("]");
    return 0;
}