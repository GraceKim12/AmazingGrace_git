#include <iostream>
using namespace std;

class Circle {  //Ŭ���� �����  
public:
	int radius; //����  
	Circle();  //������  
	Circle(int r);  //������  
	~Circle();  //�Ҹ��� ����   
	double getArea();  //�Լ�  
}; 
//������  
Circle::Circle() {  
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
} 

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
} 
//�Ҹ��� ���� 
Circle::~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl; 
}
//�Լ� ���� 
double Circle::getArea() {
	return 3.14*radius*radius;
}
//���� ��ü ����  
Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	//���� ��ü ����  
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	//���� ��ü ����  
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}
