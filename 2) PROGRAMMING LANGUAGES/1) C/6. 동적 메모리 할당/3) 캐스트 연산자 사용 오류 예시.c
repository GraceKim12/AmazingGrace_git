#include <stdio.h>

void main()
{
	int p=5;
	void *pp;
	
	pp=&p;
//	printf("%f\n", *(float*)pp);  //�� Ʋ���� 
//	printf("%d\n", *pp);	//ĳ��Ʈ ������ ����.  
	printf("%d\n", *(int*)pp);
}
