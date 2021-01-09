#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int stringLength(const char* string)  //상수문자 
{
	int length = 0;
	while(*(string++))
		length++;
	return length;
}

void main()
{
	char simpleArray[] = "simple string";
	char *simplePtr = (char*)malloc(strlen("simple string")+1);
	strcpy(simplePtr, "simple string");
	
	printf("%d\n", stringLength(simpleArray));
	printf("%d\n", stringLength(&simpleArray));
	printf("%d\n", stringLength(&simpleArray[0]));
	printf("%d\n", stringLength(simplePtr));
