#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int size); //�Լ���������  

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3, 4, 5};
	
	if(equalArray(a, b, 5))  //�迭 ���� a, b, ���� 5_���̶�� = 
		cout << "arrays equal" << "\n";
	else					//�����̶�� != 
		cout << "arrays not equal" << "\n";
}

bool equalArray(int* p, int* q, int size)	//�ּ�,�ּ�,��������  
{
	int i;
	
	for(i=0; i<size; i++)  //size ��ŭ �ݺ�  
	{
		if(*p != *q)	//p[i] �� q[i]�� ��  
			return false;
		p++;  //���� ���� 
		q++;  //���� ���� 
	}
	return true;
}

/*
�����ʹ� �迭�� �����Ҽ� �ֱ⶧���� ������ ���� �ڵ�� �ۼ����� 

bool equalArray(int* p, int* q, int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		if(p[i] != q[i]) return false; 
	}
}
*/
