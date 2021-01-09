#include <stdio.h> 

int main(){
	int a, b;
	
	scanf("%d-%d", &a, &b);
	
	printf("%06d%07d", a, b);
	
	return 0;
}


/*
입력할때 가운데 - 같이 입력해주어야함. 
*/
