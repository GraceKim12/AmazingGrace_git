#include <stdio.h>

void main()
{
	char *cp;
	cp=(char*)malloc(sizeof(char)*100);
	memset(cp, 0, 100);
	free(cp);
 } 
