#include <stdio.h>
#include <string.h>

/*
void main()
{
	int i;
	char src[10] = "science";   //*str ���������̾��. 
	char dest[10];  //�����ͷ� strcopy�ȵ�!!!!!! 
	
//	dest = src; //�迭�� ����� �ٲٸ� �ȴ� �ּҺ���õ��Ҽ�����. 
	
	for (i=0; i <= strlen(src); i++) //���ڿ��� ���̸�ŭ �����ϰڴ�.  
		dest[i] = src[i];			 //���ڿ��� �� �α��� ������  
		
	strcpy(dest, src);
	
	printf("%s %s\n", dest, src);
} 
*/

void main()
{
	int i;
	char *src = "science";   //*str ���������̾��. _������� �迭�̴� �������̴� 
	char dest[10];  //�����ͷ� strcopy�ȵ�!!!!!!_�޸𸮰��� �Ҵ����־�� �� �̸�!  
//	char *dest; 
	
	for (i=0; i <= strlen(src); i++) //���ڿ��� ���̸�ŭ �����ϰڴ�.  
		dest[i] = src[i];			 //���ڿ��� �� �α��� ������  
		
	strcpy(dest, src);
	
	printf("%s %s\n", dest, src);
} 
