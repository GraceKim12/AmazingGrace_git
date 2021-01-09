#include <stdio.h>

int main(){
	
	float n;
	float *nptr;
	
	scanf("%f", &n);
	
	nptr = &n;
	
	printf("%.2f", *nptr);
	
	return 0;
} 
