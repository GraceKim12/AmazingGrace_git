#include <stdio.h>

void main(){
	char ch = 'A';
	char *cp = &ch;
	
	printf("%c %c\n", ch, *cp);
	
	printf("%d %d\n", sizeof(ch), sizeof(cp));
	
} 


/*
Q) 왜 포인터는 더 큰것이쥬? 자료형은 같은뎅 
*/
