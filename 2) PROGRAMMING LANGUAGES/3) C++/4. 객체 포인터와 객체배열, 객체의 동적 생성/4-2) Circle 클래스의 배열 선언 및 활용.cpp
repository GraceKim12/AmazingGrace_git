#include <iostream>
using namespace std;

class Circle {  //클래스 선언  
	int radius;  //변수  
public:
	Circle() { radius = 1;}  //생성자  
	Circle(int r) { radius = r; }  //생성자  
	void setRadius(int r) { radius = r; }  //함수  
	double getArea();  //함수  
}; 

double Circle::getArea() {  //함수 구현  
	return 3.14*radius*radius;
}

int main() {
	Circle circleArray[3];  //Circle 객체 배열 생성  
	
	//배열의 각 원소 객체의 멤버 접근 
	circleArray[0].setRadius(10); 
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
	
	for(int i=0; i<3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
		 	
	Circle *p;  //객체 포인터  
	p=circleArray;  //접근 
	for(int i=0; i<3; i++) {
		cout <<"Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++; 
	}
}
