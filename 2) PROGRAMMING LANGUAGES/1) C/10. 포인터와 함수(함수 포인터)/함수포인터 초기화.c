#include <stdio.h>

int square(int num) 
{
	return num*num;
}

void main()
{
	int n = 5;
	int (*fptr) (int);
	fptr = square;
	printf=("%d squared is %d\n", fptr(n));
}

//�Լ����� �� �ּ���_�迭�̸��̶� �Ȱ���(�迭�̸�=�ּ�)
 
