#include <iostream>
using namespace std;

class Circle {  
	int radius;
public:
	Circle();
	~Circle() { }
	void setRadius(int r) { radius = r; }  //������ �����ִ� �Լ�  
	double getArea() { return 3.14*radius*radius; }  //���� ����ϴ� �Լ�  
};

Circle::Circle() {  //������ ����  
	radius = 1;
} 

int main() {  
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n, radius;
	cin >> n;  //�� ���� �Է¹ޱ�  
	if(n <= 0) return 0; //0���� ������ ����  
		Circle *pArray = new Circle [n];  //������=�迭��ü �����޸� �Ҵ�   
	for(int i=0; i<n; i++) { 
		cout << "�� " << i+1 << ": ";  //������Ʈ ���  
		cin >> radius;  //������ �Է�  
		pArray[i].setRadius(radius);  //�� Circle ��ü�� ���������� �ʱ�ȭ  
	} 
	int count = 0;  //ī��Ʈ ����  
	Circle* p = pArray;  //�迭 ����  
	for(int i=0; i<n; i++) {
		cout << p->getArea() << ' ';  //�������  
		if(p->getArea() >= 100 && p->getArea() <= 200)  //100-200 ������ ���� ����üũ  
			count++;
		p++;
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;
	delete [] pArray;  //��ü �迭 �Ҹ�  
}
