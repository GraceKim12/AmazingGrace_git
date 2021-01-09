#include <iostream>
using namespace std;

class Circle{  //������ 
public:
	int radius;  //����  
	Circle();  //�⺻ ������  
	Circle(int r);  //�Ű� ���� �ִ� ������  
	double getArea();  //�Լ�  
}; 

Circle::Circle(){  //�⺻ ������  
	radius = 1;   //�������� �ʱ�ȭ  
	cout << "������ " << radius << " �� ����" << endl; 
}

Circle::Circle(int r){  //�Ű� ���� �ִ� ������  
	radius = r;  //�������� �ʱ�ȭ  
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea(){  //�Լ� ������  
	return 3.14*radius*radius;  //3.14*������*������  
}

int main(){
	Circle donut;  //Circle(); ȣ��, �Ű� ���� ���� ������ ȣ��  
	double area = donut.getArea();  //area ���� �����ؼ� ���ϵ� ������ ����  
	cout << "donut ������ " << area << endl;
	
	Circle pizza(30);  //Circle(30); ȣ��, �Ű� ���� �ִ� ������ ȣ��. 30�� r�� ���޵� 
	area = pizza.getArea();  //are������ pizza���� ���ϰ� ����  
	cout << "pizza ������ " << area << endl; 
}
