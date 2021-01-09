#include <iostream>
using namespace std;

class Circle {  //클래스 선언부  
public:
	int radius; //변수  
	Circle();  //생성자  
	Circle(int r);  //생성자  
	~Circle();  //소멸자 선언   
	double getArea();  //함수  
}; 
//구현부  
Circle::Circle() {  
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
} 

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
} 
//소멸자 구현 
Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl; 
}
//함수 구현 
double Circle::getArea() {
	return 3.14*radius*radius;
}
//전역 객체 생성  
Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	//지역 객체 생성  
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	//지역 객체 생성  
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}
