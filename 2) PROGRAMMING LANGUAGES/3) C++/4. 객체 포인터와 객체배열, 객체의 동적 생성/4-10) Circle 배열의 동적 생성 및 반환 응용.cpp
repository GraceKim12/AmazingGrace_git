#include <iostream>
using namespace std;

class Circle {  
	int radius;
public:
	Circle();
	~Circle() { }
	void setRadius(int r) { radius = r; }  //반지름 정해주는 함수  
	double getArea() { return 3.14*radius*radius; }  //면적 계산하는 함수  
};

Circle::Circle() {  //생성자 구현  
	radius = 1;
} 

int main() {  
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n;  //원 개수 입력받기  
	if(n <= 0) return 0; //0보다 작으면 리턴  
		Circle *pArray = new Circle [n];  //포인터=배열객체 동적메모리 할당   
	for(int i=0; i<n; i++) { 
		cout << "원 " << i+1 << ": ";  //프롬프트 출력  
		cin >> radius;  //반지름 입력  
		pArray[i].setRadius(radius);  //각 Circle 객체를 반지름으로 초기화  
	} 
	int count = 0;  //카운트 변수  
	Circle* p = pArray;  //배열 접근  
	for(int i=0; i<n; i++) {
		cout << p->getArea() << ' ';  //면적출력  
		if(p->getArea() >= 100 && p->getArea() <= 200)  //100-200 사이인 원의 개수체크  
			count++;
		p++;
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
	delete [] pArray;  //객체 배열 소멸  
}
