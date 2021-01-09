#include <stdio.h>

void main()
{
	char *string;
	string = "hope";
	int i;
	printf("%c\n", *(string+0));
	printf("%c\n", *(string+1));
	printf("%c\n", *(string+2));
	printf("%c\n", *(string+3));
	
	printf("%s\n", string); //문자열 출력 
	puts(string);  //문자열 출력  
	printf(string);  
	printf("\n");
	
	for(i=0; string[i]!='\0'; i++) // 0이 아닐때까지=0이 되면 스탑  
		printf("%c\n", string[i]);
		
	for(;*string;string++)  //처음 초기식 없음: 첫주소, *일때까지 *!=\n 
		printf("%c\n", *string); //문자출력  
}
