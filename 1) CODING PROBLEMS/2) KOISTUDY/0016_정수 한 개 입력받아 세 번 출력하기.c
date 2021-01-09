#include <stdio.h>

int main(){
	
	int n;
	int *nptr;
	
	scanf("%d", &n);
	
	nptr = &n;
	
	printf("%d %d %d", *nptr, *nptr, *nptr);
	
	return 0;
} 
