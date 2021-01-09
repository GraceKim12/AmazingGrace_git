#include <stdio.h>

void main(){
	int n = 20;
	int *np = &n;
	
	printf("%d %d\n", n, *np);
	printf("%d %d\n", sizeof(n), sizeof(np));
} 
