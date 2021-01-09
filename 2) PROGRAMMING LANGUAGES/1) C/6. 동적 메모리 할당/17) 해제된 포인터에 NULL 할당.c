#include <stdio.h>

void main()
{
	int *ip = (int*)malloc(sizeof(int));
	*ip = 5;
	///
	free(ip);
	ip = NULL;
 } 
