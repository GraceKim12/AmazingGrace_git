#include <stdio.h> 

void swap(int *pa, int *pb)
{
	int tmp;
	
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


/*
왜 pa = &pb 식으로 하지않고 *쓰는건지?? 
*/

void main()
{
	int a = 100, b = 200;
	
	printf("[BEFORE] %d %d\n", a, b);
	
	swap(&a, &b);
	
	printf("[AFTER] %d %d\n", a, b);
}

/*
매개변수를 포인터로 받아서 값a, b의 주소를 참조함. 
주소를 통한 직접적인 값변경가능.
*/ 
