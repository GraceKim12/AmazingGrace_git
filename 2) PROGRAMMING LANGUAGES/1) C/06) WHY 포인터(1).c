#include <stdio.h>

void swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
 } 
 
void main(){
	
	int a = 100, b = 200;
	printf("[BEFORE] %d %d\n", a, b);
	swap(a, b);
	printf("[AFTER] %d %d\n", a, b);
}

/*
�����Լ��ȿ����� a, b�� ���������̱⶧���� 
main �Լ��� �ִ� a, b�� ������ ��ġ�� ���Ѵ�. 
*/ 
