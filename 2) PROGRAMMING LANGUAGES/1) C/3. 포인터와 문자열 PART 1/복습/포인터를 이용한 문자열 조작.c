#include <stdio.h>

void main()
{
	char *string;
	string = "hope";
	int i;
	printf("%c\n", *(string+0));
	printf("%c\n", *(string+1));
	printf("%c\n", *(string+2));
	printf("%c\n", *(string+3));
	
	printf("%s\n", string); //���ڿ� ��� 
	puts(string);  //���ڿ� ���  
	printf(string);  
	printf("\n");
	
	for(i=0; string[i]!='\0'; i++) // 0�� �ƴҶ�����=0�� �Ǹ� ��ž  
		printf("%c\n", string[i]);
		
	for(;*string;string++)  //ó�� �ʱ�� ����: ù�ּ�, *�϶����� *!=\n 
		printf("%c\n", *string); //�������  
}
