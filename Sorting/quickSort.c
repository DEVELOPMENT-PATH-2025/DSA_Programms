#include <stdio.h>
#define MAX 100
int size;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

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

int partition(int * arr,int P,int R){
    int x = arr[P];
    int i = P;
    for(int j=i+1; j<R; j++){
        if(arr[j]<=x){
            i = i++;
            swap(&arr[j],&arr[i]);
        }
    } 
    swap(&arr[P],&arr[i]);
    return i;
}

void quickSort(int* arr,int P,int R){
    if(P<R){
        int q = partition(arr,P,R);
        quickSort(arr,P,q-1);
        quickSort(arr,q+1,R);
    }
}

int main(){
    printf("\nEnter size of array: ");
    scanf("%d",&size);
    int arr[MAX];

    for(int i=0; i<size; i++){
        printf("Enter Element [%d]: ",i+1);
        scanf("%d",&arr[i]);
    }

    show(arr);
    quickSort(arr,0,size);
    show(arr);
    return 0;
}