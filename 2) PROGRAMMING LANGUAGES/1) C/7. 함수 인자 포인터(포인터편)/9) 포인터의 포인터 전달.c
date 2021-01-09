#include <stdio.h>

void alloc_array(int **arr, int size, int value) //포인터의 주소를 받기위해서는 포인터의 포인터로 받을 수 있음.  
{
	int i;
	*arr = (int*)malloc(size * sizeof(int));
	if(*arr != NULL)  //vector를 가리킴 *arr 
	{
		for(i=0; i<size; i++)
			*(*arr+i) = value;
	}
}

void main()
{
	int *vector = NULL;  //vector 널포인터  
	alloc_array(&vector, 5, 45);  //&안쓰면 포인터가 전달, &포인터는 포인터의 주소 전달  
	free(vector);  
}

/*
main 공간과 alloc_array공간에서 왔다갔다함.
arr이 없어져도 vector와 배열이 연결되어 있기때문에 무언가 작업을 해도상관없음. 
*/
