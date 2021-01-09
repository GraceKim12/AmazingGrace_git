#include <stdio.h>

void main()
{
	int one, *two, **three;
	
	one=1;  //일반변수에 데이터 대입 
	two=&one;//포인터 일반변수 가리킴 주소저장 
	three=&two;//포인터를 가리키는 이중포인터 포인터의 주소저장  
 } 
