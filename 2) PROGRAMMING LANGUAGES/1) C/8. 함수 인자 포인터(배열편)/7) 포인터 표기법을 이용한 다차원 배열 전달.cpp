#include <stdio.h>

void display_2DArray(int *arr, int rows, int cols) {
	int i, j;
	for(i=0; i<rows; i++)
		for(j=0; j<cols; j++)
			printf("%d\n", *(arr + (i*cols) + j));
} 

void main() 
{
	int matrix[2][5] = {{1,2,3,4,5},{6,7,8,9,0}};
	display_2DArray(&matrix[0][0],2,5);
	
}
