#include <iostream> 
using namespace std;

//두 개의 정수를 받아 큰 값을 리턴하는 함수 

int bigger(int a, int b)
{
	if(a>b) return a;  //a가 크면 a 반환 
	else return b;		//작으면 b반환 
}

//매개 변수 n이 3으로 나누어지면 true, 아니면 false를 리턴하는 함수 
bool dividedBy3(int n)
{
	if(n%3 == 0) return true;
	else return false;
 } 
 
int main()
{
	int a, b, n;
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;
	n = bigger(a, b); //(1) 함수bigger() 호출 
	cout << a << "중 " << b << "중 큰 값은 " << n << "입니다.\n";
	
	if(dividedBy3(n)) //(2) n이 3의 배수이면
		cout << n << "은 " << "3의 배수입니다.\n";
	else 
		cout << n << "은 " << "3의 배수가 아닙니다.\n"; 
}

/*
함수 작성과 호출시 주의할 점(리턴타입) 
-아무값도 리턴하지 않으면 리턴타입을 void로 선언
-호출시 리턴타입 주의
-호출시 매개 변수 개수와 타입 주의 
 : 반드시 함수에 선언된 매개 변수의 개수만큼 값을 전달해야함  
   또한 함수의 매개 변수 타입과 다른 타입을 전달하면 오류 발생  
*/
