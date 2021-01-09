#include <stdio.h>

int main(){
	
	int h, m;
	int *hptr, *mptr;
	
	scanf("%d %d", &h, &m);
	
	hptr = &h;
	mptr = &m;
	
	printf("%d:%d", *hptr, *mptr);
	
	return 0;
} 
