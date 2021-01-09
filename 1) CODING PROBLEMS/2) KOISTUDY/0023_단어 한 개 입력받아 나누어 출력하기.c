#include <stdio.h>

 int main(){
 	char a[30];
 	int i;
 	
 	scanf("%s", &a);
 	
 	for(i=0; a[i]!='\0'; i++)
 	{
 		printf("\'%c\'\n", a[i]);
	 }
	return 0;
 }
 
 /*
 문자열 배열 선언방법
 문자열 입력 방법 %s
 a[i]!='\0'   =>   i번째 있는 문자열이 \0(널값)이 아닐때까지
 '출력하려면 앞에 \ 붙혀주어야함. 
 문자열 출력방법 %c 
 */
