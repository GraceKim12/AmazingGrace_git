#include <stdio.h>

void main(){
	char ch = 'A';
	char *cp = &ch;
	
	printf("%c %c\n", ch, *cp);
	
	printf("%d %d\n", sizeof(ch), sizeof(cp));
	
} 


/*
Q) �� �����ʹ� �� ū������? �ڷ����� ������ 
A) �����ʹ� 4 or 8�� �׻� (�ּҰ�ũ�⵿��) 
*/
