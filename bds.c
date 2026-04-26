#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j] + arr[j+1] - (arr[j+1] = arr[j]);
            }
        }
    }
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,size);
    printf("Sorted array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

