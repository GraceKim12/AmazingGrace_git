#include <stdio.h>

void main(){
	char ch = 'A';
	char *cp = &ch;
	
	printf("%c %c\n", ch, *cp);
	
	printf("%d %d\n", sizeof(ch), sizeof(cp));
	
} 


/*
Q) �� �����ʹ� �� ū������? �ڷ����� ������ 
*/
