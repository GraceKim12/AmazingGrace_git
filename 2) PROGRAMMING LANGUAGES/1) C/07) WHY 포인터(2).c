#include <stdio.h> 

void swap(int *pa, int *pb)
{
	int tmp;
	
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


/*
�� pa = &pb ������ �����ʰ� *���°���?? 
*/

void main()
{
	int a = 100, b = 200;
	
	printf("[BEFORE] %d %d\n", a, b);
	
	swap(&a, &b);
	
	printf("[AFTER] %d %d\n", a, b);
}

/*
�Ű������� �����ͷ� �޾Ƽ� ��a, b�� �ּҸ� ������. 
�ּҸ� ���� �������� �����氡��.
*/ 
