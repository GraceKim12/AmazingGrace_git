#include <stdio.h>

void passing_constants(const int *num1, int *num2)  //�����������_��������ָ� ������ ����  
{
	*num2 = *num1;
	*num1 = 100;	//�Ű������� ��������ָ� �ٲ�/ �������־��⶧���� ������ �ȵ� 
	*num2 = 200;
 } 
 
void main()
{
	const int limit = 100;  //�������_�ٲٸ� �ȵ� 
	int result = 5;			
	passing_constants(&limit, &result);
}
