#include <iostream>   //두 정수를 입력받아 합을 출력하는 코드와 전역 변수와 함수를 다루는 예를 보인다.  
using namespace std;

int g = 20;  //전역변수  

int add(int x, int y)  //전역 함수 
{
	return x+y;  //x와 y의 합을 리턴  
}

int main()
{
	int a, b, sum;  //지역변수  
	
	cout << "두 정수를 입력하세요 >>"; //포롬프트 출력  
	cin >> a >> b;  //두 정수를 읽어 a와 b에 입력  
	
	sum = a + b; 
	
	cout << "합은 " << sum << "\n";  //sum 값 출력_지역변수  
	cout << "합은 " << add(a, b) << "\n";  //add() 함수 호출 결과 출력  
	cout << "전역 변수 g 값은 " << g;  //g 값 출력_전역변수  
	 
	return 0; // return 문을 생략하면 자동으로 return 0;이 삽입된다.  
}
