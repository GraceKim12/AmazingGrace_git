#include <stdio.h>
#include <stdlib.h>

//동적메모리_힙영역~!~!
 
//void*malloc(size_t size);  //stdlib.h 헤더파일
	//왜 void*리턴하나용_
//void free(void*ptr);  //stdlib.h 헤더파일 

void main()
{
	char *cp;
	
	cp = (char*)malloc(1);
	*cp='A';
	
	printf("%c\n", *cp);
	free(cp); 
 } 
 /*
void main()
{
	char *ip;
	
	cp=(int*)malloc(4);
	*ip=500;
	
	printf("%d\n", *ip);
	free(ip);
}
*/

