#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n],temp;
    for(int i=0; i<n; i++){
        printf("Enter value of [%d]:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("[");
    for (int i = 0; i < n; i++)
    {
        if(i==(n-1)){
            printf("%d",arr[i]);    
        }else{
            printf("%d\t",arr[i]);
        }
    }
    printf("]");
}