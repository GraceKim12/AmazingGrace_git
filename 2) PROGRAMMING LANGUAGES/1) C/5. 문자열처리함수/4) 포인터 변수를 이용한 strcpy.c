#include <stdio.h>
#include <string.h>

void main()  //�ȵʾȵ�! 
{
	char *src = "ABCDE";
	char *dest;
	
	strcpy(dest, src);
	
	printf("%s %s\n", dest, src);
	
/*
	dest = (char*)malloc(sizeof(char)*10);  //ex_�������� �л���  
	strcpy(dest, src);
	printf("%s %s\n", dest, src); 
*/	
	
	
}


//���� �̸� �Ҵ�_�����Ͻ� �Ҵ� 
//���� ���� �Ҵ�_����ð��� ũ�⸦ �˼�����_ 
