#include <stdio.h>
#include <string.h>

void main()
{
	char *src = "ABCDE";
	char dest[100];  //�޴� �κ� �������̸� ���� �ȵ�!!! 
	
	strcpy(dest, src);  
//	dest=src;   //dest�� ���� �����Ͷ�� ����  
	
	printf("%s %s\n", dest, src);
}

//�޴ºκ� ������ �迭�̾����!!!  ���ڿ� �Լ��� ������ �������̿��� 
//�迭���� �κ� �κ� �ٲܼ�����'' 
