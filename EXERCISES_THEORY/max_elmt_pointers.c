//largest element in the array using pointer and memory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
    int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) printf("\nMemory not allocated.\n");
	else 
    {
		printf("\nMemory successfully allocated using malloc.\n");
		for (int i = 0; i < n; ++i) 
        {
            int input;
            printf("\nEnter element:"); scanf("%d",&input);
			ptr[i] = input;
		}
    }
	int *max;
	max = ptr;
	for (int i=0;i<n;i++)
	{
		if (*(ptr+i) > *max)
		{
			*max = *(ptr+i);
		}
	}
	printf("\nMaximum element in the array:%d",*max);
	free(ptr);
	printf("\nMalloc memory cleared successfully.");
}
