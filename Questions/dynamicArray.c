//Write a program asks from the user number of countries. Then declare an array called GDP with as much size. Now read and print the Gross Domestic Products of the countries.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *GDP,n;
    printf("\nEnter number of countries: ");
    scanf("%d",&n);

    GDP = (int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        printf("\nEnter GDP of country%d: ",i+1);
        scanf("%d",(GDP+i));
    }

    printf("\n----------OUTPUT----------\n");
    for(int i=0; i<n; i++){
        printf("\nCountry%d GDP: %d",i+1,GDP[i]);
    }
    return 0;
}