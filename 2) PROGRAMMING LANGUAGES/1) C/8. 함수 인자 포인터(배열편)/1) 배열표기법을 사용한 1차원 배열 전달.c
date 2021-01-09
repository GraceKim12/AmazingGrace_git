#include <stdio.h>

void display_Array (int arr[],int size)  //일차원[] 
{
	int i;
	for(i=0; i<size; i++)
		printf("%d\n", arr[i]);
		//printf("%d\n", *(arr+i));
 } 
 
void main()
{
	int vector[5] = {1, 2, 3, 4, 5};
	display_Array(vector, 5);
}


//배열을 넘기기 위해서 포인터를 사용한당(첫번째 주소 전달)

 

