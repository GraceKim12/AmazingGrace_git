#include <stdio.h>

int main(){
	
	int yyyy, mm, dd;
	int yptr, mptr, dptr;
	
	yptr = &yyyy;
	mptr = &mm;
	dptr = &dd;
	
	scanf("%d %d %d", yyyy, mm, dd);
	
	printf("%d.%02d.%02d", *yptr, *mptr, *dptr);
	
	return 0;
} 
