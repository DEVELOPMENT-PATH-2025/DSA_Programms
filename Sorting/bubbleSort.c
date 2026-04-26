#include <stdio.h>
#define MAX 100

int size;

void show(int *arr){
    
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

void bubbleSort(int *arr){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printf("\nStep%d: ",i);
        show(arr);
    }
}

int main(){
    int arr[MAX];
    printf("\nEnter the size of array: ");
    scanf("%d",&size);

    for(int i=0; i<size; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    printf("\nUnsorted : ");
    show(arr);
    bubbleSort(arr);
    return 0;
}