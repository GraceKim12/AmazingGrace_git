#include <stdio.h>

void main()
{
	char *string = "hope"; //첫주소를 가리키지만 부분접근 안됨_문자열상수  
	
	*string = 'T';
	puts(string);
	//putchar(*string);
}

//5번부터 다시듣기
 
