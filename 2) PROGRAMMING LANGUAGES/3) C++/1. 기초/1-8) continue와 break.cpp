#include <iostream>
using namespace std;

int main()
{
	int a;
	
	while(true)  //무한 루프 
	{
		cout << "정수 입력>>";
		cin >> a;  
		
		if(a==0) //0이 입력되면 while문을 벗어남 
			break;
			
		if(a%3 != 0)  //a가 3의 배수이면 true 
		{
			cout << "No" << "\n";
			continue;  //다음 반복. while 문으로 분기 
		 } 
		cout << "Yes" << "\n";
	}
}
