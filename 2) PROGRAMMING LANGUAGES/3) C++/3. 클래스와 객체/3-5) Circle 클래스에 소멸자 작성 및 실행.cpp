#include <iostream>
using namespace std;

class Circle { //�����  
public:
	int radius;  //����  
	Circle();  //������  
	Circle(int r);  //������  
	~Circle();  //�Ҹ��� ���� 
	double getArea();   //�Լ� 
}; 


Circle::Circle() {  //������ 
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl; 
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle() {  //�Ҹ��� ����
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 2.14*radius*radius;
} 

int main() {
	Circle donut;  //��ü ���� 
	Circle pizza(30);  //��ü ���� 
	return 0;   //main() �Լ��� �����ϸ� main() �Լ��� ���ÿ� ������ pizza.donut ��ü�� �Ҹ�ȴ�.  
} //��ü�� ������ �ݴ������ �Ҹ�ȴ�.  
