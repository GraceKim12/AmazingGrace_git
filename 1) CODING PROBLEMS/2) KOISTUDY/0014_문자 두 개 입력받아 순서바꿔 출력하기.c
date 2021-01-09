#include <stdio.h>

int main(){
	
	char x, y;
	char *xptr, *yptr;
	
	xptr = &x;
	yptr = &y;
	
	scanf("%c %c", xptr, yptr);
	
	printf("%c %c", y, x);
	
	return 0;
} 


