#include <stdio.h>

main(){
	int n, i, j, k;
	
	scanf("%d",&n);
	
	for(i=n; i>0; i--){  //5입력하면 0까지 5줄  
		for(j=0; j<n-i; j++)//n-i 5-5만큼 공백출력 
			printf(" ");
			
		for(k=0; k<n-j; k++) //k가 5-0만큼 *출력 
			printf("*");
		printf("\n");
	}
} 
