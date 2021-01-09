#include <iostream>
using namespace std;
//C랑 입출력 라이브러리가 다름 

int g=20; //전역변수  

int add(int x, int y)  //전역 함수  
{
	return x+y;
 } 

int main()
{
	int a, b, sum;  //지역변수  
	cin >> a >> b;  //입력 
	sum = a + b;
	cout << sum;  //출력  
	return 0;
}
