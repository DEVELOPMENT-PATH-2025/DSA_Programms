#include <stdio.h>
#include <stdlib.h>

struct dynArrayStack{
    int top;
    int cap;
    int *arr;
};

struct dynArrayStack *createStack(){
    struct dynArrayStack *s = (struct dynArrayStack*)malloc(sizeof(struct dynArrayStack));
    s->cap = 1;
    s->top = -1;
    s->arr = (int*)malloc(sizeof(int));

    if(!s->arr){
        return NULL;
    }else{
        return s;
    }
}

int main(){
    return 0;
}