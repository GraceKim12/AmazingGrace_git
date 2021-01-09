#include <stdio.h>

void swap(int num1, int num2)  //n1, n2 복사본  
{
	int tmp = 0;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
	
	//경계를 못넘나듬_주소가 없기때문에
	//swap 내에서만 값이 바뀜
	//main 함수에 영향을 주지 않음 
	//왜 경계를 넘나들어야함?_기능별로 쪼개야하기때문에
	//그래야 프로그래밍이 효율적으로 됨
	//복잡해도 써야함_효율적_쉽게해결가능
	//포인터의 장단점 파악해야함 
 } 
 
void main()
{
	int n1 = 5;
	int n2 = 10;
	
	swap(n1, n2);  //원본 
}

