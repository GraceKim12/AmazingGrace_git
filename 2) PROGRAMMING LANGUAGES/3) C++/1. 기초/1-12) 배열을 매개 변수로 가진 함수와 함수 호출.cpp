#include <iostream>
using namespace std;

int addArray(int a[], int size);  //�Լ����� ���� 
void makeDouble(int a[], int size); //�Լ����� ���� 
void printArray(int a[], int size);  //�Լ����� ���� 

int main()
{
	int n[] = {1, 2, 3, 4, 5};  //int n[5]�� �ص��� 
	int sum = addArray(n, 5);  //sum �� addArray�� ��ȯ�� 
	cout << "�迭 n�� ���� " << sum << "�Դϴ�\n";  //��ȯ�����  
	
	makeDouble(n, 5);  //makeȣ��  
	printArray(n, 5);  //printfȣ�� 
}
	
int addArray(int a[], int size)  //�迭�� ������ ���޹޾� ���� �����ϴ� �Լ�  
{
	int i, sum=0;
	for(i=0; i<size; i++)
		sum += a[i];
	return sum;	
}

void makeDouble(int a[], int size)  //�迭�� ���� �� ��� ������Ű�� �Լ�  
{
	int i;
	for(i=0; i<size; i++)  //�迭�ε��� �ϳ��������ϸ鼭 ����  
		a[i] *= 2;  		//i�ε����� �ִ� ���� 2�� ���ؼ� ����  
}

void printArray(int a[], int size)
{
	int i;
	for(i=0; i<size; i++)  //�ϳ��� ����  
		cout << a[i] << ' ';  //���  
	cout << "\n";
}


/*
�Լ�����, �Լ� ������Ÿ��
: ���� ����ó�� �Լ��� ���ĸ� ������ �� 
�����ϴ� ���� 
: �����Ϸ����� �Լ��� ������ �˷��־� �Լ� ȣ�� ������ ��Ȯ���� �Ǵ��ϰ� ���� 
 ȣ��Ǳ� ���� ���� ����Ǿ�餱 
�Լ��� ������ �����ϸ� ���� �Լ��� ��ġ�� ��� �ִ� ȣ�⿡ ������ ���� 
*/


/*
�Ű������� �迭 ����
: �Ҽ�����
*/
