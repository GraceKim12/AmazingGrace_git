#include <stdio.h>

void main()
{
	char *str[3], **strpp; //포인터의 포인터, 가리키는 대상이 포인터인 포인터 변수 
	// 포인터들을 다루는 포인터  
	
	str[0] = "my";
	str[1] = "good";
	str[2] = "friend";
	
	strpp = str;
 } 
