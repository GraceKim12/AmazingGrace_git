#include <stdio.h>

int main(){
	int a, b;
	int *aptr, *bptr;
	
	scanf("%d %d", &a, &b);
	
	aptr = &a;
	bptr = &b;
	
	printf("%d %d", *aptr, *bptr);
	
	return 0;
} 
