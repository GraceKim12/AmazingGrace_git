#include <stdio.h>

int main(){
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);
	return 0;
} 

//fgets 함수를 입력하면 공백을 포함한 문장을 입력받을수있음. 

