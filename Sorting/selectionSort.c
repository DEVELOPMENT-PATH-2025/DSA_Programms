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

void selectionSort(int *arr){
    for(int i=0; i<size; i++){
        int min = i;
        for(int j=i; j<size; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        printf("\nStep%d: ",i+1);
        show(arr); 
    }
}

int main(){
    int arr[MAX];
    printf("\nEnter size of array: ");
    scanf("%d",&size);

    for(int i=0; i<size; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    printf("\nUnsorted: ");
    show(arr); 
    selectionSort(arr);
    return 0;
}