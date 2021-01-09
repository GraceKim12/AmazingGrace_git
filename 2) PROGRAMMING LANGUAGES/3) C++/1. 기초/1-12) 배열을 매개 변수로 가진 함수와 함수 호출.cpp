#include <iostream>
using namespace std;

int addArray(int a[], int size);  //함수원형 선언 
void makeDouble(int a[], int size); //함수원형 선언 
void printArray(int a[], int size);  //함수원형 선언 

int main()
{
	int n[] = {1, 2, 3, 4, 5};  //int n[5]로 해도됨 
	int sum = addArray(n, 5);  //sum 은 addArray의 반환값 
	cout << "배열 n의 합은 " << sum << "입니다\n";  //반환값출력  
	
	makeDouble(n, 5);  //make호출  
	printArray(n, 5);  //printf호출 
}
	
int addArray(int a[], int size)  //배열과 개수를 전달받아 합을 리턴하는 함수  
{
	int i, sum=0;
	for(i=0; i<size; i++)
		sum += a[i];
	return sum;	
}

void makeDouble(int a[], int size)  //배열의 값을 두 배로 증가시키는 함수  
{
	int i;
	for(i=0; i<size; i++)  //배열인덱스 하나씩증가하면서 접근  
		a[i] *= 2;  		//i인덱스에 있는 값을 2배 곱해서 대입  
}

void printArray(int a[], int size)
{
	int i;
	for(i=0; i<size; i++)  //하나씩 접근  
		cout << a[i] << ' ';  //출력  
	cout << "\n";
}


/*
함수원형, 함수 프로토타입
: 변수 선언처럼 함수의 형식만 선언한 것 
선언하는 이유 
: 컴파일러에게 함수의 형식을 알려주어 함수 호출 문장이 정확한지 판단하게 도움 
 호출되기 전에 먼저 선언되어얗ㅁ 
함수의 원형을 선언하면 실제 함수의 위치가 어디에 있는 호출에 문제가 없음 
*/


/*
매개변수로 배열 전달
: 할수있음
*/
