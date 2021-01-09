#include <iostream>
using namespace std;

class Circle {  //Ŭ���� ����  
	int radius;  
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
}; 

double Circle::getArea() {  //�Լ� ������ 
	return 3.14*radius*radius;
}

int main() {  //�����Լ�  
	Circle donut;  //donut ��ü ����  
	Circle pizza(30);  //pizza ��ü ����  
	
	// ��ü �̸����� ��� ����
	cout << donut.getArea() << endl;  //��� �Լ� ����  
	
	// ��ü �����ͷ� ��� ����
	Circle *p;  //��ü ������ ����  
	p = &donut;  //donut �ּҸ� ����Ŵ  
	cout << p->getArea() << endl;  //donut�� getArea() ȣ�� 
	cout << (*p).getArea() << endl;  //donut�� getArea() ȣ��  
	
	p = &pizza;
	cout << p->getArea() << endl; //pizza�� getArea() ȣ�� 
	cout << (*p).getArea() << endl;  //pizza�� getArea() ȣ��  
}
