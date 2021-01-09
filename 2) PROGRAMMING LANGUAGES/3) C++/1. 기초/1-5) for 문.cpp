#include <iostream>
using namespace std;

int main()
{
	int i, a, b, sum=0;
	
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;   
	
	for (i=a; i<=b; i++){
		sum += i;
	} 
	
	cout << a << "에서 " << b << "까지 합은 " << sum;
 } 
 
 /*
 break: 반복문 벗어남
 continue: 즉각 다음 반복으로 넘어가서 조건 검사  
 */
