#include <stdio.h>

//�����Ͱ� ������ �޸� ������ ��� ����Ű�� ���� �� �̷��� �����͸� ��۸� �����Ͷ�� �� 

void main(){
	int *ip = (int*)malloc(sizeof(int));
	*ip=5;
	printf("*ip: %d\n", *ip);
	free(ip);
	*ip=10;  //����  
} 

/*
void main()
{
	int *p1 = (int*)malloc(sizeof(int));
	int *p2;
	*ip = 5;
	p2 = p1;
	free(p1);
	*p2 = 10;  //��۸� ������  
}
*/

