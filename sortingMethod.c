#include <stdio.h>

void bubbleSort(int *arr){
    unsigned int size = sizeof(arr)+1;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
               arr[j] = arr[j] + arr[j+1] - (arr[j+1] = arr[j]);
            }
        }
    }
}

void selctionSort(int *arr){
    unsigned int size = sizeof(arr)+1;
    for(int i=0; i<size; i++){
        int min = i;
        for(int j=i; j<size; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        arr[min] = arr[i] + arr[min] - (arr[i] = arr[min]);
    }
}

void show(int *arr){
    unsigned int size = sizeof(arr)+1;
    printf("\n[");
    for(int i=0; i<size; i++){
        if(i==size-1){
            printf("%d]",arr[i]);
        }else{
            printf("%d, ",arr[i]);
        }
    }
}

int main(){
    int size;
    printf("\nEnter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("\nEnter Element: ");
        scanf("%d",&arr[i]);
    }

    printf("\nUnsorted Array");
    show(arr);

    selctionSort(arr);
    printf("\nSorted Array");
    show(arr);
    return 0;
}