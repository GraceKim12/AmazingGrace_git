#include <stdio.h>

main(){
	int n, i, j, k;
	
	scanf("%d",&n);
	
	for(i=n; i>0; i--){  //5�Է��ϸ� 0���� 5��  
		for(j=0; j<n-i; j++)//n-i 5-5��ŭ ������� 
			printf(" ");
			
		for(k=0; k<n-j; k++) //k�� 5-0��ŭ *��� 
			printf("*");
		printf("\n");
	}
} 
