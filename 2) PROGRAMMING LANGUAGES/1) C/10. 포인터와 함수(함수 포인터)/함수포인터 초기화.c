#include <stdio.h>

int square(int num) 
{
	return num*num;
}

void main()
{
	int n = 5;
	int (*fptr) (int);
	fptr = square;
	printf=("%d squared is %d\n", fptr(n));
}

//함수명이 곧 주소임_배열이름이랑 똑같음(배열이름=주소)
 
