#include <stdio.h>

void main(){
	char *string;  //문자열 포인터 선언 
	string = "hope";  //문자열 포인터 정의  
	
	printf("%c\n", *(string+0));
	printf("%c\n", *(string+1));
	printf("%c\n", *(string+2));
	printf("%c\n", *(string+3));
	
	printf("%s\n", string); //주소를 가지고 있음_요렇게 쓰기를 추천.  
	puts(string); //무슨의미? s 문자열 출력 함수_첫주소만 알려주면됨 
	printf(string); //쓸수있지만 잘 안씀  
	printf("\n"); 
	
	for(;*string;string++){  //시작값이미있음 첫주소_? 조건없음; 걍 위치만 이동 
		printf("%c\n", *string); //값출력 
	}
}  

//[]=>* 
//별하나는 대괄호 하나
// 
