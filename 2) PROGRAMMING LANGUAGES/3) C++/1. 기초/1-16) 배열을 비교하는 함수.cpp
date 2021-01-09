#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int size); //함수원형선언  

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3, 4, 5};
	
	if(equalArray(a, b, 5))  //배열 전달 a, b, 정수 5_참이라면 = 
		cout << "arrays equal" << "\n";
	else					//거짓이라면 != 
		cout << "arrays not equal" << "\n";
}

bool equalArray(int* p, int* q, int size)	//주소,주소,정수변수  
{
	int i;
	
	for(i=0; i<size; i++)  //size 만큼 반복  
	{
		if(*p != *q)	//p[i] 랑 q[i]랑 비교  
			return false;
		p++;  //다음 원소 
		q++;  //다음 원소 
	}
	return true;
}

/*
포인터는 배열로 생각할수 있기때문에 다음과 같은 코드로 작성가능 

bool equalArray(int* p, int* q, int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		if(p[i] != q[i]) return false; 
	}
}
*/
