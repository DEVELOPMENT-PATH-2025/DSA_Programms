#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
