#include <stdio.h>
#include <string.h>

void main()
{
	char *src = "ABC";
	char dest[100] = {0};
	
	strcat(dest, src);
	printf("%s %s\n", src, dest);
	
	strcat(dest, src);
	printf("%s %s\n", src, dest);
 } 
