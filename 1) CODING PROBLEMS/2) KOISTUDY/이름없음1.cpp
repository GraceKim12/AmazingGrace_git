#include <stdio.h>
#include <stdlib.h>

void main()
{
	//int *s1=malloc(sizeof(int)*10);
	
	//char s1[10]=malloc(sizeof(char));
	
	//char *s1=malloc(sizeof(char)*10);
	
	//char s1=malloc(sizeof(char)*10);
	
	char *s1[10]=malloc(sizeof(char));
	
	printf("문자열을 입력하세요: ");
	scanf("%s", s1);
	
	printf("%s\n", s1);
	
	free(s1); 
 } 
