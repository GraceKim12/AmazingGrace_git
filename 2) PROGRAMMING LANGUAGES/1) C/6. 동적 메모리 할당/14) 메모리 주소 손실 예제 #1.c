#include<stdio.h>

void main()
{
	int *ip = (int*)malloc(sizeof(int));
	*ip = 5;
	///
	ip = (int*)malloc(sizeof(int));
 } 
 
 //메모리 누수  
