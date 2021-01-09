#include <iostream>
using namespace std;

class Rectangle{  //클래스 선언부  
public:
	int width, height;  //너비와 높이 변수
	Rectangle();  //생성자  
	Rectangle(int w, int h);  //생성자  
	Rectangle(int length);  //생성자  
	bool isSquare();  //함수  
}; 

Rectangle::Rectangle() {
	width = height = 1;
} 

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

bool Rectangle::isSquare(){
	if(width == height) return true;
	else return false;
}

int main() {
	//3개의 생성자가 필요함 
	Rectangle rect1;  //Rectangle() 호출
	Rectangle rect2(3, 5);  //Rectangle(int w, int h) 호출 
	Rectangle rect3(3);  //Rectangle (int length) 호출
	
	if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
	
}
