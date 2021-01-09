#include <stdio.h>

void alloc_array(int **arr, int size, int value) //�������� �ּҸ� �ޱ����ؼ��� �������� �����ͷ� ���� �� ����.  
{
	int i;
	*arr = (int*)malloc(size * sizeof(int));
	if(*arr != NULL)  //vector�� ����Ŵ *arr 
	{
		for(i=0; i<size; i++)
			*(*arr+i) = value;
	}
}

void main()
{
	int *vector = NULL;  //vector ��������  
	alloc_array(&vector, 5, 45);  //&�Ⱦ��� �����Ͱ� ����, &�����ʹ� �������� �ּ� ����  
	free(vector);  
}

/*
main ������ alloc_array�������� �Դٰ�����.
arr�� �������� vector�� �迭�� ����Ǿ� �ֱ⶧���� ���� �۾��� �ص��������. 
*/
