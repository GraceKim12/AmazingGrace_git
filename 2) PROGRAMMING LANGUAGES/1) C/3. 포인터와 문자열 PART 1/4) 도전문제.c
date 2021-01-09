#include <stdio.h> 

void main(){
	char *string = "student";
	
	printf("%c\n", string[3]); //3번째 
	printf("%c\n", 2[string]); //2번재 
	printf("%c\n", *(string+4));//4번째 
	printf("%c\n", *(3+string));//3번째 
}
