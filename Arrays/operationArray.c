#include <stdio.h>
#define MAX 100

int size;

void show(int *arr){
    // Code for traversal
    printf("[");
    for(int i=0; i<size; i++){
        if(i==size-1){
            printf("%d",arr[i]);
        }else{
            printf("%d,",arr[i]);
        }
    }
    printf("]");
}

void insertOpr(int *arr){
    int element, pos;
    printf("\nEnter an Element to insert:");
    scanf("%d",&element);
    printf("Enter position to insert:");
    scanf("%d",&pos);

    if(pos < 0 || pos > size+1){
        printf("\nInvalid position");
    }else{
        size++;
        for(int i=size; i>=pos; i--){
            arr[i+1] = arr[i];
        }
        arr[pos-1] = element;
        printf("\nElement inserted");
    }
    printf("\nArray after insertion: ");
    show(arr);
}

void deleteOpr(int *arr){
    int pos;
    printf("\nEnter position to delete:");
    scanf("%d",&pos);

    if(pos < 0 || pos >size+1){
        printf("\nInvalid Position");
    }else{
        for(int i=pos-1; i<size; i++){
            arr[i] = arr[i+1];
        }
        size--;
        printf("\nElement Deleted");
    }
    printf("\nArray after deletion: ");
    show(arr);
}

int main(){
    int arr[MAX];
    printf("\nEnter number of elements in Array:");
    scanf("%d",&size);

    for(int i=0; i<size; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    
    show(arr);
    insertOpr(arr);
    deleteOpr(arr);
    return 0;
}