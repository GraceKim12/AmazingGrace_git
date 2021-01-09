#include <stdio.h>

void main()
{
	int i;
	
	int *ip;
	
	ip = 0;  //ip=NULL:
	ip = &i;
	*ip = 0;
	
	printf("%d %d\n", i, *ip);
 } 
