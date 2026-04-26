#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] > target) {
            return binarySearch(arr, low, mid - 1, target);
        }

        return binarySearch(arr, mid + 1, high, target);
    }

    return -1;
}

int main(){
    int size, target;
    printf("\nEnter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("\nEnter Element: ");
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d",&target);

    int srch_result = binarySearch(arr,0,size-1,target);
    if(srch_result<0){
        printf("\nNot found");
    }else{
        printf("\nFound at [%d] position",srch_result);
    }
    
    return 0;
}