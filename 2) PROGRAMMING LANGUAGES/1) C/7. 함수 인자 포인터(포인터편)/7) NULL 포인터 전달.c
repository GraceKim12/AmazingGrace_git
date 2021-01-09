#include <stdio.h>

int* alloc_array(int *arr, int size, int value)
{
	int i;
	if(arr != NULL)  //포인터 사용 전 널 여부 검사 필요 
	{
		for(i=0; i<size; i++)
			arr[i] = value;
	}
	return arr;
}

void main()
{
	int i;
	int *vector = (int*)malloc(5*sizeof(int));
	alloc_array(vector, 5, 45);
	free(vector);
}
 
