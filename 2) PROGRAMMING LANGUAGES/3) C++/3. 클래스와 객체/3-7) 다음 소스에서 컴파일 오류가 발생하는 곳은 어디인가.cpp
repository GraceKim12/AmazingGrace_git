#include <iostream>  //
using namespace std;

class PrivateAccessError { //Ŭ���� �����  
private:  // �ָ�  
	int a;  //����  
	void f();	//�Լ� 
	PrivateAccessError();//������  
public:	  // �ָ�  
	int b;  //����  
	PrivateAccessError(int x);  //������  
	void g();  //�Լ�  
}; 

PrivateAccessError::PrivateAccessError() {  //()������  
	a = 1;
	b = 1; 
}

PrivateAccessError::PrivateAccessError(int x) {  //(int x)������  
	a = x;
	b = x;
} 

void PrivateAccessError::f() {
	a = 5;
	b = 5;
} 

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

int main() {
	PrivateAccessError objA;  //objA ����, () ȣ��  
	//������ PrivateAccessError()�� private �̹Ƿ� main() ���� ȣ���� �� ����.  
	PrivateAccessError objB(100);  //objB(100), (int x) ȣ��    
	objB.a = 10;
	//a�� PrivateAccessErrorŬ������ private ��� �̹Ƿ� main() ���� ������ �� ����.  
	objB.b = 20;
	objb.f();
	//f() �� PrivateAccessError Ŭ������ private ����̹Ƿ� main() ���� ȣ�� �Ҽ� ����  
	objB.g();
}
