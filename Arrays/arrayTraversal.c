#include <stdio.h>

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

int main(){
    printf("\nEnter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("\nEnter element:");
        scanf("%d",&arr[i]);
    }

    show(arr);
    return 0;
}