#include <stdio.h>

void display_2DArray(int arr[][5], int rows)  //´ÙÂ÷¿ø[][] 
{					//int *(arr)[5]
	int i, j;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d\n", arr[i][j]);
			//*(arr[i]+j) 
		}
	}
 } 
 
void main()
{
	int matrix[2][5] = {{1,2,3,4,5}, {6,7,8,9,0}};
	display_2DArray(matrix, 2);
}
