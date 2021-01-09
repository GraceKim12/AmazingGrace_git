#include <stdio.h>
#include <string.h>

/*
void main()
{
	int i;
	char src[10] = "science";   //*str 포인터형이어도됨. 
	char dest[10];  //포인터로 strcopy안됨!!!!!! 
	
//	dest = src; //배열은 상수값 바꾸면 안댐 주소변경시도할수없음. 
	
	for (i=0; i <= strlen(src); i++) //문자열의 길이만큼 복사하겠다.  
		dest[i] = src[i];			 //문자열의 끝 널까지 복사함  
		
	strcpy(dest, src);
	
	printf("%s %s\n", dest, src);
} 
*/

void main()
{
	int i;
	char *src = "science";   //*str 포인터형이어도됨. _상관없음 배열이던 포인터이던 
	char dest[10];  //포인터로 strcopy안됨!!!!!!_메모리공간 할당해주어야 함 미리!  
//	char *dest; 
	
	for (i=0; i <= strlen(src); i++) //문자열의 길이만큼 복사하겠다.  
		dest[i] = src[i];			 //문자열의 끝 널까지 복사함  
		
	strcpy(dest, src);
	
	printf("%s %s\n", dest, src);
} 
