#include <stdio.h>

void main()
{
	char *str = "love";  //str ���ڿ� ������ 
	void *vp;			//void �� ������ 
	
	vp =str;
	puts((char*)vp);  //vp ���ڿ� ���  
	
	for(;*(char*)vp;(char*)vp++)  //���Ǿ��� vp����  �ϳ��� ���� 
		printf("%c\n", *(char*)vp);  //
 } 
