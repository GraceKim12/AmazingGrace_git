#include <stdio.h>

void main()
{
	char *str[3];
	char **strpp;
	
	strpp = str;  //strpp = &str[0];
	
	str[0] = "Hong Gil Dong";
	str[1] = "Choi Gil Dong";
	str[2] = "Kim Gil Dong";
	
	printf("str[0]: %s\n", str[0]);
	printf("str[0]: %s\n", str[0]);
	printf("str[0]: %s\n", str[0]);
	putchar('\n');
	printf("*strpp: %s\n", *strpp);
	printf("*(strpp+1): %s\n", *(strpp+1));
	printf("*(strpp+2): %s\n", *(strpp+2));
	putchar('\n');
	printf("**strpp: %c\n", **strpp);
 } 
