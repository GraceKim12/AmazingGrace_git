#include <stdio.h>
#include <string.h>

void main()
{
	char *ptr1 = "ABC";
	char *ptr2 = "ABC";
	int i;
	
	i=strcmp(ptr1, ptr2);
	printf("%d\n", i);
 } 
 
 //문자열 길이 비교하는 0같을때 앞에꺼가크면 1, 작으면 -1 
