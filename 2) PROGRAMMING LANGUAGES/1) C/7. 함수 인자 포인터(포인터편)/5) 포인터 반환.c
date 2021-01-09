#include <stdio.h>

int* alloc_array(int size, int value)
{
	int i;
	int *arr = (int*)malloc(size * sizeof(int));  //���������� ����  
	//�����޸�_heap ����_����� 
	//heap ���ǿ� �޸𸮰� ������ ����Ҽ� ���� 
	for(i=0; i<size; i++)
		arr[i] = value;
	return arr; //�ּҰ����� 
	//���� return �� ���� �ʴ´ٸ�?
	// 
 } 
 
void main()
{
	int i;
	int *vector = alloc_array(5,45);  //vector�����Ͱ� ����  
	//vector�� arr ����Ŵ  //�ڷ��� ��ġ 
	for(i=0; i<5; i++)
		printf("%d\n", vector[i]);
	free(vector);  //�Ȼ���ҰŸ� �������Ѿ���, �����ڿ��̱⶧��, �׿������� heap ���� �뷮 ���� 
	//free: vector = arr2 //������ ����ä�� �ٸ����� ����Ų�ٸ�? 
	//heap ���ǿ����� ������ ���̰� �ִٰ� ������_�޸� ���� 
}


/*
������ ��ȯ�� �޸� ����
1. �ʱ�ȭ���� ���� �������� ��ȯ(�뷮) 
2. �߸��� �ּҸ� ����Ű�� �������� ��ȯ(�Ǽ�) 
3. ���� ������ ����Ű�� �������� ��ȯ_�߿��� 
4. ��ȯ�� �������� �޸� ���� ����(�޸𸮴���)_�߿��� 
*/
