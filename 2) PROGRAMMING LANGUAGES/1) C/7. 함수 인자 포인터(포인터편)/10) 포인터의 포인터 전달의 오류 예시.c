#include <stdio.h>

void alloc_array(int *arr, int size, int value)
{
	int i;
	arr = (int*)malloc(size * sizeof(int));
	if(arr != NULL)
	{
		for(i=0; i<size; i++)
			arr[i] = value;
	}
 }
 
void main()
{
	int *vector = NULL;
	alloc_array(&vector, 5, 45);
	printf("%p\n", vector);
	free(vector);
 } 
