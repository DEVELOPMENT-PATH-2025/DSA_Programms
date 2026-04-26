#include <stdio.h>
int main(){
    int arr[10]={10,20,30,10,50,60,70,10,90,100},search,occrCount=0;
    printf("Enter an element to search: ");
    scanf("%d",&search);
    for(int i=0; i<10; i++){
        if(search==arr[i]){
            printf("\nFound at %d",i+1);
            occrCount+=1;
        }
    }
    if(occrCount=0){
        printf("\nSearch element is not found.");
    }else{
        printf("\nTotal number of Occurance: %d",occrCount);
    }
}