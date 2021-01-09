#include <stdio.h>

void swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
 } 
 
void main(){
	
	int a = 100, b = 200;
	printf("[BEFORE] %d %d\n", a, b);
	swap(a, b);
	printf("[AFTER] %d %d\n", a, b);
}

/*
스왑함수안에서의 a, b는 지역변수이기때문에 
main 함수에 있는 a, b에 영향을 끼치지 못한다. 
*/ 
