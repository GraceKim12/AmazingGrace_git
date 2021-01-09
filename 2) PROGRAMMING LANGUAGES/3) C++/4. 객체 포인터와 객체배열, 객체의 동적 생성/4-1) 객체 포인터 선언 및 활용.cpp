#include <iostream>
using namespace std;

class Circle {  //클래스 선언  
	int radius;  
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
}; 

double Circle::getArea() {  //함수 구현부 
	return 3.14*radius*radius;
}

int main() {  //메인함수  
	Circle donut;  //donut 객체 생성  
	Circle pizza(30);  //pizza 객체 생성  
	
	// 객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;  //멤버 함수 접근  
	
	// 객체 포인터로 멤버 접근
	Circle *p;  //객체 포인터 생성  
	p = &donut;  //donut 주소를 가리킴  
	cout << p->getArea() << endl;  //donut의 getArea() 호출 
	cout << (*p).getArea() << endl;  //donut의 getArea() 호출  
	
	p = &pizza;
	cout << p->getArea() << endl; //pizza의 getArea() 호출 
	cout << (*p).getArea() << endl;  //pizza의 getArea() 호출  
}
