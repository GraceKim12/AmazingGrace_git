#include <stdio.h>
#include <string.h>

void main()  //안됨안됨! 
{
	char *src = "ABCDE";
	char *dest;
	
	strcpy(dest, src);
	
	printf("%s %s\n", dest, src);
	
/*
	dest = (char*)malloc(sizeof(char)*10);  //ex_가변적인 학생수  
	strcpy(dest, src);
	printf("%s %s\n", dest, src); 
*/	
	
	
}


//정적 미리 할당_컴파일시 할당 
//동적 추후 할당_실행시간에 크기를 알수있음_ 
