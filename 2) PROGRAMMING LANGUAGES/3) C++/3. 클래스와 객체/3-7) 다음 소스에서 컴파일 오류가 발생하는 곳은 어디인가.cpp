#include <iostream>  //
using namespace std;

class PrivateAccessError { //클래스 선언부  
private:  // 주목  
	int a;  //변수  
	void f();	//함수 
	PrivateAccessError();//생성자  
public:	  // 주목  
	int b;  //변수  
	PrivateAccessError(int x);  //생성자  
	void g();  //함수  
}; 

PrivateAccessError::PrivateAccessError() {  //()생성자  
	a = 1;
	b = 1; 
}

PrivateAccessError::PrivateAccessError(int x) {  //(int x)생성자  
	a = x;
	b = x;
} 

void PrivateAccessError::f() {
	a = 5;
	b = 5;
} 

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

int main() {
	PrivateAccessError objA;  //objA 생성, () 호출  
	//생성자 PrivateAccessError()는 private 이므로 main() 에서 호출할 수 없다.  
	PrivateAccessError objB(100);  //objB(100), (int x) 호출    
	objB.a = 10;
	//a는 PrivateAccessError클래스의 private 멤버 이므로 main() 에서 접근할 수 없다.  
	objB.b = 20;
	objb.f();
	//f() 는 PrivateAccessError 클래스의 private 멤버이므로 main() 에서 호출 할수 없다  
	objB.g();
}
