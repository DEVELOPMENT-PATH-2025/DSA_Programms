#include <stdio.h>

int main(){
    int size;
    printf("\nEnter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("\nEnter Element: ");
        scanf("%d",&arr[i]);
    }

    int lft=0, rt = size-1, md= (lft+rt)/2, target, count=0;
    printf("\nEnter the element to search: ");
    scanf("%d",&target);
    for(int i=0; i<size; i++){
        if(target>arr[md]){
            lft = md+1;
        }else{
            if(target<arr[md]){
                rt = md-1;
            }else{
                count++;
                printf("\nFound at [%d]",i+1);
            }
        }
    }
    if(count==0){
        printf("\nElement not found.");
    }
    return 0;
}