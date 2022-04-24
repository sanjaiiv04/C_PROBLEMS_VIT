//dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr1;
    int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	ptr1 = (int*)malloc(n * sizeof(int)); // malloc - memory allocation
	if (ptr1 == NULL) printf("\nMemory not allocated.\n");
	else 
    {
		printf("\nMemory successfully allocated using malloc.\n");
		printf("\nBefore entering values the allocated memory looks like:");
		for (int i = 0;i < n;i++) printf("%d ",ptr1[i]);
		for (int i = 0; i < n; ++i) 
        {
            int input;printf("\n");
            printf("Enter element:"); scanf("%d",&input);
			ptr1[i] = input;
		}
		printf("\nAfter entering values the allocated memory looks like:");
		for (int i = 0; i < n; ++i) {
			printf("%d ", ptr1[i]);
		}
	}
	free(ptr1);
	printf("\nMalloc Memory freed successfully.");
	
	int *ptr2;
	ptr2 = (int*)calloc(n,sizeof(int)); // calloc - contiguous memory allocation
	if (ptr2==NULL) printf("\nContiguous Memory not allocated.");
	else 
	{
		printf("\nMemory successfully allocated using calloc.\n");
		printf("\nBefore entering values the allocated memory looks like:");
		for (int i = 0;i < n;i++) printf("%d ",ptr2[i]);
		for (int i = 0; i < n; ++i) 
        {
            int input;printf("\n");
            printf("Enter element:"); scanf("%d",&input);
			ptr2[i] = input;
		}
		printf("\nAfter entering values the allocated memory looks like:");
		for (int i = 0; i < n; ++i) {
			printf("%d ", ptr2[i]);
		}
	}
	//realloc-changing the size of the allocated memory during runtime
	//lets use calloc ptr here for the example
	ptr2 = realloc(ptr2,(n+2)*sizeof(int));
	printf("\nThe calloc memory is reallocated and two more blocks are added:");
	for (int i=0;i<n+2;i++) printf("%d ",ptr2[i]);
	
	//freeing the allocated memory
	free(ptr2);
	printf("\nCalloc memory freed successfully.");

}

