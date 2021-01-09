#include <stdio.h>
#include <string.h>

void main()
{
	char *src = "ABCDE";
	char dest[100];  //받는 부분 포인터이면 절대 안됨!!! 
	
	strcpy(dest, src);  
//	dest=src;   //dest가 만약 포인터라면 가능  
	
	printf("%s %s\n", dest, src);
}

//받는부분 무조건 배열이어야함!!!  문자열 함수를 쓰려면 무조건이에용 
//배열사용시 부분 부분 바꿀수있음'' 
