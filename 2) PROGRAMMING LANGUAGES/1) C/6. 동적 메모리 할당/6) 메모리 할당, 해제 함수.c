#include <stdio.h>
#include <stdlib.h>

//�����޸�_������~!~!
 
//void*malloc(size_t size);  //stdlib.h �������
	//�� void*�����ϳ���_
//void free(void*ptr);  //stdlib.h ������� 

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

