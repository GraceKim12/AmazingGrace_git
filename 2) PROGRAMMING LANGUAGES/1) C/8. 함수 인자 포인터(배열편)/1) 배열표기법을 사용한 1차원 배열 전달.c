#include <stdio.h>

void display_Array (int arr[],int size)  //������[] 
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


//�迭�� �ѱ�� ���ؼ� �����͸� ����Ѵ�(ù��° �ּ� ����)

 

