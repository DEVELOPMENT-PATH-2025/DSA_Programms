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

void quickSort();

int main(){
    printf("Enter Size of array: ");
    scanf("%d",&size);
    int arr[MAX];
    for(int i=0; i<size; i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }

    quickSort();
    return 0;
}
