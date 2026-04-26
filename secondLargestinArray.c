#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n],temp;
    for(int i=0; i<n; i++){
        printf("Enter value of [%d]:",i+1);
        scanf("%d",&arr[i]);
    }

    int i=0, max = arr[0],sec_max = arr[0];
    while(i<n){
        if(max<arr[i]){
            max = arr[i];
        }
        i++;
    }
    while (i<n)
    {
        if((sec_max<arr[i]) && (sec_max!=max))
        {
            sec_max = arr[i];
        }
        i++;
    }
    
    printf("\nLargest of all is %d",max);
    printf("\nSecond largest of all is %d",sec_max);   
}