#include <iostream>		//�����ͷ� ���� 2���� ���޹޾� �ٲ�ġ�� �ϴ� �Լ� swap()�� �ۼ�
using namespace std;

bool equal(int* p, int* q);  //�Լ��������� 

int main()
{
	int a=5, b=6;  //������������  
	
	if(equal(&a, &b)) cout << "equal"  << "\n";  //���̶�� =ǥ�� (�ּ�����)  
	else cout << "not equal"  << "\n";	//�ƴϸ� != ǥ��  
 } 
 
 bool equal(int* p, int* q)  //�����ͷ� ����  
 {
 	if(*p == *q) return true;  //���� ���ٸ� �� 
 	else return false;	//�ƴϸ� ���� ��ȯ  
 }
