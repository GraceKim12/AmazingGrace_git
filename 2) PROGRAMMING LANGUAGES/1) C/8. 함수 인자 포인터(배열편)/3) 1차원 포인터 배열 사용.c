#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	int *arr[5];  //�����͵��� �������ִ� ����=�����͹迭 
	for(i=0; i<5; i++) {
		arr[i] = (int*)malloc(sizeof(int));//�ּ�����_������ �̱� ������ �ּ� ���� �ؾ��� 
		//*(arr+i) = (int*)malloc(sizeof(int));
		*arr[i] = i;
		//**(arr+i) = i;
	}
} 



//malloc_void ������ �� ����.



 
