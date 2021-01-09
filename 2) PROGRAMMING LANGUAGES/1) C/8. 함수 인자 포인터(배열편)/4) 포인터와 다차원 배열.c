#include <stdio.h>

void main() 
{
	int i, j;
	int matrix[2][5] = {{1,2,3,4,5}, {6,7,8,9,0}};
	int (*pmatrix)[5] = matrix;
	
	printf("%p\n", matrix);
	printf("%p\n", matrix+1);
	
	printf("%d\n", sizeof(matrix[0]));
	
	printf("%p %d\n", matrix[0]+1, *(matrix[0]+1));
 } 
