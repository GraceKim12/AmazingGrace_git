#include <stdio.h>

void main()
{
	int i;
	
	int *ip;
	
	ip = 0;  //ip=NULL:
	ip = &i;
	*ip = 0;
	
	printf("%d %d\n", i, *ip);
 } 
 
 // 널포인터랑 그냥 포인터랑 뭐가 다른거임? 
 //널포인터의 쓰임? 노드 끝에 쓰임 
