#include <iostream>
using namespace std;

class Circle{  //Circle ����� 
public:
	int radius;
	double getArea();	
};

double Circle::getArea(){  //Circle ������ 
	return 3.14*radius*radius;
}

int main()
{
	Circle donut; //��ü donut ����  
	donut.radius=1; //donut�� ��� ���� ����, donut ��ü�� �������� 1�� ����  
	double area = donut.getArea();  //donut�� ����Լ� ȣ��, donut ��ü�� ���� �˾Ƴ��� 
	cout << "donut ������ " << area << endl;

	Circle pizza;  //pizza ��ü ����  
	pizza.radius = 30; // pizza�� ��� ���� ����, ��ü�� �������� 30���� ����  
	area = pizza.getArea();  //pizza�� ��� �Լ� ȣ��, ��ü�� ���� �˾Ƴ���  
	cout << "pizza ������ " << area << endl; 
}

