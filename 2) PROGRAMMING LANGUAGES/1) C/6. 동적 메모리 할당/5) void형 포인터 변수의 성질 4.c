#include <stdio.h>

void main()
{
	char *str = "love";  //str 문자열 포인터 
	void *vp;			//void 형 포인터 
	
	vp =str;
	puts((char*)vp);  //vp 문자열 출력  
	
	for(;*(char*)vp;(char*)vp++)  //조건없음 vp까지  하나씩 증가 
		printf("%c\n", *(char*)vp);  //
 } 
