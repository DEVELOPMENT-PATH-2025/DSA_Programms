//Write a program that creates two stacks. Populate both the stacks with values. Copy all the elements into a third stack. Display the output stack.
#include <stdio.h>
#include <stdlib.h>
#define Max 3
#define Size 6

int stack1[Max],stack2[Max];
int stack3[Size];
int Top1=-1,Top2=-1,Top3=-1;

void push1(){
    int element;
    if(stack1[Top1]==Max-1){
        printf("\n*******OVERFLOW*******");
    }
    Top1++;
    printf("\nEnter element:");
    scanf("%d",&element);
    stack1[Top1]= element;
}

void push2(){
    int element;
    if(stack2[Top2]==Max-1){
        printf("\n*******OVERFLOW*******");
    }
    Top2++;
    printf("\nEnter element:");
    scanf("%d",&element);
    stack2[Top2]= element;
}

void display1(int ){
    for(int i=0;i<)
}

int main(){
    for(int i=0;i<Max;i++){
        push1();
    }
    return 0;
}