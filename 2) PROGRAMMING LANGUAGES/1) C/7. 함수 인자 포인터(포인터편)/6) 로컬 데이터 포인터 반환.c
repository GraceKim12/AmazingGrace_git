#include <stdio.h>

int* alloc_array(int size, int value)
{
	int i;
	int arr[size];  //����������alloc_array�� ���� ����������//���� �����Ͷ�� ����  �ٸ� heap ������ �־ vector�� ����ų��������
	//���������� �Ұ� vector�� ����ų������.
	//��Ȯ���� ����ų���������� ������ ����. ���� ���ǿ��� alloc_array�� ������� ���� ������� ����  
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
