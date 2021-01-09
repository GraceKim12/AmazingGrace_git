#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int r=0) {radius = r;};
    void show() {cout << "반지름이 " << radius << "인 원" << endl;}
    
    Circle operator +(Circle& c ) {
        Circle tmp; // 임시 객체
        tmp.radius = this->radius + c.radius;
        return tmp;
    }
};

int main() {
    Circle x(10), y(5), z;
    x.show();
    y.show();
    z = x + y;
    z.show();
}


