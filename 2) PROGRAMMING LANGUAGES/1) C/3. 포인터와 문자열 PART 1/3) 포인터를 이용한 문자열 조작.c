#include <stdio.h>

void main(){
	char *string;  //���ڿ� ������ ���� 
	string = "hope";  //���ڿ� ������ ����  
	
	printf("%c\n", *(string+0));
	printf("%c\n", *(string+1));
	printf("%c\n", *(string+2));
	printf("%c\n", *(string+3));
	
	printf("%s\n", string); //�ּҸ� ������ ����_�䷸�� ���⸦ ��õ.  
	puts(string); //�����ǹ�? s ���ڿ� ��� �Լ�_ù�ּҸ� �˷��ָ�� 
	printf(string); //���������� �� �Ⱦ�  
	printf("\n"); 
	
	for(;*string;string++){  //���۰��̹����� ù�ּ�_? ���Ǿ���; �� ��ġ�� �̵� 
		printf("%c\n", *string); //����� 
	}
}  

//[]=>* 
//���ϳ��� ���ȣ �ϳ�
// 
