#include <iostream>
using namespace std;

struct StructCircle {  //C++ ����ü ����  
private:
	int radius;
public:
	StructCircle(int r) { radius = r; } //����ü�� ������  
	double getArea();
};

double StructCircle::getArea() { //�Լ� ������  
	return 3.14*radius*radius;
}

int main() {
	StructCircle waffle(3);  //waffle ����  
	cout << "������ " << waffle.getArea() ; 
}
