#include <iostream>
using namespace std;

int main()
{
	int score;	
	
	cout << "점수를 입력하세요>>"; //출력  
	cin >> score;  //score 입력  
	
	if(score > 100 || score < 0)	// 점수 범위 정하기 
	{
		cout << "잘못된 점수 입니다"; 	
		return 0; 
	} 	
	
	 
	if(score >= 90)		//90이상 100이하  
		cout << "A 입니다";
	else if(score >= 80)	//80이상 89이하
		cout << "B 입니다";	  
	else if(score >= 70)	//70이상 79이하
		cout << "C 입니다";	  
	else if(score >= 60)	//60이상 69이하
		cout << "D 입니다";	  
	else 	//0이상 59이하  
		cout << "F 입니다"; 
 }
