#include <stdio.h>

void Do(int *arr1){
    if((sizeof(arr1[0])/sizeof(int))==(sizeof(arr1)/sizeof(int))){
        printf("%d",*arr1);
    }else{
        printf("%d",*arr1);
        Do(*arr1+1);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    Do(&arr);
}