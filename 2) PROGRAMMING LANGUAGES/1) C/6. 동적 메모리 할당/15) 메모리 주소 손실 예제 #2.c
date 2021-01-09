#include <stdio.h>

void main()
{
	char *name = (char*)malloc(strlen("Susan")+1);
	strcpy(name, "Susan");
	while(*name != 0)
	{
		printf("%c", *name);
		name++
	}
	
 } 
