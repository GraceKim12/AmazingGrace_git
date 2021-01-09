#include <stdio.h>

int* alloc_array(int size, int value)
{
	int i;
	int arr[size];  //지역변수는alloc_array와 같은 영역에있음//만약 포인터라면 서로  다른 heap 영역에 있어서 vector가 가르킬수있지만
	//지역변수는 불가 vector가 가리킬수없음.
	//정확히는 가리킬수는있지만 내용이 없음. 스택 섹션에서 alloc_array가 사라질때 같이 사라지기 때문  
	for(i=0; i<size; i++)
		arr[i] = value;
	return arr;
 } 
 
void main()
{
	int i;
	int *vector = alloc_array(5,45);
	for(i=0; i<5; i++)
		printf("%d\n", vector[i]);
	free(vector);
}
