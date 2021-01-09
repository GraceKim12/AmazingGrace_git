#include <iostream>
using namespace std;

class Circle{  //구현부 
public:
	int radius;  //변수  
	Circle();  //기본 생성자  
	Circle(int r);  //매개 변수 있는 생성자  
	double getArea();  //함수  
}; 

Circle::Circle(){  //기본 생성자  
	radius = 1;   //반지름값 초기화  
	cout << "반지름 " << radius << " 원 생성" << endl; 
}

Circle::Circle(int r){  //매개 변수 있는 생성자  
	radius = r;  //반지름값 초기화  
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea(){  //함수 구현부  
	return 3.14*radius*radius;  //3.14*반지름*반지름  
}

int main(){
	Circle donut;  //Circle(); 호출, 매개 변수 없는 생성자 호출  
	double area = donut.getArea();  //area 변수 선언해서 리턴된 면적값 대입  
	cout << "donut 면적은 " << area << endl;
	
	Circle pizza(30);  //Circle(30); 호출, 매개 변수 있는 생성자 호출. 30이 r에 전달됨 
	area = pizza.getArea();  //are변수에 pizza면적 리턴값 대입  
	cout << "pizza 면적은 " << area << endl; 
}
