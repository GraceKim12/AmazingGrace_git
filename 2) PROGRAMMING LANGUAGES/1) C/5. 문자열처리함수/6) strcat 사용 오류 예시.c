#include <stdio.h>
#include <string.h>

void main()
{
	char *src = "ABCDE";
	char dest[5] = "1234";
	
	strcat(dest, src);
	printf("%s %s\n", src, dest); //오류오류 공간 없음  
}
	
