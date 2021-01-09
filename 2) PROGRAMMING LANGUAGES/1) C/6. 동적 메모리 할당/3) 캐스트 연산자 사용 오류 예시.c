#include <stdio.h>

void main()
{
	int p=5;
	void *pp;
	
	pp=&p;
//	printf("%f\n", *(float*)pp);  //형 틀렸음 
//	printf("%d\n", *pp);	//캐스트 연산자 없음.  
	printf("%d\n", *(int*)pp);
}
