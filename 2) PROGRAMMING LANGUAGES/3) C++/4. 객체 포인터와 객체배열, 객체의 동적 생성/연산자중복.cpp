#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int r=0) {radius = r;};
    void show() {cout << "�������� " << radius << "�� ��" << endl;}
    
    Circle operator +(Circle& c ) {
        Circle tmp; // �ӽ� ��ü
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


