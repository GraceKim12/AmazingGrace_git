#include <iostream>
using namespace std;

int main()
{
	int a;
	
	while(true)  //���� ���� 
	{
		cout << "���� �Է�>>";
		cin >> a;  
		
		if(a==0) //0�� �ԷµǸ� while���� ��� 
			break;
			
		if(a%3 != 0)  //a�� 3�� ����̸� true 
		{
			cout << "No" << "\n";
			continue;  //���� �ݺ�. while ������ �б� 
		 } 
		cout << "Yes" << "\n";
	}
}
