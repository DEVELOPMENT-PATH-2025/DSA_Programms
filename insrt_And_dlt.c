#include <stdio.h>

int main(){
    int size;
    printf("\nEnter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("\nEnter value[%d]",i);
        scanf("%d",&arr[i]);
    }

     int pos,element;
    printf("\nEnter position to insert: ");
    scanf("%d",&pos);

    for(int i=size; i>pos-1; i--){
        arr[i] = arr[i-1];
    }
    printf("\nEnter element to insert: ");
    scanf("%d",&element);
    arr[pos-1] = element;

    for(int j=0; j<size; j++){
        printf("\t%d",arr[j]);
    }

    printf("\nEnter position to delete: ");
    scanf("%d",&pos);
 
    for(int i=pos-1;i<size; i++){
        arr[i] = arr[i+1];
    }

    for(int j=0; j<size; j++){
        printf("\t%d",arr[j]);
    }

    return 0;
}