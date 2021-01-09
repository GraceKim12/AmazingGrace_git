#include <iostream>
using namespace std;

class Circle{  //Circle 선언부 
public:
	int radius;
	double getArea();	
};

double Circle::getArea(){  //Circle 구현부 
	return 3.14*radius*radius;
}

int main()
{
	Circle donut; //객체 donut 생성  
	donut.radius=1; //donut의 멤버 변수 접근, donut 객체의 반지름을 1로 설정  
	double area = donut.getArea();  //donut의 멤버함수 호출, donut 객체의 면적 알아내기 
	cout << "donut 면적은 " << area << endl;

	Circle pizza;  //pizza 객체 생성  
	pizza.radius = 30; // pizza의 멤버 변수 접근, 객체의 반지름을 30으로 설정  
	area = pizza.getArea();  //pizza의 멤버 함수 호출, 객체의 면적 알아내기  
	cout << "pizza 면적은 " << area << endl; 
}

