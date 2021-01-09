#include <iostream>		//포인터로 정수 2개를 전달받아 바꿔치기 하는 함수 swap()을 작성
using namespace std;

bool equal(int* p, int* q);  //함수원형선언 

int main()
{
	int a=5, b=6;  //정수변수선언  
	
	if(equal(&a, &b)) cout << "equal"  << "\n";  //참이라면 =표시 (주소전달)  
	else cout << "not equal"  << "\n";	//아니면 != 표시  
 } 
 
 bool equal(int* p, int* q)  //포인터로 받음  
 {
 	if(*p == *q) return true;  //값이 같다면 참 
 	else return false;	//아니면 거짓 반환  
 }
