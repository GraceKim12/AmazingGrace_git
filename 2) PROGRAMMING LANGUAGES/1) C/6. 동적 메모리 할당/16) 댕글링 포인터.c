#include <stdio.h>

//포인터가 해제된 메모리 영역을 계속 가리키고 있을 떄 이러한 포인터를 댕글링 포인터라고 함 

void main(){
	int *ip = (int*)malloc(sizeof(int));
	*ip=5;
	printf("*ip: %d\n", *ip);
	free(ip);
	*ip=10;  //가능  
} 

/*
void main()
{
	int *p1 = (int*)malloc(sizeof(int));
	int *p2;
	*ip = 5;
	p2 = p1;
	free(p1);
	*p2 = 10;  //댕글링 포인터  
}
*/

