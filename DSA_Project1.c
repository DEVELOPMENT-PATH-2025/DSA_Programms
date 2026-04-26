#include <stdio.h>
#include <stdlib.h>

// Variable Declaration
#define MAX 100
int size;

// Function Declaration
void arrayOperations();
void linkedListOperations();
void stackOperations();
void queueOperations();
void searchingOperations();
void sortingOperations();
void graphOperations();
void treeOperations();
void bubbleSort(int *arr);


// Utility Functions
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



int main(){
    int choice;
    while(1){
        system("cls");
        printf("\n1 : Arrays");
        printf("\n2 : Linked List");
        printf("\n3 : Stack");
        printf("\n4 : Queue");
        printf("\n5 : Searching");
        printf("\n6 : Sorting");
        printf("\n7 : Graph");
        printf("\n8 : Tree");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            // arrayOperations();
            break;

        case 2:
            // linkedListOperations();
            break;

        case 3:
            // stackOperations();
            break;
        
        case 4:
            // queueOperations();
            break;

        case 5:
            // searchingOperations();
            break;

        case 6:
            sortingOperations();
            break;

        case 7:
            // graphOperations();
            break;

        case 8:
            // treeOperations();
            break;
        
        default:
            printf("\nWorng input, Try Again");
            break;
        }
    }
    

   
    return 0;
}

void sortingOperations(){
    system("cls");
    int choice;
    int arr[MAX];
    printf("\nEnter size of Array");
    scanf("%d",&size);

    for(int i=0; i<size; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    while(1){
        printf("\n\n- SORTING MENU -");
        printf("\n1 : Bubble Sort");
        printf("\n2 : Insertion Sort");
        printf("\n3 : Selection Sort");
        printf("\n4 : Quick Sort");
        printf("\n5 : Merge Sort");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                show(arr);
                bubbleSort(arr);
                break;
        }
    }
}

void bubbleSort(int *arr){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printf("\nStep%d: ",i);
        show(arr);
    }
}