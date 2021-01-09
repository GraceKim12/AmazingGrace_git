#include <stdio.h>

int main(){
	int yyyy, mm, dd;
	
	scanf("%d.%d.%d", &yyyy, &mm, &dd);
	
	printf("%02d-%02d-%04d", dd, mm, yyyy);
	
	return 0;
} 

/*
%04d  =>  출력하는 자리수를 4로 지정 
*/
