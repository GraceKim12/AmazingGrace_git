#include <stdio.h>

main(){
	int n;
	int i,j;
	
	scanf("%d", &n);
	
	for(i=n; i>0; i--){
		
		for(j=0; j<i; j++){
			printf("*");
				
		}
		printf("\n");
	}
}
