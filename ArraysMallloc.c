#include <stdio.h>
#include <stdlib.h>

int main()	
{
	int n, i;
	printf("Enter the number of elements to be stored\n");
	scanf("%d",&n);
	
	int *ptr = (int*) malloc(n * sizeof(int));
	
	printf("\nEnter the elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
	}
	
	printf("\nThe elements in the array are:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\n", * (ptr + i));
	}
	free(ptr);
	ptr=NULL;
	
	return 0;
	
}
