#include <stdio.h>

void main(){  //포인터의 포인터란 가리키는 대상이 포인터인 포인터 변수  
	char *str[3], **strpp;
	
	str[0] = "my";
	str[1] = "good";
	str[2] = "friend";
	
	strpp = str;  //str은 포인터임_ 포인터를 가르키는 포인터! strpp! 
}  
