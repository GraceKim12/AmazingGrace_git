#include <iostream>
using namespace std;

class Circle { //선언부  
public:
	int radius;  //변수  
	Circle();  //생성자  
	Circle(int r);  //생성자  
	~Circle();  //소멸자 선언 
	double getArea();   //함수 
}; 


Circle::Circle() {  //구현부 
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl; 
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {  //소멸자 구현
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 2.14*radius*radius;
} 

int main() {
	Circle donut;  //객체 선언 
	Circle pizza(30);  //객체 선언 
	return 0;   //main() 함수가 종료하면 main() 함수의 스택에 생성된 pizza.donut 객체가 소멸된다.  
} //객체는 생성의 반대순으로 소멸된다.  
