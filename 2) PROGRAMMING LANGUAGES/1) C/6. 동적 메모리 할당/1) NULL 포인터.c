#include <stdio.h>

void main()
{
	int i;
	int *ip;
	
	ip=0;  //ip=NULL;  //아무것도 가르키지않고 있는 포인터! //정수 0이 아니라 NULL을 가르키는 0임.  
	ip=&i; //ip는 i의 주소를 가리킴 
	*ip=0; //ip가 가리키고 있는 주소의 값은 0; //정수 0을 가르킴 
	
	printf("%d %d\n", i, *ip);
 } 
 
 //동적 메모리 할당
