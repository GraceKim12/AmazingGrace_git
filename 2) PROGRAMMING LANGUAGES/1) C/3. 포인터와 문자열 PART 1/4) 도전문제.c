#include <stdio.h> 

void main(){
	char *string = "student";
	
	printf("%c\n", string[3]); //3��° 
	printf("%c\n", 2[string]); //2���� 
	printf("%c\n", *(string+4));//4��° 
	printf("%c\n", *(3+string));//3��° 
}
