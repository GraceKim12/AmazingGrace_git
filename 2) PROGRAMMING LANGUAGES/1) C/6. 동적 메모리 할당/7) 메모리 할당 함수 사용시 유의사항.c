#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *ip = (int*)malloc(sizeof(int)); //sizeof 연산자 사용하는것이 훨씬 좋음   
	if(ip != NULL){
		//메모리 할당 성공 
	}
	else {
		//메모리 할당 실패  
	}
 } 
