#include <stdio.h>
int main(){
    int size;
    printf("\nEnter the size of Array: ");
    scanf("%d",&size);
    int arr[size],srch;
    for(int i=0; i<size;i++){
        printf("\nEnter value [%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to search in Array: ");
    scanf("%d",&srch);
    for(int i=0; i<size; i++){
        if(arr[i]==srch){
            printf("\nFound at position[%d]",i+1);
        }
    }
    printf("\nNot found!!");
}