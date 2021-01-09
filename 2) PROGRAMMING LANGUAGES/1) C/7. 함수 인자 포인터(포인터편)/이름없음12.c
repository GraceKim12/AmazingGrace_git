#include <stdio.h>
#include <string.h>

void main()
{
	char *c="ABCDE";
	char dest[5]="1234";
	strcpy(dest,c);
	
	printf("%s %s\n", c, dest);
}
