#include<stdio.h>
int main()
{
    int a[11],element,i,signal=0;
    for(i=0;i<=10;i++)
    {
        printf("Enter element");
        scanf("%d",&a[i]);
    }
    printf("Enter Element you want to search");
    scanf("%d",&element);
    for(i=0;i<=10;i++)
    {
        if(a[i]==element)
        {
        	signal=1;
            break;
        }
    }
    if(signal==1)
    {
        printf("Element present at position: %d",i);
    }
    else
    {
        printf("Element not present");
    }
   printf("\n Element reapated in array = %d",element);
   for(element=1;element<=i;element++)
   {
   	printf("\n Element is reapted times = %d");
   }
   
    return 0;
}

