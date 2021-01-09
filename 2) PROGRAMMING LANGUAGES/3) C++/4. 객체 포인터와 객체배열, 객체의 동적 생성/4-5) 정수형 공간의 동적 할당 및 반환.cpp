#include <iostream>
using namespace std;

int main() {
	int *p;
	
	p = new int;  //데이터 타입의 크기만큼 힙으로부터 메모리를 할당받고 주소 리턴  
	if(!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0; 
	}
	
	*p = 5;
	int n = *p;
	cout << "*p= " << *p << endl;
	cout << "n = " << n << endl;
	
	delete p;
} 
